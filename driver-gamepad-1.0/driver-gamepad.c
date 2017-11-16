/**
 * @file	gamepad_module.c
 * @author	Group19
 * @date	21 November 2017
 * @brief	Driver for the gamepad for EFM32 Gecko board
 *
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/debugfs.h>
#include <linux/fs.h>
#include <linux/semaphore.h>
#include <linux/irqreturn.h>
#include <linux/interrupt.h>
#include <asm/uaccess.h>
#include <asm/io.h>

#include "efm32gg.h"

#define DEV_NAME 		"gamepad_char_dev"
#define CLASS_NAME 		"gamepad"
#define SIZE_MESSAGE_BUFFER	512
#define DEBUGFS_DIR_NAME	"gamepad"
#define DEBUGFS_FILE_NAME	"gamepad_debugfs"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Group19");
MODULE_DESCRIPTION("Basic char device for the gamepad");

static struct semaphore sem;
static int opened = 0;

// device
static int majorNr;
static struct device *gamepadDev   = NULL;

// read, write functions
static short size_message;
static char  myBuffer[SIZE_MESSAGE_BUFFER] = { 0 };

// debugfs specific
static struct dentry *gamepadDebugfsDir = NULL;
static struct dentry *gamepadDebugfsFile = NULL;

// device specific
static int     dev_open(struct inode *, struct file *);
static int     dev_release(struct inode *, struct file *);
static ssize_t dev_read(struct file *, char *, size_t, loff_t *);
static ssize_t dev_write(struct file *, const char *, size_t, loff_t *);

// struct with callback functions
static struct file_operations fops =
  {
    .open = dev_open,
    .read = dev_read,
    // write shouldn't be allowed	.write = dev_write,
    .release = dev_release,
  };

// interrupts
int irq_gpio_odd = 17, irq_gpio_even = 18, irq_timer0 = 19;
static volatile short gpio_pressed = 0;


static struct nvic_r
{
  uint32_t *nvic_iser0;
  uint32_t *nvic_iser1;
  uint32_t *nvic_icer0;
  uint32_t *nvic_icer1;

} *nvic_reg;

static struct gpio_r
{
  uint32_t *gpio_pc_ctrl;
  uint32_t *gpio_pc_model;
  uint32_t *gpio_pc_modeh;
  uint32_t *gpio_pc_dout;
  uint32_t *gpio_pc_doutset;
  uint32_t *gpio_pc_doutclr;
  uint32_t *gpio_pc_doutdin;
  uint32_t *gpio_pc_din;
  uint32_t *gpio_pc_pinlockn;

  uint32_t *gpio_extipsell;
  uint32_t *gpio_extipselh;
  uint32_t *gpio_extirise;
  uint32_t *gpio_extifall;
  uint32_t *gpio_ien;
  //uint32_t *gpio_ifc;

} *gpio_reg;

// sysfs
static unsigned int gamepad_sysfs = 1; // default just one process can use the device

// gpio memory resource structures

struct resource *mem_gpioInterrupts;
struct resource *mem_gpioPortC;
struct resource *mem_nvic_iser;
struct resource *mem_nvic_icer;

irqreturn_t GPIO_ODD_ISR(int irq, void *dev_id, struct pt_regs *regs)
{
  gpio_pressed = (~(*gpio_reg->gpio_pc_din)) & 0xFF;
}

irqreturn_t GPIO_EVEN_ISR(int irq, void *dev_id, struct pt_regs *regs)
{
  gpio_pressed = (~(*gpio_reg->gpio_pc_din)) & 0xFF;
}

static ssize_t gamepad_show(struct class *cls, struct class_attribute *attr, char * buf){
  return sprintf(buf, "%u\n", gamepad_sysfs);
}

static ssize_t gamepad_store(struct class *cls, struct class_attribute *attr, const char * buf, size_t count){

  int ret;
  unsigned int val_from_buf;

  printk(KERN_INFO "%s: Just about to store value to sysfs file: '%s'!\n", DEV_NAME, "gamepad_sysfs");

  ret = kstrtouint(buf, 10, &val_from_buf);

  if(ret < 0)
    return ret;
  else
    printk(KERN_INFO "%s: successfully stored numeric value from user: %d!\n", DEV_NAME, val_from_buf);

  if( (val_from_buf < 1) || (val_from_buf > 10) ){
    printk(KERN_INFO "%s: ... but it is a wrong value! Please set a valid value from range: 1-10 \n", DEV_NAME);
    return -EINVAL;
  } else {
    gamepad_sysfs = val_from_buf;

    /* update, initialize again our semaphore with new initial value. We need to be careful if at this moment device file
     * is opened by some processes. If so, we should init semaphore with value just written to sysfs but decreased by
     * number of current processes that are accessing dev file. When processes will end their work on file, release function
     * is taking care of increasing sem value, so it will return to a proper value (max allowed processes) specified in gamepad_sysfs
     */
    sema_init(&sem, (int) (gamepad_sysfs - opened));

    printk(KERN_INFO "%s: Setting new value %d (because->) to semaphore. Now max %d processes can open the device!\n", DEV_NAME, gamepad_sysfs - opened, gamepad_sysfs);
    printk(KERN_INFO "%s:                               \\                                                        \n", DEV_NAME);
    printk(KERN_INFO "%s: At this moment                 %d processes are currently using the device!\n", DEV_NAME, opened);
  }
  return count;
}

