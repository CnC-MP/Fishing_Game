#pragma once

#include "interface_design_tool.h"
#include <cstdio>

void monster_fish_image_type01(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color);
void monster_fish_image_type02(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color);

void monster_fish_image_type01(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color) {
	if (size == 1) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("¢º");
		}
		else {
			printf("¢¸");
		}
	}
	else if (size == 2) {
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("¢º");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("¢¸");
			color_change(tail_color);
			printf("<<");
		}
	}
	else if (size == 3) {
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("¡á¢º");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("¢¸¡á");
			color_change(tail_color);
			printf("<<");
		}
	}
	else if (size == 4) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("¡á¢º");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("¡ã");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("¢¸¡á");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("¡ã");
		}
	}
	else if (size == 5) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("¡á¢º");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("¡ã");
			gotoxy(x + 2, y + 1);
			printf("¡å");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("¢¸¡á");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("¡ã");
			gotoxy(x + 2, y + 1);
			printf("¡å");
		}
	}
	else if (size == 6) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("¡á¡á¢º");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("¡ã¡ã");
			gotoxy(x + 2, y + 1);
			printf("¡å¡å");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("¢¸¡á¡á");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("¡ã¡ã");
			gotoxy(x + 2, y + 1);
			printf("¡å¡å");
		}
	}
	else if (size == 7){
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("¡á¡á¡á¢º");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("¡ã¡ã¡ã");
			gotoxy(x + 2, y + 1);
			printf("¡å¡å¡å");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("¢¸¡á¡á¡á");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("¡ã¡ã¡ã");
			gotoxy(x + 2, y + 1);
			printf("¡å¡å¡å");
		}
	}
	else if (size == 8) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á");
			gotoxy(x + 2, y);
			printf("¡á¡á¡á¡á");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("¡ã¡ã¡ã");
			gotoxy(x + 2, y + 2);
			printf("¡å¡å¡å");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á");
			gotoxy(x, y + 1);
			printf("¡á¡á¡á¡á");
			color_change(tail_color);
			printf("¢¸");
			gotoxy(x + 8, y);
			printf("¢¸");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("¡ã¡ã¡ã");
			gotoxy(x + 2, y + 2);
			printf("¡å¡å¡å");
		}
	}
	else if (size == 9) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á");
			gotoxy(x + 2, y);
			printf("¡á¡á¡á¡á¡á");
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã¡ã");
			gotoxy(x + 2, y + 2);
			printf("¡å¡å¡å¡å");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á");
			gotoxy(x, y + 1);
			printf("¡á¡á¡á¡á¡á");
			color_change(tail_color);
			printf("¢¸");
			gotoxy(x + 10, y);
			printf("¢¸");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("¡ã¡ã¡ã¡ã");
			gotoxy(x + 2, y + 2);
			printf("¡å¡å¡å¡å");
		}
	}
	else if (size == 10) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 2);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y);
			printf("¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã");
			gotoxy(x + 2, y);
			printf("¡ã");
			gotoxy(x + 2, y + 2);
			printf("¡å");
			gotoxy(x + 4, y + 3);
			printf("¡å¡å¡å");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á");
			gotoxy(x, y + 1);
			printf("¡á¡á¡á¡á¡á");
			gotoxy(x, y + 2);
			printf("¡á¡á¡á¡á");
			color_change(fin_color);
			printf("¡å");
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã");
			gotoxy(x + 2, y + 3);
			printf("¡å¡å¡å");
			gotoxy(x + 8, y);
			printf("¡ã");
			color_change(tail_color);
			printf("¢¸");
			gotoxy(x + 10, y + 1);
			printf("¢¸");
			gotoxy(x + 10, y + 2);
			printf("¢¸");
		}
	}
	else if (size == 11) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 2);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y);
			printf("¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã");
			gotoxy(x + 2, y);
			printf("¡ã");
			gotoxy(x + 2, y + 2);
			printf("¡å");
			gotoxy(x + 4, y + 3);
			printf("¡å¡å¡å");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 2);
			printf("¡á¡á¡á¡á");
			color_change(fin_color);
			printf("¡å");
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã");
			gotoxy(x + 2, y + 3);
			printf("¡å¡å¡å");
			gotoxy(x + 8, y);
			printf("¡ã");
			color_change(tail_color);
			printf("¢¸");
			gotoxy(x + 10, y + 1);
			printf("¢¸");
			gotoxy(x + 10, y + 2);
			printf("¢¸");
		}
	}
	else if (size == 12) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 2);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡á¡á");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á");
			gotoxy(x + 6, y + 2);
			printf("¡á¡á¡á¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã");
			gotoxy(x + 4, y);
			printf("¡ã");
			gotoxy(x + 4, y + 2);
			printf("¡å");
			gotoxy(x + 6, y + 3);
			printf("¡å¡å¡å");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 2);
			printf("¡á¡á¡á¡á");
			color_change(fin_color);
			printf("¡å");
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã");
			gotoxy(x + 2, y + 3);
			printf("¡å¡å¡å");
			gotoxy(x + 8, y);
			printf("¡ã");
			color_change(tail_color);
			gotoxy(x + 12, y);
			printf("¢¸");
			gotoxy(x + 10, y + 1);
			printf("¡á¡á");
			gotoxy(x + 12, y + 2);
			printf("¢¸");
		}
	}
	else if (size == 13) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 2);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡á¡á");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 2);
			printf("¡á¡á¡á¡á¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y);
			printf("¡ã");
			gotoxy(x + 4, y + 2);
			printf("¡å");
			gotoxy(x + 6, y + 3);
			printf("¡å¡å¡å¡å");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 2);
			printf("¡á¡á¡á¡á¡á");
			color_change(fin_color);
			printf("¡å");
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã¡ã");
			gotoxy(x + 2, y + 3);
			printf("¡å¡å¡å¡å");
			gotoxy(x + 10, y);
			printf("¡ã");
			color_change(tail_color);
			gotoxy(x + 14, y);
			printf("¢¸");
			gotoxy(x + 12, y + 1);
			printf("¡á¡á");
			gotoxy(x + 14, y + 2);
			printf("¢¸");
		}
	}
	else if (size == 14) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 3);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡á¡á");
			gotoxy(x, y + 2);
			printf("¡á¡á");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 3);
			printf("¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 14, y + 1);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y);
			printf("¡ã");
			gotoxy(x + 4, y + 3);
			printf("¡å");
			gotoxy(x + 6, y + 4);
			printf("¡å¡å¡å¡å");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 3);
			printf("¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x, y + 1);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 10, y + 3);
			printf("¡å");
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã¡ã");
			gotoxy(x + 2, y + 4);
			printf("¡å¡å¡å¡å");
			gotoxy(x + 10, y);
			printf("¡ã");
			color_change(tail_color);
			gotoxy(x + 14, y);
			printf("¢¸");
			gotoxy(x + 12, y + 1);
			printf("¡á¡á");
			gotoxy(x + 12, y + 2);
			printf("¡á¡á");
			gotoxy(x + 14, y + 3);
			printf("¢¸");
		}
	}
	else if (size == 15) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 3);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡á¡á");
			gotoxy(x, y + 2);
			printf("¡á¡á");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 16, y + 1);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y);
			printf("¡ã");
			gotoxy(x + 4, y + 3);
			printf("¡å");
			gotoxy(x + 6, y + 4);
			printf("¡å¡å¡å¡å¡å");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 3);
			printf("¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x, y + 1);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 12, y + 3);
			printf("¡å");
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 2, y + 4);
			printf("¡å¡å¡å¡å¡å");
			gotoxy(x + 12, y);
			printf("¡ã");
			color_change(tail_color);
			gotoxy(x + 16, y);
			printf("¢¸");
			gotoxy(x + 14, y + 1);
			printf("¡á¡á");
			gotoxy(x + 14, y + 2);
			printf("¡á¡á");
			gotoxy(x + 16, y + 3);
			printf("¢¸");
		}
	}
	else if (size == 16) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 4);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x, y + 3);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 16, y + 1);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y);
			printf("¡ã");
			gotoxy(x + 4, y + 4);
			printf("¡å");
			gotoxy(x + 6, y + 5);
			printf("¡å¡å¡å¡å¡å");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 4);
			printf("¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x, y + 1);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 12, y + 4);
			printf("¡å");
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 2, y + 5);
			printf("¡å¡å¡å¡å¡å");
			gotoxy(x + 12, y);
			printf("¡ã");
			color_change(tail_color);
			gotoxy(x + 16, y);
			printf("¢¸");
			gotoxy(x + 14, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 14, y + 2);
			printf("¡á");
			gotoxy(x + 14, y + 3);
			printf("¢¸¡ã");
			gotoxy(x + 16, y + 4);
			printf("¢¸");
		}
	}
	else if (size == 17) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 4);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x, y + 3);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 16, y + 1);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y);
			printf("¡ã");
			gotoxy(x + 4, y + 4);
			printf("¡å");
			gotoxy(x + 6, y + 5);
			printf("¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 1);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 14, y + 4);
			printf("¡å");
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 2, y + 5);
			printf("¡å¡å¡å¡å¡å¡å");
			gotoxy(x + 14, y);
			printf("¡ã");
			color_change(tail_color);
			gotoxy(x + 18, y);
			printf("¢¸");
			gotoxy(x + 16, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 16, y + 2);
			printf("¡á");
			gotoxy(x + 16, y + 3);
			printf("¢¸¡ã");
			gotoxy(x + 18, y + 4);
			printf("¢¸");
		}
	}
	else if (size == 18) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 4);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x, y + 3);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 18, y + 1);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y);
			printf("¡ã");
			gotoxy(x + 4, y + 4);
			printf("¡å");
			gotoxy(x + 6, y + 5);
			printf("¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 1);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 16, y + 4);
			printf("¡å");
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 2, y + 5);
			printf("¡å¡å¡å¡å¡å¡å¡å");
			gotoxy(x + 16, y);
			printf("¡ã");
			color_change(tail_color);
			gotoxy(x + 20, y);
			printf("¢¸");
			gotoxy(x + 18, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 18, y + 2);
			printf("¡á");
			gotoxy(x + 18, y + 3);
			printf("¢¸¡ã");
			gotoxy(x + 20, y + 4);
			printf("¢¸");
		}
	}
	else if (size == 19) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 5);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x + 2, y + 3);
			printf("¡á");
			gotoxy(x, y + 4);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 18, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y);
			printf("¡ã");
			gotoxy(x + 4, y + 5);
			printf("¡å");
			gotoxy(x + 6, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 16, y + 5);
			printf("¡å");
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 2, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å");
			gotoxy(x + 16, y);
			printf("¡ã");
			color_change(tail_color);
			gotoxy(x + 20, y);
			printf("¢¸");
			gotoxy(x + 18, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 18, y + 2);
			printf("¡á");
			gotoxy(x + 18, y + 3);
			printf("¡á");
			gotoxy(x + 18, y + 4);
			printf("¢¸¡ã");
			gotoxy(x + 20, y + 5);
			printf("¢¸");
		}
	}
	else if (size == 20) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 5);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x + 2, y + 3);
			printf("¡á");
			gotoxy(x , y + 4);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 18, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y);
			printf("¡ã");
			gotoxy(x + 4, y + 5);
			printf("¡å");
			gotoxy(x + 6, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 16, y + 5);
			printf("¡å");
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 2, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å");
			gotoxy(x + 16, y);
			printf("¡ã");
			color_change(tail_color);
			gotoxy(x + 20, y);
			printf("¢¸");
			gotoxy(x + 18, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 18, y + 2);
			printf("¡á");
			gotoxy(x + 18, y + 3);
			printf("¡á");
			gotoxy(x + 18, y + 4);
			printf("¢¸¡ã");
			gotoxy(x + 20, y + 5);
			printf("¢¸");
		}
	}
	else if (size == 21) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 5);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x + 2, y + 3);
			printf("¡á");
			gotoxy(x, y + 4);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 20, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 6, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 2, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 22, y);
			printf("¢¸");
			gotoxy(x + 20, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 20, y + 2);
			printf("¡á");
			gotoxy(x + 20, y + 3);
			printf("¡á");
			gotoxy(x + 20, y + 4);
			printf("¢¸¡ã");
			gotoxy(x + 22, y + 5);
			printf("¢¸");
		}
	}
	else if (size == 22) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 5);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x + 2, y + 3);
			printf("¡á");
			gotoxy(x, y + 4);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 22, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 6, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 24, y);
			printf("¢¸");
			gotoxy(x + 22, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 22, y + 2);
			printf("¡á");
			gotoxy(x + 22, y + 3);
			printf("¡á");
			gotoxy(x + 22, y + 4);
			printf("¢¸¡ã");
			gotoxy(x + 24, y + 5);
			printf("¢¸");
		}
	}
	else if (size == 23) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 5);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x + 2, y + 3);
			printf("¡á");
			gotoxy(x, y + 4);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 24, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 8, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 26, y);
			printf("¢¸");
			gotoxy(x + 24, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 24, y + 2);
			printf("¡á");
			gotoxy(x + 24, y + 3);
			printf("¡á");
			gotoxy(x + 24, y + 4);
			printf("¢¸¡ã");
			gotoxy(x + 26, y + 5);
			printf("¢¸");
		}
	}
	else if (size == 24) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 5);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x + 2, y + 3);
			printf("¡á");
			gotoxy(x, y + 4);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 26, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 8, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 6);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 28, y);
			printf("¢¸");
			gotoxy(x + 26, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 26, y + 2);
			printf("¡á");
			gotoxy(x + 26, y + 3);
			printf("¡á");
			gotoxy(x + 26, y + 4);
			printf("¢¸¡ã");
			gotoxy(x + 28, y + 5);
			printf("¢¸");
		}
	}
	else if (size == 25) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 6);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x + 2, y + 3);
			printf("¡á");
			gotoxy(x + 2, y + 4);
			printf("¡á");
			gotoxy(x, y + 5);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 26, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 8, y + 7);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 7);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 28, y);
			printf("¢¸");
			gotoxy(x + 26, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 26, y + 2);
			printf("¡á");
			gotoxy(x + 26, y + 3);
			printf("¡á");
			gotoxy(x + 26, y + 4);
			printf("¡á");
			gotoxy(x + 26, y + 5);
			printf("¢¸¡ã");
			gotoxy(x + 28, y + 6);
			printf("¢¸");
		}
	}
	else if (size == 26) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 6);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x + 2, y + 3);
			printf("¡á");
			gotoxy(x + 2, y + 4);
			printf("¡á");
			gotoxy(x, y + 5);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 26, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 8, y + 7);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 7);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 30, y);
			printf("¢¸");
			gotoxy(x + 28, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 28, y + 2);
			printf("¡á");
			gotoxy(x + 28, y + 3);
			printf("¡á");
			gotoxy(x + 28, y + 4);
			printf("¡á");
			gotoxy(x + 28, y + 5);
			printf("¢¸¡ã");
			gotoxy(x + 30, y + 6);
			printf("¢¸");
		}
	}
	else if (size == 27) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 6);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x + 2, y + 3);
			printf("¡á");
			gotoxy(x + 2, y + 4);
			printf("¡á");
			gotoxy(x, y + 5);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 28, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 8, y + 7);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 7);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 32, y);
			printf("¢¸");
			gotoxy(x + 30, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 30, y + 2);
			printf("¡á");
			gotoxy(x + 30, y + 3);
			printf("¡á");
			gotoxy(x + 30, y + 4);
			printf("¡á");
			gotoxy(x + 30, y + 5);
			printf("¢¸¡ã");
			gotoxy(x + 32, y + 6);
			printf("¢¸");
		}
	}
	else if (size == 28) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 6);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡á");
			gotoxy(x + 2, y + 3);
			printf("¡á");
			gotoxy(x + 2, y + 4);
			printf("¡á");
			gotoxy(x, y + 5);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 4, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 30, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 8, y + 7);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 7);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 34, y);
			printf("¢¸");
			gotoxy(x + 32, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 32, y + 2);
			printf("¡á");
			gotoxy(x + 32, y + 3);
			printf("¡á");
			gotoxy(x + 32, y + 4);
			printf("¡á");
			gotoxy(x + 32, y + 5);
			printf("¢¸¡ã");
			gotoxy(x + 34, y + 6);
			printf("¢¸");
		}
	}
	else if (size == 29) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("¢º");
			gotoxy(x, y + 6);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡å¢º");
			gotoxy(x + 4, y + 3);
			printf("¡á");
			gotoxy(x, y + 5);
			printf("¡ã¢º");
			gotoxy(x + 2, y + 4);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 32, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 10, y + 7);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 7);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 36, y);
			printf("¢¸");
			gotoxy(x + 34, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 32, y + 2);
			printf("¢¸¡å");
			gotoxy(x + 32, y + 3);
			printf("¡á");
			gotoxy(x + 32, y + 4);
			printf("¢¸¡ã");
			gotoxy(x + 34, y + 5);
			printf("¢¸¡ã");
			gotoxy(x + 36, y + 6);
			printf("¢¸");
		}
	}
	else if (size == 30) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡å¢º");
			gotoxy(x + 2, y + 2);
			printf("¡å¢º");
			gotoxy(x + 4, y + 3);
			printf("¡á");
			gotoxy(x + 4, y + 4);
			printf("¡á");
			gotoxy(x, y + 6);
			printf("¡ã¢º");
			gotoxy(x, y + 7);
			printf("¢º");
			gotoxy(x + 2, y + 5);
			printf("¡ã¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 32, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 10, y + 8);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 8);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 36, y);
			printf("¢¸");
			gotoxy(x + 34, y + 1);
			printf("¢¸¡å");
			gotoxy(x + 32, y + 2);
			printf("¢¸¡å");
			gotoxy(x + 32, y + 3);
			printf("¡á");
			gotoxy(x + 32, y + 4);
			printf("¡á");
			gotoxy(x + 32, y + 5);
			printf("¢¸¡ã");
			gotoxy(x + 34, y + 6);
			printf("¢¸¡ã");
			gotoxy(x + 36, y + 7);
			printf("¢¸");
		}
	}
	else if (size == 31) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡á¢º");
			gotoxy(x, y + 2);
			printf("¡å¡á¢º");
			gotoxy(x + 2, y + 3);
			printf("¡å¡á");
			gotoxy(x + 2, y + 4);
			printf("¡ã¡á");
			gotoxy(x, y + 6);
			printf("¡á¢º");
			gotoxy(x, y + 7);
			printf("¢º");
			gotoxy(x, y + 5);
			printf("¡ã¡á¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 34, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 10, y + 8);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 8);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 36, y);
			printf("¢¸");
			gotoxy(x + 34, y + 1);
			printf("¢¸¡á");
			gotoxy(x + 32, y + 2);
			printf("¢¸¡á¡å");
			gotoxy(x + 32, y + 3);
			printf("¡á¡å");
			gotoxy(x + 32, y + 4);
			printf("¡á¡ã");
			gotoxy(x + 32, y + 5);
			printf("¢¸¡á¡ã");
			gotoxy(x + 34, y + 6);
			printf("¢¸¡á");
			gotoxy(x + 36, y + 7);
			printf("¢¸");
		}
	}
	else if (size == 32) {  // 22 X 11
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡á¢º");
			gotoxy(x, y + 2);
			printf("¡å¡á¢º");
			gotoxy(x + 2, y + 3);
			printf("¡å¡á");
			gotoxy(x + 4, y + 4);
			printf("¡á");
			gotoxy(x + 2, y + 5);
			printf("¡ã¡á");
			gotoxy(x, y + 7);
			printf("¡á¢º");
			gotoxy(x, y + 8);
			printf("¢º");
			gotoxy(x, y + 6);
			printf("¡ã¡á¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 8);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 34, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 10, y + 9);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 8);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 9);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 36, y);
			printf("¢¸");
			gotoxy(x + 34, y + 1);
			printf("¢¸¡á");
			gotoxy(x + 32, y + 2);
			printf("¢¸¡á¡å");
			gotoxy(x + 32, y + 3);
			printf("¡á¡å");
			gotoxy(x + 32, y + 4);
			printf("¡á");
			gotoxy(x + 32, y + 5);
			printf("¡á¡ã");
			gotoxy(x + 32, y + 6);
			printf("¢¸¡á¡ã");
			gotoxy(x + 34, y + 7);
			printf("¢¸¡á");
			gotoxy(x + 36, y + 8);
			printf("¢¸");
		}
	}
	else if (size == 33) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡á¢º");
			gotoxy(x, y + 2);
			printf("¡å¡á¢º");
			gotoxy(x + 2, y + 3);
			printf("¡å¡á");
			gotoxy(x + 4, y + 4);
			printf("¡á");
			gotoxy(x + 2, y + 5);
			printf("¡ã¡á");
			gotoxy(x, y + 7);
			printf("¡á¢º");
			gotoxy(x, y + 8);
			printf("¢º");
			gotoxy(x, y + 6);
			printf("¡ã¡á¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 8);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 36, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 10, y + 9);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 8);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 9);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 38, y);
			printf("¢¸");
			gotoxy(x + 36, y + 1);
			printf("¢¸¡á");
			gotoxy(x + 34, y + 2);
			printf("¢¸¡á¡å");
			gotoxy(x + 34, y + 3);
			printf("¡á¡å");
			gotoxy(x + 34, y + 4);
			printf("¡á");
			gotoxy(x + 34, y + 5);
			printf("¡á¡ã");
			gotoxy(x + 34, y + 6);
			printf("¢¸¡á¡ã");
			gotoxy(x + 36, y + 7);
			printf("¢¸¡á");
			gotoxy(x + 38, y + 8);
			printf("¢¸");
		}
	}
	else if (size == 34) { //24
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("¢º");
			gotoxy(x, y + 1);
			printf("¡á¢º");
			gotoxy(x, y + 2);
			printf("¡å¡á¢º");
			gotoxy(x + 2, y + 3);
			printf("¡å¡á");
			gotoxy(x + 4, y + 4);
			printf("¡á");
			gotoxy(x + 2, y + 5);
			printf("¡ã¡á");
			gotoxy(x, y + 7);
			printf("¡á¢º");
			gotoxy(x, y + 8);
			printf("¢º");
			gotoxy(x, y + 6);
			printf("¡ã¡á¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 6, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 8);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 36, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 10, y + 9);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 8);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 9);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 40, y);
			printf("¢¸");
			gotoxy(x + 38, y + 1);
			printf("¢¸¡á");
			gotoxy(x + 36, y + 2);
			printf("¢¸¡á¡å");
			gotoxy(x + 36, y + 3);
			printf("¡á¡å");
			gotoxy(x + 36, y + 4);
			printf("¡á");
			gotoxy(x + 36, y + 5);
			printf("¡á¡ã");
			gotoxy(x + 36, y + 6);
			printf("¢¸¡á¡ã");
			gotoxy(x + 38, y + 7);
			printf("¢¸¡á");
			gotoxy(x + 40, y + 8);
			printf("¢¸");
		}
	}
	else if (size == 35) { //25
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("¡á¢º");
			gotoxy(x, y + 1);
			printf("¡á¡á¢º");
			gotoxy(x, y + 2);
			printf("¡å¡á¡á¢º");
			gotoxy(x + 2, y + 3);
			printf("¡å¡á¡á");
			gotoxy(x + 4, y + 4);
			printf("¡á¡á");
			gotoxy(x + 2, y + 5);
			printf("¡ã¡á¡á");
			gotoxy(x, y + 7);
			printf("¡á¡á¢º");
			gotoxy(x, y + 8);
			printf("¡á¢º");
			gotoxy(x, y + 6);
			printf("¡ã¡á¡á¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 10, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 10, y + 8);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 38, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 12, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 12, y + 9);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 8);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 4, y + 9);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 40, y);
			printf("¢¸¡á");
			gotoxy(x + 38, y + 1);
			printf("¢¸¡á¡á");
			gotoxy(x + 36, y + 2);
			printf("¢¸¡á¡á¡å");
			gotoxy(x + 36, y + 3);
			printf("¡á¡á¡å");
			gotoxy(x + 36, y + 4);
			printf("¡á¡á");
			gotoxy(x + 36, y + 5);
			printf("¡á¡á¡ã");
			gotoxy(x + 36, y + 6);
			printf("¢¸¡á¡á¡ã");
			gotoxy(x + 38, y + 7);
			printf("¢¸¡á¡á");
			gotoxy(x + 40, y + 8);
			printf("¢¸¡á");
		}
	}
	else if (size == 36) { //26 X 11
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("¡á¢º");
			gotoxy(x, y + 1);
			printf("¡á¡á¢º");
			gotoxy(x, y + 2);
			printf("¡å¡á¡á¢º");
			gotoxy(x + 2, y + 3);
			printf("¡å¡á¡á");
			gotoxy(x + 4, y + 4);
			printf("¡á¡á");
			gotoxy(x + 2, y + 5);
			printf("¡ã¡á¡á");
			gotoxy(x, y + 7);
			printf("¡á¡á¢º");
			gotoxy(x, y + 8);
			printf("¡á¢º");
			gotoxy(x, y + 6);
			printf("¡ã¡á¡á¢º");
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 10, y);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 8, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x + 10, y + 8);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 40, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 12, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 12, y + 9);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 1);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 2);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 3);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 4);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 6, y + 5);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 4, y + 6);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x - 2, y + 7);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			gotoxy(x, y + 8);
			printf("¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("¡á");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã");
			gotoxy(x + 6, y + 9);
			printf("¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å¡å");
			color_change(tail_color);
			gotoxy(x + 42, y);
			printf("¢¸¡á");
			gotoxy(x + 40, y + 1);
			printf("¢¸¡á¡á");
			gotoxy(x + 38, y + 2);
			printf("¢¸¡á¡á¡å");
			gotoxy(x + 38, y + 3);
			printf("¡á¡á¡å");
			gotoxy(x + 38, y + 4);
			printf("¡á¡á");
			gotoxy(x + 38, y + 5);
			printf("¡á¡á¡ã");
			gotoxy(x + 38, y + 6);
			printf("¢¸¡á¡á¡ã");
			gotoxy(x + 40, y + 7);
			printf("¢¸¡á¡á");
			gotoxy(x + 42, y + 8);
			printf("¢¸¡á");
		}
	}
	color_change(7);
}


