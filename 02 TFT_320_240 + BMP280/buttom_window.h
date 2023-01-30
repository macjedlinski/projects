/*
 * buttom_window.h
 *
 *  Created on: 24 sty 2023
 *      Author: MJ
 */

#ifndef INC_BUTTOM_WINDOW_H_
#define INC_BUTTOM_WINDOW_H_

//
//	DEFINE
//
typedef struct
{
	uint16_t X_start;
	uint16_t X_width;
	uint16_t X_end;
	uint16_t Y_start;
	uint16_t Y_height;
	uint16_t Y_end;
	char *text;
} Buttom_window_t;

//
//	FUNCTIONS
//
void buttom_window_init(Buttom_window_t *buttom, uint16_t x, uint16_t y, uint16_t width, uint16_t height, char *t);

#endif /* INC_BUTTOM_WINDOW_H_ */
