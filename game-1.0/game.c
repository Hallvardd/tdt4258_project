#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <math.h>

#include "graphics.h"

#define DISPLAY_WIDTH 320
#define DISPLAY_HEIGHT 240
#define FRAMERATE 30

int BOARD_WIDTH = 15;
int BOARD_HEIGHT = 50;

int BALL_WIDTH = 15;
int BALL_HEIGHT = 15;

//pointer dimensions
int POINTER_WIDTH = 20;
int POINTER_HEIGHT = 20;
int POINTER_MARGIN = 20;

//menu dimensions:
int MENU_ITEM_WIDTH = 80;
int MENU_ITEM_HEIGHT = 20;
int MENU_ITEM_MARGIN = 60;
int START_POS_Y = 40;
int TEAM_POS_Y = START_POS_Y + 60;
int EXIT_POS_Y = TEAM_POS_Y + 60;

uint16_t* framebuffer;
int file_descriptor;
int board_margin = 10;
uint8_t background_color = 0x00;
int board_movement_speed = 200;
int ball_movement_speed = 200;
float cur_ball_speed = 200;

struct Board {
float y;
int x, old_y;
};

struct Ball {
float x,y;
int old_x,old_y;
float x_vel,y_vel;
};

struct Pointer {
	int x,y,old_y;
};

/*
struct MenuItemStart {
	int x = MENU_ITEM_MARGIN;
	int y = START_POS_Y;
};

struct MenuItemStart {
	int x = MENU_ITEM_MARGIN;
	int y = START_POS_Y;
};
*/






bool update_area(int startX, int startY, int width, int height) {
	/*if (startX < 0 || startY < 0 || startX > DISPLAY_WIDTH || startY > DISPLAY_HEIGHT || (startX+width) > DISPLAY_WIDTH || (startY+height) > DISPLAY_HEIGHT) {
		return false;
	}*/
	struct fb_copyarea rect;
	
	rect.dx = startX;
	rect.dy = startY;
	rect.width = width;
	rect.height = height;
	ioctl(file_descriptor, 0x4680, &rect);
	return true;
}

void draw_pointer(struct Pointer* p) {
	int y = p->y;
	if (p->y == p->old_y) {
		return;
	}
	for (int i = p->old_y; i < p->old_y + POINTER_HEIGHT + 1; i++) {
		memset(&framebuffer[(i*DISPLAY_WIDTH) + p->x], background_color, POINTER_WIDTH*sizeof(uint16_t));
	}
	for (int i = p->y; i < y_pos + _HEIGHT; i++) {
		memcpy(&framebuffer[(i*DISPLAY_WIDTH) + p->x], &ball_pixels[(i - y_pos) * BALL_WIDTH], BALL_WIDTH*sizeof(uint16_t));
		memcpy(&framebuffer[(i*DISPLAY_WIDTH) + p->x], &pointer_pixels[index * POINTER_WIDTH], POINTER_WIDTH*sizeof(uint16_t));
	}
	int min_y = (p->y < p->old_y) ? p->y : p->old_y;
	int max_y = ((p->y > p->old_y) ? p->y : p->old_y) + POINTER_HEIGHT;
	max_y = (max_y >= DISPLAY_HEIGHT) ? DISPLAY_HEIGHT-1 : max_y;
	//printf("min_y: %d, max_y:%d\n", min_y, max_y);
	update_area(p->x, min_y, POINTER_WIDTH, max_y - min_y + 1);
}

void draw_menu(){
	// Method drawing all menu elements, should be changed to take menu items as a parameter, but not for now draws all elements hard-coded.

	for (int i = START_POS_Y; i < START_POS_Y + MENU_ITEM_HEIGHT + 1; i++) {
		memset(&framebuffer[(i*DISPLAY_WIDTH) + MENU_ITEM_MARGIN], background_color, POINTER_WIDTH*sizeof(uint16_t));
	}
	for (int i = START_POS_Y; i < START_POS_Y + MENU_ITEM_HEIGHT; i++) {
		memcpy(&framebuffer[(i*DISPLAY_WIDTH) + MENU_ITEM_MARGIN], &start_pixels[(i - START_POS_Y) * MENU_ITEM_WIDTH], MENU_ITEM_WIDTH*sizeof(uint16_t));
		memcpy(&framebuffer[(i*DISPLAY_WIDTH) + MENU_ITEM_WIDTH], &start_pixels_pixels[index * MENU_ITEM_WIDTH], MENU_ITEM_WIDTH*sizeof(uint16_t));
	}
	int min_y = START_POS_Y;
	int max_y = START_POS_Y + MENU_ITEM_HEIGHT;
	update_area(MENU_ITEM_MARGIN, min_y, MENU_ITEM_WIDTH, max_y - min_y + 1);
}