void monster_fish_image_type02(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color) {
	if (size == 1) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("¢º");
		}
		else {
			printf("¢¸");
		}
	}
	else if (size == 2) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("¡á¢º");
		}
		else {
			printf("¢¸¡á");
		}
	}
	else if (size == 3) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("¡á¡á¢º");
		}
		else {
			printf("¢¸¡á¡á");
		}
	}
	else if (size == 4) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("¡á¡á¡á¢º");
		}
		else {
			printf("¢¸¡á¡á¡á");
		}
	}
	else if (size == 5) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("¡á¡á¡á¡á¢º");
		}
		else {
			printf("¢¸¡á¡á¡á¡á");
		}
	}
	else if (size == 6) {
		gotoxy(x + 2, y);
		color_change(fin_color);
		printf("¡ã¡ã¡ã");
		gotoxy(x, y + 1);
		color_change(body_color);
		if (to_right) {
			printf("¡á¡á¡á¡á¢º");
		}
		else {
			printf("¢¸¡á¡á¡á¡á");
		}
	}
	else if (size == 7) {
		if (to_right) {
			gotoxy(x + 4, y);
			color_change(fin_color);
			printf("¡ã¡ã¡ã");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("¢¸¡á¡á¡á¡á¢º");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("¡ã¡ã¡ã");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("¢¸¡á¡á¡á¡á¢º");
		}
	}
	else if (size == 8) {
		if (to_right) {
			gotoxy(x + 6, y);
			color_change(fin_color);
			printf("¡ã¡ã¡ã");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("¢¸¡á¡á¡á¡á¡á¢º");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("¡ã¡ã¡ã");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("¢¸¡á¡á¡á¡á¡á¢º");
		}
	}
	color_change(7);
}