static struct class_attribute class_attr[] = {
  __ATTR(gamepad_sysfs, 0664, gamepad_show, gamepad_store),
  __ATTR_NULL
};

static struct class gamepad_cls = {
  .name = "gamepad",
  .owner = THIS_MODULE,
  .class_attrs = (struct class_attribute *) &class_attr
};


// Initialization function
static int __init my_init(void){

  int ret = 0;

  printk(KERN_INFO "%s: Hello, module has been initialized!\n", DEV_NAME);

  majorNr = register_chrdev(0, DEV_NAME, &fops);

  if(majorNr < 0){

    printk(KERN_ERR "%s: Failed to register major number\n", DEV_NAME);
    return majorNr;
  }

  printk(KERN_INFO "%s registered with major number %d!\n", DEV_NAME, majorNr);

  ret = class_register(&gamepad_cls);

  if (ret) {
    unregister_chrdev(majorNr, DEV_NAME);
    printk(KERN_ERR "%s: Failed to register device class! \n", DEV_NAME);
    return ret;
  }

  printk(KERN_INFO "%s: Device class registered as: '%s'\n", DEV_NAME, CLASS_NAME);

  gamepadDev = device_create(&gamepad_cls, NULL, MKDEV(majorNr, 0), NULL, DEV_NAME);

  if(IS_ERR(gamepadDev)){

    class_unregister(&gamepad_cls);
    class_destroy(&gamepad_cls);
    unregister_chrdev(majorNr, DEV_NAME);
    printk(KERN_ERR "%s: Failed to create device! \n", DEV_NAME);
    return PTR_ERR(gamepadDev);
  }

  gamepadDebugfsDir = debugfs_create_dir(DEBUGFS_DIR_NAME, NULL);

  if (!gamepadDebugfsDir) {
    printk(KERN_ERR "%s: Failed to create debugfs directory! \n", DEV_NAME);
    return -ENXIO;
  }
  printk(KERN_INFO "%s: debugfs directory /sys/kernel/debug/%s created successfully ! \n"
         , DEV_NAME, DEBUGFS_DIR_NAME);

  gamepadDebugfsFile = debugfs_create_u16(DEBUGFS_FILE_NAME, 0666,
                                          gamepadDebugfsDir, (u16 *)&majorNr);
  if (!gamepadDebugfsFile) {
    printk(KERN_ALERT "%s: failed to create debugfs file, anyway device can work" \
           " without this... just informing\n", DEV_NAME);
  }
  printk(KERN_INFO "%s: debugfs file '%s' created successfully in /sys/kernel/debug/%s/ ! \n"
         , DEV_NAME, DEBUGFS_FILE_NAME, DEBUGFS_DIR_NAME);

  printk(KERN_INFO "%s: Device created successfully! \n", DEV_NAME);

  sema_init(&sem, (int) gamepad_sysfs);

  /* Requesting HW memory regions */

  mem_gpioPortC = request_mem_region((unsigned long)GPIO_PC_BASE, (unsigned long)0x24, "Gamepad_gpio_portC");

  if(NULL == mem_gpioPortC){
    printk(KERN_ERR "%s: Failed to request memory region for gpio port C! \n", DEV_NAME);
  }

  mem_gpioInterrupts = request_mem_region((unsigned long)(GPIO_PA_BASE + 0x100), (unsigned long)0x12, "Gamepad_gpio_interrupts");

  if(NULL == mem_gpioInterrupts){
    printk(KERN_ERR "%s: Failed to request memory region for gpio interrupts! \n", DEV_NAME);
  }

  mem_nvic_iser = request_mem_region((unsigned long)0xe000e100, (unsigned long)0x8, "Gamepad_nvic_iser");

  if(NULL == mem_nvic_iser){
    printk(KERN_ERR "%s: Failed to request memory region for cpu NVIC ISER regs! \n", DEV_NAME);
  }

  mem_nvic_icer = request_mem_region((unsigned long)0xe000e180, (unsigned long)0x8, "Gamepad_nvic_icer");

  if(NULL == mem_nvic_icer){
    printk(KERN_ERR "%s: Failed to request memory region for cpu NVIC ICER regs! \n", DEV_NAME);
  }

  gpio_reg->gpio_pc_ctrl = ioremap_nocache((unsigned long)(GPIO_PC_CTRL), (unsigned long)0x4);
  gpio_reg->gpio_pc_model = ioremap_nocache((unsigned long)(GPIO_PC_MODEL), (unsigned long)0x4);
  gpio_reg->gpio_pc_modeh = ioremap_nocache((unsigned long)(GPIO_PC_MODEH), (unsigned long)0x4);
  gpio_reg->gpio_pc_dout = ioremap_nocache((unsigned long)(GPIO_PC_DOUT), (unsigned long)0x4);
  gpio_reg->gpio_pc_doutset = ioremap_nocache((unsigned long)(GPIO_PC_DOUTSET), (unsigned long)0x4);
  gpio_reg->gpio_pc_doutclr = ioremap_nocache((unsigned long)(GPIO_PC_DOUTCLR), (unsigned long)0x4);
  gpio_reg->gpio_pc_douttgl = ioremap_nocache((unsigned long)(GPIO_PC_DOUTTGL), (unsigned long)0x4);
  gpio_reg->gpio_pc_din = ioremap_nocache((unsigned long)(GPIO_PC_DIN), (unsigned long)0x4);
  gpio_reg->gpio_pc_pinlockn = ioremap_nocache((unsigned long)(GPIO_PC_PINLOCKN), (unsigned long)0x4);

  gpio_reg->gpio_extipsell = ioremap_nocache((unsigned long)(GPIO_EXTIPSELL), (unsigned long)0x4);
  gpio_reg->gpio_extipselh = ioremap_nocache((unsigned long)(GPIO_EXTIPSELH), (unsigned long)0x4);
  gpio_reg->gpio_extirise = ioremap_nocache((unsigned long)(GPIO_EXTIRISE), (unsigned long)0x4);
  gpio_reg->gpio_extifall = ioremap_nocache((unsigned long)(GPIO_EXTIFALL), (unsigned long)0x4);
  gpio_reg->gpio_ien = ioremap_nocache((unsigned long)(GPIO_PC_IEN), (unsigned long)0x4);
  //gpio_reg->gpio_if = ioremap_nocache((unsigned long)(GPIO_PC_IF), (unsigned long)0x4);
  //gpio_reg->gpio_ifc = ioremap_nocache((unsigned long)(GPIO_PC_IFC), (unsigned long)0x4);

  nvic_reg->nvic_iser0 = ioremap_nocache((unsigned long)(ISER0), (unsigned long)0x4);
  nvic_reg->nvic_iser1 = ioremap_nocache((unsigned long)(ISER1), (unsigned long)0x4);
  nvic_reg->nvic_icer0 = ioremap_nocache((unsigned long)(ICER0), (unsigned long)0x4);
  nvic_reg->nvic_icer1 = ioremap_nocache((unsigned long)(ICER1), (unsigned long)0x4);

  /* Actually enable interrupts */

  outb((unsigned long)0x1802, ISER0);

  return 0;
}

