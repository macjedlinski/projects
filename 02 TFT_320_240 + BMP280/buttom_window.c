/*
 * buttom_window.c
 *
 *  Created on: 24 sty 2023
 *      Author: MJ
 */

#include "main.h"
#include "buttom_window.h"

void buttom_window_init(Buttom_window_t *buttom, uint16_t x, uint16_t y, uint16_t width, uint16_t height, char *t)
{
	buttom -> X_start = x;
	buttom -> X_width = width;
	buttom -> X_end = x + width;
	buttom -> Y_start = y;
	buttom -> Y_height = height;
	buttom -> Y_end = y + height;
	buttom -> text = t;
}