void draw_board(struct Board* b) {
	int y = (int) b->y;
	if (y == b->old_y) {
		return;
	}
	for (int i = b->old_y; i < b->old_y + BOARD_HEIGHT + 1; i++) {
		memset(&framebuffer[(i*DISPLAY_WIDTH) + b->x], background_color, BOARD_WIDTH*sizeof(uint16_t));
	}
	for (int i = y; i < y + BOARD_HEIGHT; i++) {
		int index = i - y;
		if (index < 5) {
			memcpy(&framebuffer[(i*DISPLAY_WIDTH) + b->x], &board_pixels_top[index * BOARD_WIDTH], BOARD_WIDTH*sizeof(uint16_t));
		} else if (index < (BOARD_HEIGHT - 5)) {
			memcpy(&framebuffer[(i*DISPLAY_WIDTH) + b->x], board_pixels_middle, BOARD_WIDTH*sizeof(uint16_t));
		} else {
			memcpy(&framebuffer[(i*DISPLAY_WIDTH) + b->x], &board_pixels_bottom[(index - (BOARD_HEIGHT - 5)) * BOARD_WIDTH], BOARD_WIDTH*sizeof(uint16_t));
		}
	}

	int min_y = (y < b->old_y) ? y : b->old_y;
	int max_y = ((y > b->old_y) ? y : b->old_y) + BOARD_HEIGHT;
	max_y = (max_y >= DISPLAY_HEIGHT) ? DISPLAY_HEIGHT-1 : max_y;
	//printf("min_y: %d, max_y:%d\n", min_y, max_y);
	update_area(b->x, min_y, BOARD_WIDTH, max_y - min_y + 1);
}

void draw_ball(struct Ball* b) {
	int x_pos = (int) b->x;
	int y_pos = (int) b->y;
	for (int i = b->old_y; i < b->old_y + BALL_HEIGHT + 1; i++) {
		memset(&framebuffer[(i*DISPLAY_WIDTH) + b->old_x], background_color, BALL_WIDTH*sizeof(uint16_t));
	}
	for (int i = b->y; i < y_pos + BALL_HEIGHT; i++) {
		memcpy(&framebuffer[(i*DISPLAY_WIDTH) + x_pos], &ball_pixels[(i - y_pos) * BALL_WIDTH], BALL_WIDTH*sizeof(uint16_t));
	}
	int min_x = (x_pos < b->old_x) ? x_pos : b->old_x;
	int min_y = (y_pos < b->old_y) ? y_pos : b->old_y;
	int max_x = ((x_pos > b->old_x) ? x_pos : b->old_x) + BALL_WIDTH;
	int max_y = ((y_pos > b->old_y) ? y_pos : b->old_y) + BALL_HEIGHT;
	max_y = (max_y >= DISPLAY_HEIGHT) ? DISPLAY_HEIGHT-1 : max_y;
	//printf("min_x: %d, max_x: %d, min_y: %d, max_y:%d\n", min_x, max_x, min_y, max_y);
	update_area(min_x, min_y, max_x - min_x, max_y - min_y + 1);
}

void play_AI(struct Board* board, struct Ball* ball, float timediff) {
	bool up = (board->y + (BOARD_HEIGHT / 2)) > ((int) (ball->y) + (BALL_HEIGHT / 2));
	float y_diff = board_movement_speed * timediff;
	y_diff = up ? (y_diff * (-1)) : y_diff;
	float new_y = board->y + y_diff;
	//printf("c: %d, o: %d, dst: %d, diff: %d, n: %d\n",board->y,board->old_y,y_distance,y_diff,new_y);
	if (new_y < 0) {
		new_y = 0;
	} else if (new_y + BOARD_HEIGHT > DISPLAY_HEIGHT) {
		new_y = DISPLAY_HEIGHT - BOARD_HEIGHT;
	}
	board->old_y = (int) board->y;
	board->y = new_y;
}