static int dev_open(struct inode *inodep, struct file *file){

  int ret;

  opened++;

  ret = request_irq(irq_gpio_odd, GPIO_ODD_ISR, IRQF_DISABLED, "gpio_odd", NULL);

  if(ret)
    {
      printk(KERN_INFO "%s: can't get assigned irq for gpio_odd! \n", DEV_NAME);
    }

  ret = request_irq(irq_gpio_even, GPIO_EVEN_ISR, IRQF_DISABLED, "gpio_even", NULL);

  if(ret)
    {
      printk(KERN_INFO "%s: can't get assigned irq for gpio_even! \n", DEV_NAME);
    }

  /*ret = request_irq(irq_timer0, GPIO_TIMER0_ISR, IRQF_DISABLED, "timer0", NULL);

  if(ret)
    {
      printk(KERN_INFO "%s: can't get assigned irq for timer0! \n", DEV_NAME);
      }*/

  // don't sleep... immediately return if too much processes (than allowed via sysfs) are using dev
  ret = down_trylock(&sem);

  if (ret)
    return -EMFILE;


  printk(KERN_INFO "%s: Device has been opened! \n", DEV_NAME);
  return 0;
}


static int dev_release(struct inode *inodep, struct file *filep){

  up(&sem);

  if (opened)
    --opened;

  printk(KERN_INFO "%s: Device released! \n", DEV_NAME);
  return 0;
}

