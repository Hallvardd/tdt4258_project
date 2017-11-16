# Makefile

KDIR=/home/tdt4258/Downloads/OSELAS.BSP-EnergyMicro-Gecko2/platform-energymicro-efm32gg-dk3750/build-target/linux-3.12-rc4/kernel

obj-m := driver-gamepad.o

all:
	make -C $(KDIR) modules SUBDIRS=$(shell pwd)
clean:
	make -C $(KDIR) modules SUBDIRS=$(shell pwd) clean