void update_ball(struct Ball* ball, struct Board* left, struct Board* right, float timediff) {
	float pos_diff_x = ball->x_vel * timediff;
	float pos_diff_y = ball->y_vel * timediff;
	float new_x = ball->x + pos_diff_x;
	float new_y = ball->y + pos_diff_y;

	//printf("pos_x: %d, pos_y: %d, x_vel: %f, y_vel: %f\n", ball->x,ball->y,ball->x_vel,ball->y_vel);
	
	//Bounce off left board
	if (new_x < left->x+BOARD_WIDTH) {
		//Case: ball hits board
		if (new_y+BALL_HEIGHT >= left->y && new_y <= left->y+BOARD_HEIGHT) {
			ball->x_vel = -ball->x_vel;
			new_x = (left->x + BOARD_WIDTH) + (left->x + BOARD_WIDTH - new_x);
			cur_ball_speed *= 1.02;
			float r = ((float) rand()) / RAND_MAX;
			ball->x_vel = sqrt(cur_ball_speed*cur_ball_speed*r);
			ball->y_vel = sqrt(cur_ball_speed*cur_ball_speed*(1.0 - r)) * ((rand() % 2 == 0) ? (-1.0) : 1.0);
			//printf("rand: %f, x_vel: %f, y_vel: %f\n", r,ball->x_vel,ball->y_vel);
		}
		//Case: Ball misses board -> score
		if (new_x < board_margin) {
				ball->old_x = ball->x;
				ball->old_y = ball->y;
				ball->x = (DISPLAY_WIDTH / 2) - (BALL_WIDTH / 2);
				ball->y = (DISPLAY_HEIGHT / 2) - (BALL_HEIGHT / 2);
				cur_ball_speed = ball_movement_speed;
				ball->x_vel = ball_movement_speed;
				ball->y_vel = 0;
				return;
		}
	}
	//Bounce off right board
	if (new_x+BALL_WIDTH > right->x) {
		//Case: ball hits board
		if (new_y+BALL_HEIGHT >= right->y && new_y <= right->y+BOARD_HEIGHT) {
			ball->x_vel = -ball->x_vel;
			new_x = right->x - (new_x+BALL_WIDTH - right->x) - BALL_WIDTH;
			cur_ball_speed *= 1.02;
			float r = ((float) rand()) / RAND_MAX;
			ball->x_vel = -sqrt(cur_ball_speed*cur_ball_speed*r);
			ball->y_vel = sqrt(cur_ball_speed*cur_ball_speed*(1.0 - r)) * ((rand() % 2 == 0) ? (-1.0) : 1.0);
			//printf("rand: %f, x_vel: %f, y_vel: %f\n", r,ball->x_vel,ball->y_vel);
		}
		//Case: Ball misses board -> score
		if (new_x + BALL_WIDTH > DISPLAY_WIDTH - board_margin) {
			ball->old_x = (int) ball->x;
			ball->old_y = (int) ball->y;
			ball->x = (DISPLAY_WIDTH / 2) - (BALL_WIDTH / 2);
			ball->y = (DISPLAY_HEIGHT / 2) - (BALL_HEIGHT / 2);
			cur_ball_speed = ball_movement_speed;
			ball->x_vel = -ball_movement_speed;
			ball->y_vel = 0;
			return;
		}
	}
	//Bounce off wall
	if (new_y < 0) {
		ball->y_vel = -ball->y_vel;
		new_y = -new_y;
	} else if (new_y + BALL_HEIGHT >= DISPLAY_HEIGHT) {
		ball->y_vel = -ball->y_vel;
		new_y = (DISPLAY_HEIGHT - BALL_HEIGHT - 1) - ((new_y + BALL_HEIGHT) - DISPLAY_HEIGHT);
	}
	ball->old_x = (int) ball->x;
	ball->old_y = (int) ball->y;
	ball->x = new_x;
	ball->y = new_y;
}

void menu_loop(){
	int menu_drawn = 0;
	while(1){

		if(!menu_drawn){
			draw_menu();
			menu_drawn = 1;
		}
	}
}

void main_menu(){
	struct Pointer pointer;
	pointer.y = 
	pointer.x = board_margin
   	draw_pointer(pointer)

	int start = 
	int credits = 2
	int quit = 3 
        int buttonPressed = 0;
        int exit = 0;

	while(1) {
        	buttonPressed = getInput();
        	state = getInput();

		// if the cursor is moved down while in the last position, it is moved to the top position.
		if (state > exit){
			state = start;
		}
		// if the cursor is moved up at the top it loops down to the bottom.
		if(state < 0){
			state = exit;
		}

		// the should move the pointer to the corresponding location.
		// a buttonpress up should move the cursor a step up, a
		switch (state) {
		    case start:
			updateScreen(GAME);
		        if(buttonPressed){
		            game_loop();
		        }
			//TODO update screen back to main menu. 
		        break;

		    case credits:
		        updateScreen(CREDITS);
		        if(buttonPressed){
		            credits();
		        }
		        break;
		    case quit:
		        updateScreen(EXIT);
		        if(buttonPressed){
		            exit = 1;
		        }
		        break;
		    default:
		        break;
		}

		if(exit){
		    break;
        	}
    	}
}