static ssize_t dev_read(struct file *filep, char *buff, size_t len, loff_t *offset){

  int err_cnt = 0;

  sprintf(myBuffer, "%d\n", gpio_pressed);

  err_cnt = copy_to_user(buff, myBuffer, size_message);

  if(err_cnt == 0){

    printk(KERN_INFO "%s: sending following value: '%s' (%d bytes) to the user\n", DEV_NAME, myBuffer, size_message);

    size_message = 0;

    return(size_message);
  } else {

    printk(KERN_INFO "%s: Failed to send %d bytes to the user! \n", DEV_NAME, err_cnt);
    return -EFAULT;
  }

  gpio_pressed = 0;
}

// Actually unused.
static ssize_t dev_write(struct file *filep, const char *buff, size_t len, loff_t *offset){

  unsigned long ret;

  ret = copy_from_user(myBuffer, buff, len);

  if (ret > 0)
    printk(KERN_INFO "%s: %lu bytes could not be copied from user!\n", DEV_NAME, ret);

  size_message = strlen(myBuffer);
  printk(KERN_INFO "%s: Received data: '%s' (%d bytes) from the user \n", DEV_NAME, myBuffer, size_message);

  return len;
}

// Cleanup function

static void __exit my_exit(void){

  iounmap(gpio_reg->gpio_pc_ctrl);
  iounmap(gpio_reg->gpio_pc_model);
  iounmap(gpio_reg->gpio_pc_modeh);
  iounmap(gpio_reg->gpio_pc_dout);
  iounmap(gpio_reg->gpio_pc_doutset);
  iounmap(gpio_reg->gpio_pc_doutclr);
  iounmap(gpio_reg->gpio_pc_douttgl);
  iounmap(gpio_reg->gpio_pc_din);
  iounmap(gpio_reg->gpio_pc_pinlockn);

  iounmap(gpio_reg->gpio_extipsell);
  iounmap(gpio_reg->gpio_extipselh);
  iounmap(gpio_reg->gpio_extirise);
  iounmap(gpio_reg->gpio_extifall);
  iounmap(gpio_reg->gpio_ien);
  //iounmap(gpio_reg->gpio_if);
  //iounmap(gpio_reg->gpio_ifc);

  iounmap(nvic_reg->nvic_iser0);
  iounmap(nvic_reg->nvic_iser1);
  iounmap(nvic_reg->nvic_icer0);
  iounmap(nvic_reg->nvic_icer1);

  release_mem_region((unsigned long)GPIO_PC_BASE, (unsigned long)0x24);

  debugfs_remove_recursive(gamepadDebugfsDir);
  unregister_chrdev(majorNr, DEV_NAME);
  device_destroy(&gamepad_cls, MKDEV(majorNr, 0));
  class_destroy(&gamepad_cls);

  printk(KERN_INFO "%s: Good bye! Cleaning up module...\n", DEV_NAME);

}

module_init(my_init);
module_exit(my_exit);
