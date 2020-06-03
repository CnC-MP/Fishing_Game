#pragma once

#include "interface_design_tool.h"
#include <cstdio>

void monster_fish_image_type01(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color);
void monster_fish_image_type02(int size, bool to_right, int x, int y, int body_color, int tail_color);

void monster_fish_image_type01(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color) {
	if (size == 1) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("в║");
		}
		else {
			printf("в╕");
		}
	}
	else if (size == 2) {
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(" >");
			color_change(body_color);
			printf("в║");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("в╕");
			color_change(tail_color);
			printf("< ");
		}
	}
	else if (size == 3) {
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("в║");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("в╕");
			color_change(tail_color);
			printf("<<");
		}
	}
	else if (size == 4) {
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("бсв║");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("в╕бс");
			color_change(tail_color);
			printf("<<");
		}
	}
	else if (size == 5) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("бсв║");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("бу");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("в╕бс");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("бу");
		}
	}
	else if (size == 6) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("бсв║");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("бу");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("в╕бс");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("бу");
		}
	}
	else if (size == 7) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("бсбсв║");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("бубу");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("в╕бсбс");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("бубу");
		}
	}
	else if (size == 8) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("бсбсв║");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("бубу");
			gotoxy(x + 4, y + 1);
			printf("бх");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("в╕бсбс");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("бубу");
			gotoxy(x + 2, y + 1);
			printf("бх");
		}
	}
	else if (size == 8) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("бсбсв║");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("бубу");
			gotoxy(x + 4, y + 1);
			printf("бх");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("в╕бсбс");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("бубу");
			gotoxy(x + 2, y + 1);
			printf("бх");
		}
	}
	else if (size == 1000000) {
		if (to_right) {

		}
		else {

		}
	}

	color_change(7);
}