void game_loop() {
	struct Board p1, p2;
	p1.x = board_margin;
	p1.y = (DISPLAY_HEIGHT / 2) - (BOARD_HEIGHT / 2);
	p1.old_y = p1.y - 1;
	p2.x = DISPLAY_WIDTH - BOARD_WIDTH - board_margin;
	p2.y = (DISPLAY_HEIGHT / 2) - (BOARD_HEIGHT / 2);
	p2.old_y = p2.y - 1;
	struct Ball *ball = malloc(sizeof(struct Ball));
	ball->x = (DISPLAY_WIDTH / 2) - (BALL_WIDTH / 2);
	ball->y = (DISPLAY_HEIGHT / 2) - (BALL_HEIGHT / 2);
	ball->old_x = ball->x;
	ball->old_y = ball->y;
	ball->x_vel = 150.0;
	ball->y_vel = 70.0;
	
	printf("p1.x: %d, p1.y: %f, p1.old_y: %d\n",p1.x, p1.y, p1.old_y);
	printf("p2.x: %d, p2.y: %f, p2.old_y: %d\n",p2.x, p2.y, p2.old_y);
	printf("ball.x: %f, ball.y: %f, ball.old_x: %d, ball.old_y: %d, ball.x_vel: %f, ball.y_vel: %f\n",ball->x, ball->y, ball->old_x, ball->old_y, ball->x_vel, ball->y_vel);
	memset(framebuffer, 0x00, DISPLAY_WIDTH*DISPLAY_HEIGHT*sizeof(uint16_t));
	update_area(0,0,DISPLAY_WIDTH,DISPLAY_HEIGHT);
	
	struct timeval tv;
	gettimeofday(&tv, NULL);
	uint64_t current = (1000000*tv.tv_sec) + tv.tv_usec;
	uint64_t last;
	float time = 0;
	while (1) {
		last = current;
		gettimeofday(&tv, NULL);
		current = (1000000*tv.tv_sec) + tv.tv_usec;
		float timediff = (float) (current - last) / 1000000.0;
		time += timediff;
		//if (time > 1.0) {
			/*printf("p1.x: %d, p1.y: %d, p1.old_y: %d\n",p1.x, p1.y, p1.old_y);
			printf("p2.x: %d, p2.y: %d, p2.old_y: %d\n",p2.x, p2.y, p2.old_y);
			printf("ball.x: %d, ball.y: %d, ball.old_x: %d, ball.old_y: %d, ball.x_vel: %f, ball.y_vel: %f\n",ball->x, ball->y, ball->old_x, ball->old_y, ball->x_vel, ball->y_vel);
			time = 0;*/
		//}
		//printf("timediff: %f\n", timediff);
		//PROCESS INPUT
			//TODO
		//UPDATE
		update_ball(ball, &p1, &p2, timediff);
		play_AI(&p1, ball, timediff);
		play_AI(&p2, ball, timediff);
		//DRAW CALLS
		//memset(framebuffer, 0x00, DISPLAY_WIDTH*DISPLAY_HEIGHT*sizeof(uint16_t));
		draw_ball(ball);
		draw_board(&p1);
		draw_board(&p2);
		//update_area(0,0,DISPLAY_WIDTH,DISPLAY_HEIGHT);
	}
}


int main(int argc, char *argv[])
{
	file_descriptor = open("/dev/fb0", O_RDWR);
	framebuffer = mmap(NULL, DISPLAY_WIDTH * DISPLAY_HEIGHT * sizeof(uint16_t), PROT_READ | PROT_WRITE, MAP_SHARED, file_descriptor, 0);

	/*for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 15; j++) {
			framebuffer[(i*320) + j] = board_pixels[(i*15)+j];
		}
	}
	for (int i = 0; i < DISPLAY_WIDTH*DISPLAY_HEIGHT; i++) {
		framebuffer[i] = 0xC618;
	}*/

	/*struct Board b1;
	b1.x = 10;
	b1.y = 50;
	draw_board(&b1);
	struct Board b2;
	b2.x = 295;
	b2.y = 150;
	draw_board(&b2);
	if (update_area(0,0,DISPLAY_WIDTH,DISPLAY_HEIGHT)) {
		printf("Update successfull!\n");
	} else {
		printf("Update NOT successfull!\n");
	}*/

	menu_loop();
	//game_loop();

	munmap(framebuffer, DISPLAY_WIDTH * DISPLAY_HEIGHT * sizeof(uint16_t));
	close(file_descriptor);
	exit(EXIT_SUCCESS);
}
