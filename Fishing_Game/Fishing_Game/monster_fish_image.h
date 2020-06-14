#pragma once

#include "interface_design_tool.h"
#include <cstdio>

void monster_fish_image_type01(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color);
void monster_fish_image_type02(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color);
void gotoxylimit_hori(int x, int y, const char s[3], int num);


void gotoxylimit_hori(int x, int y, const char s[3], int num) {
	for (int i = 0; i < num; ++i) {
		gotoxylimit(x + 2 * i, y, s);
	}
}

void monster_fish_image_type01(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color) {
	if (size == 1) {
		color_change(body_color);
		if (to_right) {
			gotoxylimit(x, y, "в║");
		}
		else {
			gotoxylimit(x, y, "в╕");
		}
	}
	else if (size == 2) {
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, ">>");
			color_change(body_color);
			gotoxylimit(x + 2, y, "в║");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "в╕");
			color_change(tail_color);
			gotoxylimit(x + 2, y, "<<");
		}
	}
	else if (size == 3) {
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, ">>");
			color_change(body_color);
			gotoxylimit(x + 2, y, "бс");
			gotoxylimit(x + 4, y, "в║");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "в╕");
			gotoxylimit(x + 2, y, "бс");
			color_change(tail_color);
			gotoxylimit(x + 4, y, "<<");
		}
	}
	else if (size == 4) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, ">>");
			color_change(body_color);
			gotoxylimit(x + 2, y, "бс");
			gotoxylimit(x + 4, y, "в║");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "бу");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "в╕");
			gotoxylimit(x + 2, y, "бс");
			color_change(tail_color);
			gotoxylimit(x + 4, y, "<<");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "бу");
		}
	}
	else if (size == 5) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, ">>");
			color_change(body_color);
			gotoxylimit(x + 2, y, "бс");
			gotoxylimit(x + 4, y, "в║");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "бу");
			gotoxylimit(x + 2, y + 1, "бх");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "в╕");
			gotoxylimit(x + 2, y, "бс");
			color_change(tail_color);
			gotoxylimit(x + 4, y, "<<");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "бу");
			gotoxylimit(x + 2, y + 1, "бх");
		}
	}
	else if (size == 6) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, ">>");
			color_change(body_color);
			gotoxylimit(x + 2, y, "бс");
			gotoxylimit(x + 4, y, "бс");
			gotoxylimit(x + 6, y, "в║");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "бу");
			gotoxylimit(x + 4, y - 1, "бу");
			gotoxylimit(x + 2, y + 1, "бх");
			gotoxylimit(x + 4, y + 1, "бх");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "в╕");
			gotoxylimit(x + 2, y, "бс");
			gotoxylimit(x + 4, y, "бс");
			color_change(tail_color);
			gotoxylimit(x + 6, y, "<<");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "бу");
			gotoxylimit(x + 4, y - 1, "бу");
			gotoxylimit(x + 2, y + 1, "бх");
			gotoxylimit(x + 4, y + 1, "бх");
		}
	}
	else if (size == 7){
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, ">>");
			color_change(body_color);
			gotoxylimit(x + 2, y, "бс");
			gotoxylimit(x + 4, y, "бс");
			gotoxylimit(x + 6, y, "бс");
			gotoxylimit(x + 8, y, "в║");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "бу");
			gotoxylimit(x + 4, y - 1, "бу");
			gotoxylimit(x + 6, y - 1, "бу");
			gotoxylimit(x + 2, y + 1, "бх");
			gotoxylimit(x + 4, y + 1, "бх");
			gotoxylimit(x + 6, y + 1, "бх");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "в╕");
			gotoxylimit(x + 2, y, "бс");
			gotoxylimit(x + 4, y, "бс");
			gotoxylimit(x + 6, y, "бс");
			color_change(tail_color);
			gotoxylimit(x + 8, y, "<<");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "бу");
			gotoxylimit(x + 4, y - 1, "бу");
			gotoxylimit(x + 6, y - 1, "бу");
			gotoxylimit(x + 2, y + 1, "бх");
			gotoxylimit(x + 4, y + 1, "бх");
			gotoxylimit(x + 6, y + 1, "бх");
		}
	}
	else if (size == 8) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 1, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 2, y, "бс", 4);
			gotoxylimit_hori(x + 2, y + 1, "бс", 4);
			color_change(fin_color);
			gotoxylimit_hori(x + 2, y - 1, "бу", 3);
			gotoxylimit_hori(x + 2, y + 2, "бх", 3);
		}
		else {
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 4);
			gotoxylimit_hori(x, y + 1, "бс", 4);
			color_change(tail_color);
			gotoxylimit(x + 8, y, "в╕");
			gotoxylimit(x + 8, y + 1, "в╕");
			color_change(fin_color);
			gotoxylimit_hori(x + 2, y - 1, "бу", 3);
			gotoxylimit_hori(x + 2, y + 2, "бх", 3);
		}
	}
	else if (size == 9) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 1, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 2, y, "бс", 5);
			gotoxylimit_hori(x + 2, y + 1, "бс", 5);
			color_change(fin_color);
			gotoxylimit_hori(x + 2, y - 1, "бу", 4);
			gotoxylimit_hori(x + 2, y + 2, "бх", 4);
		}
		else {
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 5);
			gotoxylimit_hori(x, y + 1, "бс", 5);
			color_change(tail_color);
			gotoxylimit(x + 10, y, "в╕");
			gotoxylimit(x + 10, y + 1, "в╕");
			color_change(fin_color);
			gotoxylimit_hori(x + 2, y - 1, "бу", 4);
			gotoxylimit_hori(x + 2, y + 2, "бу", 4);
		}
	}
	else if (size == 10) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 2, "в║");
			gotoxylimit(x, y + 1, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y, "бс", 4);
			gotoxylimit_hori(x + 2, y + 1, "бс", 5);
			gotoxylimit_hori(x + 4, y + 2, "бс", 4);
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 3);
			gotoxylimit_hori(x + 4, y + 3, "бх", 3);
			gotoxylimit(x + 2, y, "бу");
			gotoxylimit(x + 2, y + 2, "бх");
		}
		else {
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 4);
			gotoxylimit_hori(x, y + 1, "бс", 5);
			gotoxylimit_hori(x, y + 2, "бс", 4);
			color_change(fin_color);
			gotoxylimit(x + 8, y + 2, "бх");
			gotoxylimit_hori(x + 2, y - 1, "бу", 3);
			gotoxylimit_hori(x + 2, y + 3, "бх", 3);
			gotoxylimit(x + 8, y, "бу");
			color_change(tail_color);
			gotoxylimit(x + 10, y, "в╕");
			gotoxylimit(x + 10, y + 1, "в╕");
			gotoxylimit(x + 10, y + 2, "в╕");
		}
	}
	else if (size == 11) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 1, "в║");
			gotoxylimit(x, y + 2, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y, "бс", 4);
			gotoxylimit_hori(x + 2, y + 1, "бс", 6);
			gotoxylimit_hori(x + 4, y + 2, "бс", 4);
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 3);
			gotoxylimit_hori(x + 4, y + 3, "бх", 3);
			gotoxylimit(x + 2, y, "бу");
			gotoxylimit(x + 2, y + 2, "бх");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 4);
			gotoxylimit_hori(x - 2, y + 1, "бс", 6);
			gotoxylimit_hori(x, y + 2, "бс", 4);
			color_change(fin_color);
			gotoxylimit(x + 8, y + 2, "бх");
			gotoxylimit_hori(x + 2, y - 1, "бу", 3);
			gotoxylimit_hori(x + 2, y + 3, "бх", 3);
			gotoxylimit(x + 8, y, "бу");
			color_change(tail_color);
			gotoxylimit(x + 10, y, "в╕");
			gotoxylimit(x + 10, y + 1, "в╕");
			gotoxylimit(x + 10, y + 2, "в╕");
		}
	}
	else if (size == 12) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 1, "бс");
			gotoxylimit(x + 2, y + 1, "бс");
			gotoxylimit(x, y + 2, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "бс", 4);
			gotoxylimit_hori(x + 4, y + 1, "бс", 6);
			gotoxylimit_hori(x + 6, y + 2, "бс", 4);
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 3);
			gotoxylimit_hori(x + 6, y + 3, "бх", 3);
			gotoxylimit(x + 4, y, "бу");
			gotoxylimit(x + 4, y + 2, "бх");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 4);
			gotoxylimit_hori(x - 2, y + 1, "бс", 6);
			gotoxylimit_hori(x, y + 2, "бс", 4);
			color_change(fin_color);
			gotoxylimit(x + 8, y + 2, "бх");
			gotoxylimit_hori(x + 2, y - 1, "бу", 3);
			gotoxylimit_hori(x + 2, y + 3, "бх", 3);
			gotoxylimit(x + 8, y, "бу");
			color_change(tail_color);
			gotoxylimit(x + 12, y, "в╕");
			gotoxylimit(x + 10, y + 1, "бс");
			gotoxylimit(x + 12, y + 1, "бс");
			gotoxylimit(x + 12, y + 2, "в╕");
		}
	}
	else if (size == 13) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 1, "бс");
			gotoxylimit(x + 2, y + 1, "бс");
			gotoxylimit(x, y + 2, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "бс", 5);
			gotoxylimit_hori(x + 4, y + 1, "бс", 7);
			gotoxylimit_hori(x + 6, y + 2, "бс", 5);
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 4);
			gotoxylimit_hori(x + 6, y + 3, "бх", 4);
			gotoxylimit(x + 4, y, "бу");
			gotoxylimit(x + 4, y + 2, "бх");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 5);
			gotoxylimit_hori(x - 2, y + 1, "бс", 7);
			gotoxylimit_hori(x, y + 2, "бс", 5);
			color_change(fin_color);
			gotoxylimit(x + 10, y + 2, "бх");
			gotoxylimit_hori(x + 2, y - 1, "бу", 4);
			gotoxylimit_hori(x + 2, y + 3, "бх", 4);
			gotoxylimit(x + 10, y, "бу");
			color_change(tail_color);
			gotoxylimit(x + 14, y, "в╕");
			gotoxylimit(x + 12, y + 1, "бс");
			gotoxylimit(x + 14, y + 1, "бс");
			gotoxylimit(x + 14, y + 2, "в╕");
		}
	}
	else if (size == 14) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 3, "в║");
			gotoxylimit(x, y + 1, "бс");
			gotoxylimit(x + 2, y + 1, "бс");
			gotoxylimit(x, y + 2, "бс");
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "бс", 5);
			gotoxylimit_hori(x + 4, y + 1, "бс", 7);
			gotoxylimit_hori(x + 4, y + 2, "бс", 7);
			gotoxylimit_hori(x + 6, y + 3, "бс", 5);
			color_change(eye_color);
			gotoxylimit(x + 14, y + 1, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 4);
			gotoxylimit_hori(x + 6, y + 4, "бх", 4);
			gotoxylimit(x + 4, y, "бу");
			gotoxylimit(x + 4, y + 3, "бх");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 5);
			gotoxylimit_hori(x - 2, y + 1, "бс", 7);
			gotoxylimit_hori(x - 2, y + 2, "бс", 7);
			gotoxylimit_hori(x, y + 3, "бс", 5);
			color_change(eye_color);
			gotoxylimit(x, y + 1, "бс");
			color_change(fin_color);
			gotoxylimit(x + 10, y + 3, "бх");
			gotoxylimit_hori(x + 2, y - 1, "бу", 4);
			gotoxylimit_hori(x + 2, y + 4, "бх", 4);
			gotoxylimit(x + 10, y, "бу");
			color_change(tail_color);
			gotoxylimit(x + 14, y, "в╕");
			gotoxylimit(x + 12, y + 1, "бс");
			gotoxylimit(x + 14, y + 1, "бс");
			gotoxylimit(x + 12, y + 2, "бс");
			gotoxylimit(x + 14, y + 2, "бс");
			gotoxylimit(x + 14, y + 3, "в╕");
		}
	}
	else if (size == 15) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 3, "в║");
			gotoxylimit(x, y + 1, "бс");
			gotoxylimit(x + 2, y + 1, "бс");
			gotoxylimit(x, y + 2, "бс");
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "бс", 6);
			gotoxylimit_hori(x + 4, y + 1, "бс", 8);
			gotoxylimit_hori(x + 4, y + 2, "бс", 8);
			gotoxylimit_hori(x + 6, y + 3, "бс", 6);
			color_change(eye_color);
			gotoxylimit(x + 16, y + 1, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 5);
			gotoxylimit_hori(x + 6, y + 4, "бх", 5);
			gotoxylimit(x + 4, y, "бу");
			gotoxylimit(x + 4, y + 3, "бх");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 6);
			gotoxylimit_hori(x - 2, y + 1, "бс", 8);
			gotoxylimit_hori(x - 2, y + 2, "бс", 8);
			gotoxylimit_hori(x, y + 3, "бс", 6);
			color_change(eye_color);
			gotoxylimit(x, y + 1, "бс");
			color_change(fin_color);
			gotoxylimit(x + 12, y + 3, "бх");
			gotoxylimit_hori(x + 2, y - 1, "бу", 5);
			gotoxylimit_hori(x + 2, y + 4, "бх", 5);
			gotoxylimit(x + 12, y, "бу");
			color_change(tail_color);
			gotoxylimit(x + 16, y, "в╕");
			gotoxylimit(x + 14, y + 1, "бс");
			gotoxylimit(x + 16, y + 1, "бс");
			gotoxylimit(x + 14, y + 2, "бс");
			gotoxylimit(x + 16, y + 2, "бс");
			gotoxylimit(x + 16, y + 3, "в╕");
		}
	}
	else if (size == 16) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 4, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x, y + 3, "бу");
			gotoxylimit(x + 2, y + 3, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "бс", 6);
			gotoxylimit_hori(x + 4, y + 1, "бс", 8);
			gotoxylimit_hori(x + 4, y + 2, "бс", 8);
			gotoxylimit_hori(x + 4, y + 3, "бс", 8);
			gotoxylimit_hori(x + 6, y + 4, "бс", 6);
			color_change(eye_color);
			gotoxylimit(x + 16, y + 1, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 5);
			gotoxylimit_hori(x + 6, y + 5, "бх", 5);
			gotoxylimit(x + 4, y, "бу");
			gotoxylimit(x + 4, y + 4, "бх");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 6);
			gotoxylimit_hori(x - 2, y + 1, "бс", 8);
			gotoxylimit_hori(x - 2, y + 2, "бс", 8);
			gotoxylimit_hori(x - 2, y + 3, "бс", 8);
			gotoxylimit_hori(x, y + 4, "бс", 6);
			color_change(eye_color);
			gotoxylimit(x, y + 1, "бс");
			color_change(fin_color);
			gotoxylimit(x + 12, y + 4, "бх");
			gotoxylimit_hori(x + 2, y - 1, "бу", 5);
			gotoxylimit_hori(x + 2, y + 5, "бх", 5);
			gotoxylimit(x + 12, y, "бу");
			color_change(tail_color);
			gotoxylimit(x + 16, y, "в╕");
			gotoxylimit(x + 14, y + 1, "в╕");
			gotoxylimit(x + 16, y + 1, "бх");
			gotoxylimit(x + 14, y + 2, "бс");
			gotoxylimit(x + 14, y + 3, "в╕");
			gotoxylimit(x + 16, y + 3, "бу");
			gotoxylimit(x + 16, y + 4, "в╕");
		}
	}
	else if (size == 17) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 4, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x, y + 3, "бу");
			gotoxylimit(x + 2, y + 3, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "бс", 7);
			gotoxylimit_hori(x + 4, y + 1, "бс", 9);
			gotoxylimit_hori(x + 4, y + 2, "бс", 9);
			gotoxylimit_hori(x + 4, y + 3, "бс", 9);
			gotoxylimit_hori(x + 6, y + 4, "бс", 7);
			color_change(eye_color);
			gotoxylimit(x + 16, y + 1, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 6);
			gotoxylimit_hori(x + 6, y + 5, "бх", 6);
			gotoxylimit(x + 4, y, "бу");
			gotoxylimit(x + 4, y + 4, "бх");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 7);
			gotoxylimit_hori(x - 2, y + 1, "бс", 9);
			gotoxylimit_hori(x - 2, y + 2, "бс", 9);
			gotoxylimit_hori(x - 2, y + 3, "бс", 9);
			gotoxylimit_hori(x, y + 4, "бс", 7);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 1, "бс");
			color_change(fin_color);
			gotoxylimit(x + 14, y + 4, "бх");
			gotoxylimit_hori(x + 2, y - 1, "бу", 6);
			gotoxylimit_hori(x + 2, y + 5, "бх", 6);
			gotoxylimit(x + 14, y, "бу");
			color_change(tail_color);
			gotoxylimit(x + 18, y, "в╕");
			gotoxylimit(x + 16, y + 1, "в╕");
			gotoxylimit(x + 18, y + 1, "бх");
			gotoxylimit(x + 16, y + 2, "бс");
			gotoxylimit(x + 16, y + 3, "в╕");
			gotoxylimit(x + 18, y + 3, "бу");
			gotoxylimit(x + 18, y + 4, "в╕");
		}
	}
	else if (size == 18) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");	
			gotoxylimit(x, y + 4, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x, y + 3, "бу");
			gotoxylimit(x + 2, y + 3, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "бс", 8);
			gotoxylimit_hori(x + 4, y + 1, "бс", 10);
			gotoxylimit_hori(x + 4, y + 2, "бс", 10);
			gotoxylimit_hori(x + 4, y + 3, "бс", 10);
			gotoxylimit_hori(x + 6, y + 4, "бс", 8);
			color_change(eye_color);
			gotoxylimit(x + 18, y + 1, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 7);
			gotoxylimit_hori(x + 6, y + 5, "бх", 7);
			gotoxylimit(x + 4, y, "бу");
			gotoxylimit(x + 4, y + 4, "бх");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 8);
			gotoxylimit_hori(x - 2, y + 1, "бс", 10);
			gotoxylimit_hori(x - 2, y + 2, "бс", 10);
			gotoxylimit_hori(x - 2, y + 3, "бс", 10);
			gotoxylimit_hori(x, y + 4, "бс", 8);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 1, "бс");
			color_change(fin_color);
			gotoxylimit(x + 16, y + 4, "бх");
			gotoxylimit_hori(x + 2, y - 1, "бу", 7);
			gotoxylimit_hori(x + 2, y + 5, "бх", 7);
			gotoxylimit(x + 16, y, "бу");
			color_change(tail_color);
			gotoxylimit(x + 20, y, "в╕");
			gotoxylimit(x + 18, y + 1, "в╕");
			gotoxylimit(x + 20, y + 1, "бх");
			gotoxylimit(x + 18, y + 2, "бс");
			gotoxylimit(x + 18, y + 3, "в╕");
			gotoxylimit(x + 20, y + 3, "бу");
			gotoxylimit(x + 20, y + 4, "в╕");
		}
	}
	else if (size == 19) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 5, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 2, y + 3, "бс");
			gotoxylimit(x, y + 4, "бу");
			gotoxylimit(x + 2, y + 4, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "бс", 8);
			gotoxylimit_hori(x + 4, y + 1, "бс", 10);
			gotoxylimit_hori(x + 4, y + 2, "бс", 10);
			gotoxylimit_hori(x + 4, y + 3, "бс", 10);
			gotoxylimit_hori(x + 4, y + 4, "бс", 10);
			gotoxylimit_hori(x + 6, y + 5, "бс", 8);
			color_change(eye_color);
			gotoxylimit(x + 18, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 7);
			gotoxylimit_hori(x + 6, y + 6, "бх", 7);
			gotoxylimit(x + 4, y, "бу");
			gotoxylimit(x + 4, y + 5, "бх");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 8);
			gotoxylimit_hori(x - 2, y + 1, "бс", 10);
			gotoxylimit_hori(x - 2, y + 2, "бс", 10);
			gotoxylimit_hori(x - 2, y + 3, "бс", 10);
			gotoxylimit_hori(x - 2, y + 4, "бс", 10);
			gotoxylimit_hori(x, y + 5, "бс", 8);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit(x + 16, y + 5, "бх");
			gotoxylimit_hori(x + 2, y - 1, "бу", 7);
			gotoxylimit_hori(x + 2, y + 6, "бх", 7);
			gotoxylimit(x + 16, y, "бу");
			color_change(tail_color);
			gotoxylimit(x + 20, y, "в╕");
			gotoxylimit(x + 18, y + 1, "в╕");
			gotoxylimit(x + 20, y + 1, "бх");
			gotoxylimit(x + 18, y + 2, "бс");
			gotoxylimit(x + 18, y + 3, "бс");
			gotoxylimit(x + 18, y + 4, "в╕");
			gotoxylimit(x + 20, y + 4, "бу");
			gotoxylimit(x + 20, y + 5, "в╕");
		}
	}
	else if (size == 20) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 5, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 2, y + 3, "бс");
			gotoxylimit(x, y + 4, "бу");
			gotoxylimit(x + 2, y + 4, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "бс", 8);
			gotoxylimit_hori(x + 4, y + 1, "бс", 10);
			gotoxylimit_hori(x + 4, y + 2, "бс", 11);
			gotoxylimit_hori(x + 4, y + 3, "бс", 11);
			gotoxylimit_hori(x + 4, y + 4, "бс", 10);
			gotoxylimit_hori(x + 6, y + 5, "бс", 8);
			color_change(eye_color);
			gotoxylimit(x + 18, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 7);
			gotoxylimit_hori(x + 6, y + 6, "бх", 7);
			gotoxylimit(x + 4, y, "бу");
			gotoxylimit(x + 4, y + 5, "бх");
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 8);
			gotoxylimit_hori(x - 2, y + 1, "бс", 10);
			gotoxylimit_hori(x - 4, y + 2, "бс", 11);
			gotoxylimit_hori(x - 4, y + 3, "бс", 11);
			gotoxylimit_hori(x - 2, y + 4, "бс", 10);
			gotoxylimit_hori(x, y + 5, "бс", 8);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit(x + 16, y + 5, "бх");
			gotoxylimit_hori(x + 2, y - 1, "бу", 7);
			gotoxylimit_hori(x + 2, y + 6, "бх", 7);
			gotoxylimit(x + 16, y, "бу");
			color_change(tail_color);
			gotoxylimit(x + 20, y, "в╕");
			gotoxylimit(x + 18, y + 1, "в╕");
			gotoxylimit(x + 20, y + 1, "бх");
			gotoxylimit(x + 18, y + 2, "бс");
			gotoxylimit(x + 18, y + 3, "бс");
			gotoxylimit(x + 18, y + 4, "в╕");
			gotoxylimit(x + 20, y + 4, "бу");
			gotoxylimit(x + 20, y + 5, "в╕");
		}
	}
	else if (size == 21) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 5, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 2, y + 3, "бс");
			gotoxylimit(x, y + 4, "бу");
			gotoxylimit(x + 2, y + 4, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "бс", 9);
			gotoxylimit_hori(x + 4, y + 1, "бс", 11);
			gotoxylimit_hori(x + 4, y + 2, "бс", 12);
			gotoxylimit_hori(x + 4, y + 3, "бс", 12);
			gotoxylimit_hori(x + 4, y + 4, "бс", 11);
			gotoxylimit_hori(x + 6, y + 5, "бс", 9);
			color_change(eye_color);
			gotoxylimit(x + 20, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 8);
			gotoxylimit_hori(x + 6, y + 6, "бх", 8);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 9);
			gotoxylimit_hori(x - 2, y + 1, "бс", 11);
			gotoxylimit_hori(x - 4, y + 2, "бс", 12);
			gotoxylimit_hori(x - 4, y + 3, "бс", 12);
			gotoxylimit_hori(x - 2, y + 4, "бс", 11);
			gotoxylimit_hori(x, y + 5, "бс", 9);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 2, y - 1, "бу", 8);
			gotoxylimit_hori(x + 2, y + 6, "бх", 8);
			color_change(tail_color);
			gotoxylimit(x + 22, y, "в╕");
			gotoxylimit(x + 20, y + 1, "в╕");
			gotoxylimit(x + 22, y + 1, "бх");
			gotoxylimit(x + 20, y + 2, "бс");
			gotoxylimit(x + 20, y + 3, "бс");
			gotoxylimit(x + 20, y + 4, "в╕");
			gotoxylimit(x + 22, y + 4, "бу");
			gotoxylimit(x + 22, y + 5, "в╕");
		}
	}
	else if (size == 22) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 5, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 2, y + 3, "бс");
			gotoxylimit(x, y + 4, "бу");
			gotoxylimit(x + 2, y + 4, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 1, "бс", 12);
			gotoxylimit_hori(x + 4, y + 4, "бс", 12);
			gotoxylimit_hori(x + 4, y + 2, "бс", 13);
			gotoxylimit_hori(x + 4, y + 3, "бс", 13);
			gotoxylimit_hori(x + 6, y, "бс", 10);
			gotoxylimit_hori(x + 6, y + 5, "бс", 10);
			color_change(eye_color);
			gotoxylimit(x + 22, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 8);
			gotoxylimit_hori(x + 6, y + 6, "бх", 8);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 10);
			gotoxylimit_hori(x - 2, y + 1, "бс", 12);
			gotoxylimit_hori(x - 4, y + 2, "бс", 13);
			gotoxylimit_hori(x - 4, y + 3, "бс", 13);
			gotoxylimit_hori(x - 2, y + 4, "бс", 12);
			gotoxylimit_hori(x, y + 5, "бс", 10);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 8);
			gotoxylimit_hori(x + 4, y + 6, "бх", 8);
			color_change(tail_color);
			gotoxylimit(x + 24, y, "в╕");
			gotoxylimit(x + 22, y + 1, "в╕");
			gotoxylimit(x + 24, y + 1, "бх");
			gotoxylimit(x + 22, y + 2, "бс");
			gotoxylimit(x + 22, y + 3, "бс");
			gotoxylimit(x + 22, y + 4, "в╕");
			gotoxylimit(x + 24, y + 4, "бу");
			gotoxylimit(x + 24, y + 5, "в╕");
		}
	}
	else if (size == 23) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 5, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 2, y + 3, "бс");
			gotoxylimit(x, y + 4, "бу");
			gotoxylimit(x + 2, y + 4, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 4, "бс", 13);
			gotoxylimit_hori(x + 4, y + 1, "бс", 13);
			gotoxylimit_hori(x + 4, y + 2, "бс", 14);
			gotoxylimit_hori(x + 4, y + 3, "бс", 14);
			gotoxylimit_hori(x + 6, y, "бс", 11);
			gotoxylimit_hori(x + 6, y + 5, "бс", 11);
			color_change(eye_color);
			gotoxylimit(x + 24, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "бу", 8);
			gotoxylimit_hori(x + 8, y + 6, "бх", 8);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 11);
			gotoxylimit_hori(x - 2, y + 1, "бс", 13);
			gotoxylimit_hori(x - 4, y + 2, "бс", 14);
			gotoxylimit_hori(x - 4, y + 3, "бс", 14);
			gotoxylimit_hori(x - 2, y + 4, "бс", 13);
			gotoxylimit_hori(x, y + 5, "бс", 11);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 8);
			gotoxylimit_hori(x + 4, y + 6, "бх", 8);
			color_change(tail_color);
			gotoxylimit(x + 26, y, "в╕");
			gotoxylimit(x + 24, y + 1, "в╕");
			gotoxylimit(x + 26, y + 1, "бх");
			gotoxylimit(x + 24, y + 2, "бс");
			gotoxylimit(x + 24, y + 3, "бс");
			gotoxylimit(x + 24, y + 4, "в╕");
			gotoxylimit(x + 26, y + 4, "бу");
			gotoxylimit(x + 26, y + 5, "в╕");
		}
	}
	else if (size == 24) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 5, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 2, y + 3, "бс");
			gotoxylimit(x, y + 4, "бу");
			gotoxylimit(x + 2, y + 4, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 1, "бс", 14);
			gotoxylimit_hori(x + 4, y + 4, "бс", 14);
			gotoxylimit_hori(x + 4, y + 2, "бс", 15);
			gotoxylimit_hori(x + 4, y + 3, "бс", 15);
			gotoxylimit_hori(x + 6, y, "бс", 12);
			gotoxylimit_hori(x + 6, y + 5, "бс", 12);
			color_change(eye_color);
			gotoxylimit(x + 26, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "бу", 9);
			gotoxylimit_hori(x + 8, y + 6, "бх", 9);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 12);
			gotoxylimit_hori(x - 2, y + 1, "бс", 14);
			gotoxylimit_hori(x - 4, y + 2, "бс", 15);
			gotoxylimit_hori(x - 4, y + 3, "бс", 15);
			gotoxylimit_hori(x - 2, y + 4, "бс", 14);
			gotoxylimit_hori(x, y + 5, "бс", 12);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 9);
			gotoxylimit_hori(x + 4, y + 6, "бх", 9);
			color_change(tail_color);
			gotoxylimit(x + 28, y, "в╕");
			gotoxylimit(x + 26, y + 1, "в╕");
			gotoxylimit(x + 28, y + 1, "бх");
			gotoxylimit(x + 26, y + 2, "бс");
			gotoxylimit(x + 26, y + 3, "бс");
			gotoxylimit(x + 26, y + 4, "в╕");
			gotoxylimit(x + 28, y + 4, "бу");
			gotoxylimit(x + 28, y + 5, "в╕");
		}
	}
	else if (size == 25) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 6, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 2, y + 3, "бс");
			gotoxylimit(x + 2, y + 4, "бс");
			gotoxylimit(x, y + 5, "бу");
			gotoxylimit(x + 2, y + 5, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 5, "бс", 14);
			gotoxylimit_hori(x + 4, y + 1, "бс", 14);
			gotoxylimit_hori(x + 4, y + 2, "бс", 15);
			gotoxylimit_hori(x + 4, y + 3, "бс", 15);
			gotoxylimit_hori(x + 4, y + 4, "бс", 15);
			gotoxylimit_hori(x + 6, y, "бс", 12);
			gotoxylimit_hori(x + 6, y + 6, "бс", 12);
			color_change(eye_color);
			gotoxylimit(x + 26, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "бу", 9);
			gotoxylimit_hori(x + 8, y + 7, "бх", 9);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 12);
			gotoxylimit_hori(x - 2, y + 1, "бс", 14);
			gotoxylimit_hori(x - 4, y + 2, "бс", 15);
			gotoxylimit_hori(x - 4, y + 3, "бс", 15);
			gotoxylimit_hori(x - 4, y + 4, "бс", 15);
			gotoxylimit_hori(x - 2, y + 5, "бс", 14);
			gotoxylimit_hori(x, y + 6, "бс", 12);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 9);
			gotoxylimit_hori(x + 4, y + 7, "бх", 9);
			color_change(tail_color);
			gotoxylimit(x + 28, y, "в╕");
			gotoxylimit(x + 26, y + 1, "в╕");
			gotoxylimit(x + 28, y + 1, "бх");
			gotoxylimit(x + 26, y + 2, "бс");
			gotoxylimit(x + 26, y + 3, "бс");
			gotoxylimit(x + 26, y + 4, "бс");
			gotoxylimit(x + 26, y + 5, "в╕");
			gotoxylimit(x + 28, y + 5, "бу");
			gotoxylimit(x + 28, y + 6, "в╕");
		}
	}
	else if (size == 26) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 6, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 2, y + 3, "бс");
			gotoxylimit(x + 2, y + 4, "бс");
			gotoxylimit(x, y + 5, "бу");
			gotoxylimit(x + 2, y + 5, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 5, "бс", 15);
			gotoxylimit_hori(x + 4, y + 1, "бс", 15);
			gotoxylimit_hori(x + 4, y + 2, "бс", 16);
			gotoxylimit_hori(x + 4, y + 3, "бс", 16);
			gotoxylimit_hori(x + 4, y + 4, "бс", 16);
			gotoxylimit_hori(x + 6, y, "бс", 13);
			gotoxylimit_hori(x + 6, y + 6, "бс", 13);
			color_change(eye_color);
			gotoxylimit(x + 26, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "бу", 10);
			gotoxylimit_hori(x + 8, y + 7, "бх", 10);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 13);
			gotoxylimit_hori(x - 2, y + 1, "бс", 15);
			gotoxylimit_hori(x - 4, y + 2, "бс", 16);
			gotoxylimit_hori(x - 4, y + 3, "бс", 16);
			gotoxylimit_hori(x - 4, y + 4, "бс", 16);
			gotoxylimit_hori(x - 2, y + 5, "бс", 15);
			gotoxylimit_hori(x, y + 6, "бс", 13);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 10);
			gotoxylimit_hori(x + 4, y + 7, "бх", 10);
			color_change(tail_color);
			gotoxylimit(x + 30, y, "в╕");
			gotoxylimit(x + 28, y + 1, "в╕");
			gotoxylimit(x + 30, y + 1, "бх");
			gotoxylimit(x + 28, y + 2, "бс");
			gotoxylimit(x + 28, y + 3, "бс");
			gotoxylimit(x + 28, y + 4, "бс");
			gotoxylimit(x + 28, y + 5, "в╕");
			gotoxylimit(x + 30, y + 5, "бу");
			gotoxylimit(x + 30, y + 6, "в╕");
		}
	}
	else if (size == 27) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 6, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 2, y + 3, "бс");
			gotoxylimit(x + 2, y + 4, "бс");
			gotoxylimit(x, y + 5, "бу");
			gotoxylimit(x + 2, y + 5, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 5, "бс", 16);
			gotoxylimit_hori(x + 4, y + 1, "бс", 16);
			gotoxylimit_hori(x + 4, y + 2, "бс", 17);
			gotoxylimit_hori(x + 4, y + 3, "бс", 17);
			gotoxylimit_hori(x + 4, y + 4, "бс", 17);
			gotoxylimit_hori(x + 6, y, "бс", 14);
			gotoxylimit_hori(x + 6, y + 6, "бс", 14);
			color_change(eye_color);
			gotoxylimit(x + 28, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "бу", 11);
			gotoxylimit_hori(x + 8, y + 7, "бх", 11);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 14);
			gotoxylimit_hori(x - 2, y + 1, "бс", 16);
			gotoxylimit_hori(x - 4, y + 2, "бс", 17);
			gotoxylimit_hori(x - 4, y + 3, "бс", 17);
			gotoxylimit_hori(x - 4, y + 4, "бс", 17);
			gotoxylimit_hori(x - 2, y + 5, "бс", 16);
			gotoxylimit_hori(x, y + 6, "бс", 14);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 11);
			gotoxylimit_hori(x + 4, y + 7, "бх", 11);
			color_change(tail_color);
			gotoxylimit(x + 32, y, "в╕");
			gotoxylimit(x + 30, y + 1, "в╕");
			gotoxylimit(x + 32, y + 1, "бх");
			gotoxylimit(x + 30, y + 2, "бс");
			gotoxylimit(x + 30, y + 3, "бс");
			gotoxylimit(x + 30, y + 4, "бс");
			gotoxylimit(x + 30, y + 5, "в╕");
			gotoxylimit(x + 32, y + 5, "бу");
			gotoxylimit(x + 32, y + 6, "в╕");
		}
	}
	else if (size == 28) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 6, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 2, y + 3, "бс");
			gotoxylimit(x + 2, y + 4, "бс");
			gotoxylimit(x, y + 5, "бу");
			gotoxylimit(x + 2, y + 5, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 5, "бс", 17);
			gotoxylimit_hori(x + 4, y + 1, "бс", 17);
			gotoxylimit_hori(x + 4, y + 2, "бс", 18);
			gotoxylimit_hori(x + 4, y + 3, "бс", 18);
			gotoxylimit_hori(x + 4, y + 4, "бс", 18);
			gotoxylimit_hori(x + 6, y, "бс", 15);
			gotoxylimit_hori(x + 6, y + 6, "бс", 15);
			color_change(eye_color);
			gotoxylimit(x + 30, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "бу", 12);
			gotoxylimit_hori(x + 8, y + 7, "бх", 12);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 15);
			gotoxylimit_hori(x - 2, y + 1, "бс", 17);
			gotoxylimit_hori(x - 4, y + 2, "бс", 18);
			gotoxylimit_hori(x - 4, y + 3, "бс", 18);
			gotoxylimit_hori(x - 4, y + 4, "бс", 18);
			gotoxylimit_hori(x - 2, y + 5, "бс", 17);
			gotoxylimit_hori(x, y + 6, "бс", 15);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 12);
			gotoxylimit_hori(x + 4, y + 7, "бх", 12);
			color_change(tail_color);
			gotoxylimit(x + 34, y, "в╕");
			gotoxylimit(x + 32, y + 1, "в╕");
			gotoxylimit(x + 34, y + 1, "бх");
			gotoxylimit(x + 32, y + 2, "бс");
			gotoxylimit(x + 32, y + 3, "бс");
			gotoxylimit(x + 32, y + 4, "бс");
			gotoxylimit(x + 32, y + 5, "в╕");
			gotoxylimit(x + 34, y + 5, "бу");
			gotoxylimit(x + 34, y + 6, "в╕");
		}
	}
	else if (size == 29) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 6, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бх");
			gotoxylimit(x + 4, y + 2, "в║");
			gotoxylimit(x + 4, y + 3, "бс");
			gotoxylimit(x, y + 5, "бу");
			gotoxylimit(x + 2, y + 5, "в║");
			gotoxylimit(x + 2, y + 4, "бу");
			gotoxylimit(x + 4, y + 4, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 4, "бс", 18);
			gotoxylimit_hori(x + 6, y + 5, "бс", 17);
			gotoxylimit_hori(x + 6, y + 1, "бс", 17);
			gotoxylimit_hori(x + 6, y + 2, "бс", 18);
			gotoxylimit_hori(x + 6, y + 3, "бс", 18);
			gotoxylimit_hori(x + 8, y, "бс", 15);
			gotoxylimit_hori(x + 8, y + 6, "бс", 15);
			color_change(eye_color);
			gotoxylimit(x + 32, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "бу", 12);
			gotoxylimit_hori(x + 10, y + 7, "бх", 12);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 15);
			gotoxylimit_hori(x - 2, y + 1, "бс", 17);
			gotoxylimit_hori(x - 4, y + 2, "бс", 18);
			gotoxylimit_hori(x - 4, y + 3, "бс", 18);
			gotoxylimit_hori(x - 4, y + 4, "бс", 18);
			gotoxylimit_hori(x - 2, y + 5, "бс", 17);
			gotoxylimit_hori(x, y + 6, "бс", 15);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 12);
			gotoxylimit_hori(x + 4, y + 7, "бх", 12);
			color_change(tail_color);
			gotoxylimit(x + 36, y, "в╕");
			gotoxylimit(x + 34, y + 1, "в╕");
			gotoxylimit(x + 36, y + 1, "бх");
			gotoxylimit(x + 32, y + 2, "в╕");
			gotoxylimit(x + 34, y + 2, "бх");
			gotoxylimit(x + 32, y + 3, "бс");
			gotoxylimit(x + 32, y + 4, "в╕");
			gotoxylimit(x + 34, y + 4, "бу");
			gotoxylimit(x + 34, y + 5, "в╕");
			gotoxylimit(x + 36, y + 5, "бу");
			gotoxylimit(x + 36, y + 6, "в╕");
		}
	}
	else if (size == 30) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 1, "бх");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x + 2, y + 2, "бх");
			gotoxylimit(x + 4, y + 2, "в║");
			gotoxylimit(x + 4, y + 3, "бс");
			gotoxylimit(x + 4, y + 4, "бс");
			gotoxylimit(x, y + 6, "бу");
			gotoxylimit(x + 2, y + 6, "в║");
			gotoxylimit(x, y + 7, "в║");
			gotoxylimit(x + 2, y + 5, "бу");
			gotoxylimit(x + 4, y + 5, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 5, "бс", 18);
			gotoxylimit_hori(x + 8, y, "бс", 15);
			gotoxylimit_hori(x + 6, y + 1, "бс", 17);
			gotoxylimit_hori(x + 6, y + 2, "бс", 18);
			gotoxylimit_hori(x + 6, y + 3, "бс", 18);
			gotoxylimit_hori(x + 6, y + 4, "бс", 18);
			gotoxylimit_hori(x + 6, y + 6, "бс", 17);
			gotoxylimit_hori(x + 8, y + 7, "бс", 15);
			color_change(eye_color);
			gotoxylimit(x + 32, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "бу", 12);
			gotoxylimit_hori(x + 10, y + 8, "бх", 12);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 15);
			gotoxylimit_hori(x - 2, y + 1, "бс", 17);
			gotoxylimit_hori(x - 4, y + 2, "бс", 18);
			gotoxylimit_hori(x - 4, y + 3, "бс", 18);
			gotoxylimit_hori(x - 4, y + 4, "бс", 18);
			gotoxylimit_hori(x - 4, y + 5, "бс", 18);
			gotoxylimit_hori(x - 2, y + 6, "бс", 17);
			gotoxylimit_hori(x, y + 7, "бс", 15);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 12);
			gotoxylimit_hori(x + 4, y + 8, "бх", 12);
			color_change(tail_color);
			gotoxylimit(x + 36, y, "в╕");
			gotoxylimit(x + 34, y + 1, "в╕");
			gotoxylimit(x + 36, y + 1, "бх");
			gotoxylimit(x + 32, y + 2, "в╕");
			gotoxylimit(x + 34, y + 2, "бх");
			gotoxylimit(x + 32, y + 3, "бс");
			gotoxylimit(x + 32, y + 4, "бс");
			gotoxylimit(x + 32, y + 5, "в╕");
			gotoxylimit(x + 34, y + 5, "бу");
			gotoxylimit(x + 34, y + 6, "в╕");
			gotoxylimit(x + 36, y + 6, "бу");
			gotoxylimit(x + 36, y + 7, "в╕");
		}
	}
	else if (size == 31) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 1, "бс");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x, y + 2, "бх");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 4, y + 2, "в║");
			gotoxylimit(x + 2, y + 3, "бх");
			gotoxylimit(x + 4, y + 3, "бс");
			gotoxylimit(x + 2, y + 4, "бу");
			gotoxylimit(x + 4, y + 4, "бс");
			gotoxylimit(x, y + 6, "бс");
			gotoxylimit(x + 2, y + 6, "в║");
			gotoxylimit(x, y + 7, "в║");
			gotoxylimit(x, y + 5, "бу");
			gotoxylimit(x + 2, y + 5, "бс");
			gotoxylimit(x + 4, y + 5, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 5, "бс", 18);
			gotoxylimit_hori(x + 8, y, "бс", 15);
			gotoxylimit_hori(x + 6, y + 1, "бс", 17);
			gotoxylimit_hori(x + 6, y + 2, "бс", 18);
			gotoxylimit_hori(x + 6, y + 3, "бс", 19);
			gotoxylimit_hori(x + 6, y + 4, "бс", 19);
			gotoxylimit_hori(x + 6, y + 6, "бс", 17);
			gotoxylimit_hori(x + 8, y + 7, "бс", 15);
			color_change(eye_color);
			gotoxylimit(x + 34, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "бу", 12);
			gotoxylimit_hori(x + 10, y + 8, "бх", 12);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 15);
			gotoxylimit_hori(x - 2, y + 1, "бс", 17);
			gotoxylimit_hori(x - 4, y + 2, "бс", 18);
			gotoxylimit_hori(x - 6, y + 3, "бс", 19);
			gotoxylimit_hori(x - 6, y + 4, "бс", 19);
			gotoxylimit_hori(x - 4, y + 5, "бс", 18);
			gotoxylimit_hori(x - 2, y + 6, "бс", 17);
			gotoxylimit_hori(x, y + 7, "бс", 15);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 12);
			gotoxylimit_hori(x + 4, y + 8, "бх", 12);
			color_change(tail_color);
			gotoxylimit(x + 36, y, "в╕");
			gotoxylimit(x + 34, y + 1, "в╕");
			gotoxylimit(x + 36, y + 1, "бс");
			gotoxylimit(x + 32, y + 2, "в╕");
			gotoxylimit(x + 34, y + 2, "бс");
			gotoxylimit(x + 36, y + 2, "бх");
			gotoxylimit(x + 32, y + 3, "бс");
			gotoxylimit(x + 34, y + 3, "бх");
			gotoxylimit(x + 32, y + 4, "бс");
			gotoxylimit(x + 34, y + 4, "бу");
			gotoxylimit(x + 32, y + 5, "в╕");
			gotoxylimit(x + 34, y + 5, "бс");
			gotoxylimit(x + 36, y + 5, "бу");
			gotoxylimit(x + 34, y + 6, "в╕");
			gotoxylimit(x + 36, y + 6, "бс");
			gotoxylimit(x + 36, y + 7, "в╕");
		}
	}
	else if (size == 32) {  // 22 X 11
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 1, "бс");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x, y + 2, "бх");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 4, y + 2, "в║");
			gotoxylimit(x + 2, y + 3, "бх");
			gotoxylimit(x + 4, y + 3, "бс");
			gotoxylimit(x + 4, y + 4, "бс");
			gotoxylimit(x + 2, y + 5, "бу");
			gotoxylimit(x + 4, y + 5, "бс");
			gotoxylimit(x, y + 7, "бс");
			gotoxylimit(x + 2, y + 7, "в║");
			gotoxylimit(x, y + 8, "в║");
			gotoxylimit(x, y + 6, "бу");
			gotoxylimit(x + 2, y + 6, "бс");
			gotoxylimit(x + 4, y + 6, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 6, "бс", 18);
			gotoxylimit_hori(x + 8, y, "бс", 15);
			gotoxylimit_hori(x + 6, y + 1, "бс", 17);
			gotoxylimit_hori(x + 6, y + 2, "бс", 18);
			gotoxylimit_hori(x + 6, y + 3, "бс", 19);
			gotoxylimit_hori(x + 6, y + 4, "бс", 19);
			gotoxylimit_hori(x + 6, y + 5, "бс", 19);
			gotoxylimit_hori(x + 6, y + 7, "бс", 17);
			gotoxylimit_hori(x + 8, y + 8, "бс", 15);
			color_change(eye_color);
			gotoxylimit(x + 34, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "бу", 12);
			gotoxylimit_hori(x + 10, y + 9, "бх", 12);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 15);
			gotoxylimit_hori(x - 2, y + 1, "бс", 17);
			gotoxylimit_hori(x - 4, y + 2, "бс", 18);
			gotoxylimit_hori(x - 6, y + 3, "бс", 19);
			gotoxylimit_hori(x - 6, y + 4, "бс", 19);
			gotoxylimit_hori(x - 6, y + 5, "бс", 19);
			gotoxylimit_hori(x - 4, y + 6, "бс", 18);
			gotoxylimit_hori(x - 2, y + 7, "бс", 17);
			gotoxylimit_hori(x, y + 8, "бс", 15);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 12);
			gotoxylimit_hori(x + 4, y + 9, "бх", 12);
			color_change(tail_color);
			gotoxylimit(x + 36, y, "в╕");
			gotoxylimit(x + 34, y + 1, "в╕");
			gotoxylimit(x + 36, y + 1, "бс");
			gotoxylimit(x + 32, y + 2, "в╕");
			gotoxylimit(x + 34, y + 2, "бс");
			gotoxylimit(x + 36, y + 2, "бх");
			gotoxylimit(x + 32, y + 3, "бс");
			gotoxylimit(x + 34, y + 3, "бх");
			gotoxylimit(x + 32, y + 4, "бс");
			gotoxylimit(x + 32, y + 5, "бс");
			gotoxylimit(x + 34, y + 5, "бу");
			gotoxylimit(x + 32, y + 6, "в╕");
			gotoxylimit(x + 34, y + 6, "бс");
			gotoxylimit(x + 36, y + 6, "бу");
			gotoxylimit(x + 34, y + 7, "в╕");
			gotoxylimit(x + 36, y + 7, "бс");
			gotoxylimit(x + 36, y + 8, "в╕");
		}
	}
	else if (size == 33) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 1, "бс");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x, y + 2, "бх");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 4, y + 2, "в║");
			gotoxylimit(x + 2, y + 3, "бх");
			gotoxylimit(x + 4, y + 3, "бс");
			gotoxylimit(x + 4, y + 4, "бс");
			gotoxylimit(x + 2, y + 5, "бу");
			gotoxylimit(x + 4, y + 5, "бс");
			gotoxylimit(x, y + 7, "бс");
			gotoxylimit(x + 2, y + 7, "в║");
			gotoxylimit(x, y + 8, "в║");
			gotoxylimit(x, y + 6, "бу");
			gotoxylimit(x + 2, y + 6, "бс");
			gotoxylimit(x + 4, y + 6, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 6, "бс", 19);
			gotoxylimit_hori(x + 8, y, "бс", 16);
			gotoxylimit_hori(x + 6, y + 1, "бс", 18);
			gotoxylimit_hori(x + 6, y + 2, "бс", 19);
			gotoxylimit_hori(x + 6, y + 3, "бс", 20);
			gotoxylimit_hori(x + 6, y + 4, "бс", 20);
			gotoxylimit_hori(x + 6, y + 5, "бс", 20);
			gotoxylimit_hori(x + 6, y + 7, "бс", 18);
			gotoxylimit_hori(x + 8, y + 8, "бс", 16);
			color_change(eye_color);
			gotoxylimit(x + 36, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "бу", 13);
			gotoxylimit_hori(x + 10, y + 9, "бх", 13);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 16);
			gotoxylimit_hori(x - 2, y + 1, "бс", 18);
			gotoxylimit_hori(x - 4, y + 2, "бс", 19);
			gotoxylimit_hori(x - 6, y + 3, "бс", 20);
			gotoxylimit_hori(x - 6, y + 4, "бс", 20);
			gotoxylimit_hori(x - 6, y + 5, "бс", 20);
			gotoxylimit_hori(x - 4, y + 6, "бс", 19);
			gotoxylimit_hori(x - 2, y + 7, "бс", 18);
			gotoxylimit_hori(x, y + 8, "бс", 16);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 13);
			gotoxylimit_hori(x + 4, y + 9, "бх", 13);
			color_change(tail_color);
			gotoxylimit(x + 38, y, "в╕");
			gotoxylimit(x + 36, y + 1, "в╕");
			gotoxylimit(x + 38, y + 1, "бс");
			gotoxylimit(x + 34, y + 2, "в╕");
			gotoxylimit(x + 36, y + 2, "бс");
			gotoxylimit(x + 38, y + 2, "бх");
			gotoxylimit(x + 34, y + 3, "бс");
			gotoxylimit(x + 36, y + 3, "бх");
			gotoxylimit(x + 34, y + 4, "бс");
			gotoxylimit(x + 34, y + 5, "бс");
			gotoxylimit(x + 36, y + 5, "бу");
			gotoxylimit(x + 34, y + 6, "в╕");
			gotoxylimit(x + 36, y + 6, "бс");
			gotoxylimit(x + 38, y + 6, "бу");
			gotoxylimit(x + 36, y + 7, "в╕");
			gotoxylimit(x + 38, y + 7, "бс");
			gotoxylimit(x + 38, y + 8, "в╕");
		}
	}
	else if (size == 34) { //24
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "в║");
			gotoxylimit(x, y + 1, "бс");
			gotoxylimit(x + 2, y + 1, "в║");
			gotoxylimit(x, y + 2, "бх");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 4, y + 2, "в║");
			gotoxylimit(x + 2, y + 3, "бх");
			gotoxylimit(x + 4, y + 3, "бс");
			gotoxylimit(x + 4, y + 4, "бс");
			gotoxylimit(x + 2, y + 5, "бу");
			gotoxylimit(x + 4, y + 5, "бс");
			gotoxylimit(x, y + 7, "бс");
			gotoxylimit(x + 2, y + 7, "в║");
			gotoxylimit(x, y + 8, "в║");
			gotoxylimit(x, y + 6, "бу");
			gotoxylimit(x + 2, y + 6, "бс");
			gotoxylimit(x + 4, y + 6, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 6, "бс", 20);
			gotoxylimit_hori(x + 8, y, "бс", 17);
			gotoxylimit_hori(x + 6, y + 1, "бс", 19);
			gotoxylimit_hori(x + 6, y + 2, "бс", 20);
			gotoxylimit_hori(x + 6, y + 3, "бс", 21);
			gotoxylimit_hori(x + 6, y + 4, "бс", 21);
			gotoxylimit_hori(x + 6, y + 5, "бс", 21);
			gotoxylimit_hori(x + 6, y + 7, "бс", 19);
			gotoxylimit_hori(x + 8, y + 8, "бс", 17);
			color_change(eye_color);
			gotoxylimit(x + 36, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "бу", 14);
			gotoxylimit_hori(x + 10, y + 9, "бх", 14);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 17);
			gotoxylimit_hori(x - 2, y + 1, "бс", 19);
			gotoxylimit_hori(x - 4, y + 2, "бс", 20);
			gotoxylimit_hori(x - 6, y + 3, "бс", 21);
			gotoxylimit_hori(x - 6, y + 4, "бс", 21);
			gotoxylimit_hori(x - 6, y + 5, "бс", 21);
			gotoxylimit_hori(x - 4, y + 6, "бс", 20);
			gotoxylimit_hori(x - 2, y + 7, "бс", 19);
			gotoxylimit_hori(x, y + 8, "бс", 17);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 14);
			gotoxylimit_hori(x + 4, y + 9, "бх", 14);
			color_change(tail_color);
			gotoxylimit(x + 40, y, "в╕");
			gotoxylimit(x + 38, y + 1, "в╕");
			gotoxylimit(x + 40, y + 1, "бс");
			gotoxylimit(x + 36, y + 2, "в╕");
			gotoxylimit(x + 38, y + 2, "бс");
			gotoxylimit(x + 40, y + 2, "бх");
			gotoxylimit(x + 36, y + 3, "бс");
			gotoxylimit(x + 38, y + 3, "бх");
			gotoxylimit(x + 36, y + 4, "бс");
			gotoxylimit(x + 36, y + 5, "бс");
			gotoxylimit(x + 38, y + 5, "бу");
			gotoxylimit(x + 36, y + 6, "в╕");
			gotoxylimit(x + 38, y + 6, "бс");
			gotoxylimit(x + 40, y + 6, "бу");
			gotoxylimit(x + 38, y + 7, "в╕");
			gotoxylimit(x + 40, y + 7, "бс");
			gotoxylimit(x + 40, y + 8, "в╕");
		}
	}
	else if (size == 35) { //25
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "бс");
			gotoxylimit(x + 2, y, "в║");
			gotoxylimit(x, y + 1, "бс");
			gotoxylimit(x + 2, y + 1, "бс");
			gotoxylimit(x + 4, y + 1, "в║");
			gotoxylimit(x, y + 2, "бх");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 4, y + 2, "бс");
			gotoxylimit(x + 6, y + 2, "в║");
			gotoxylimit(x + 2, y + 3, "бх");
			gotoxylimit(x + 4, y + 3, "бс");
			gotoxylimit(x + 6, y + 3, "бс");
			gotoxylimit(x + 4, y + 4, "бс");
			gotoxylimit(x + 6, y + 4, "бс");
			gotoxylimit(x + 2, y + 5, "бу");
			gotoxylimit(x + 4, y + 5, "бс");
			gotoxylimit(x + 6, y + 5, "бс");
			gotoxylimit(x, y + 7, "бс");
			gotoxylimit(x + 2, y + 7, "бс");
			gotoxylimit(x + 4, y + 7, "в║");
			gotoxylimit(x, y + 8, "бс");
			gotoxylimit(x + 2, y + 8, "в║");
			gotoxylimit(x, y + 6, "бу");
			gotoxylimit(x + 2, y + 6, "бс");
			gotoxylimit(x + 4, y + 6, "бс");
			gotoxylimit(x + 6, y + 6, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 8, y + 6, "бс", 20);
			gotoxylimit_hori(x + 10, y, "бс", 17);
			gotoxylimit_hori(x + 8, y + 1, "бс", 19);
			gotoxylimit_hori(x + 8, y + 2, "бс", 20);
			gotoxylimit_hori(x + 8, y + 3, "бс", 21);
			gotoxylimit_hori(x + 8, y + 4, "бс", 21);
			gotoxylimit_hori(x + 8, y + 5, "бс", 21);
			gotoxylimit_hori(x + 8, y + 7, "бс", 19);
			gotoxylimit_hori(x + 10, y + 8, "бс", 17);
			color_change(eye_color);
			gotoxylimit(x + 38, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 12, y - 1, "бу", 14);
			gotoxylimit_hori(x + 12, y + 9, "бх", 14);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 17);
			gotoxylimit_hori(x - 2, y + 1, "бс", 19);
			gotoxylimit_hori(x - 4, y + 2, "бс", 20);
			gotoxylimit_hori(x - 6, y + 3, "бс", 21);
			gotoxylimit_hori(x - 6, y + 4, "бс", 21);
			gotoxylimit_hori(x - 6, y + 5, "бс", 21);
			gotoxylimit_hori(x - 4, y + 6, "бс", 20);
			gotoxylimit_hori(x - 2, y + 7, "бс", 19);
			gotoxylimit_hori(x, y + 8, "бс", 17);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "бу", 14);
			gotoxylimit_hori(x + 4, y + 9, "бх", 14);
			color_change(tail_color);
			gotoxylimit(x + 40, y, "в╕");
			gotoxylimit(x + 42, y, "бс");
			gotoxylimit(x + 38, y + 1, "в╕");
			gotoxylimit(x + 40, y + 1, "бс");
			gotoxylimit(x + 42, y + 1, "бс");
			gotoxylimit(x + 36, y + 2, "в╕");
			gotoxylimit(x + 38, y + 2, "бс");
			gotoxylimit(x + 40, y + 2, "бс");
			gotoxylimit(x + 42, y + 2, "бх");
			gotoxylimit(x + 36, y + 3, "бс");
			gotoxylimit(x + 38, y + 3, "бс");
			gotoxylimit(x + 40, y + 3, "бх");
			gotoxylimit(x + 36, y + 4, "бс");
			gotoxylimit(x + 38, y + 4, "бс");
			gotoxylimit(x + 36, y + 5, "бс");
			gotoxylimit(x + 38, y + 5, "бс");
			gotoxylimit(x + 40, y + 5, "бу");
			gotoxylimit(x + 36, y + 6, "в╕");
			gotoxylimit(x + 38, y + 6, "бс");
			gotoxylimit(x + 40, y + 6, "бс");
			gotoxylimit(x + 42, y + 6, "бу");
			gotoxylimit(x + 38, y + 7, "в╕");
			gotoxylimit(x + 40, y + 7, "бс");
			gotoxylimit(x + 42, y + 7, "бс");
			gotoxylimit(x + 40, y + 8, "в╕");
			gotoxylimit(x + 42, y + 8, "бс");
		}
	}
	else if (size == 36) { //26 X 11
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "бс");
			gotoxylimit(x + 2, y, "в║");
			gotoxylimit(x, y + 1, "бс");
			gotoxylimit(x + 2, y + 1, "бс");
			gotoxylimit(x + 4, y + 1, "в║");
			gotoxylimit(x, y + 2, "бх");
			gotoxylimit(x + 2, y + 2, "бс");
			gotoxylimit(x + 4, y + 2, "бс");
			gotoxylimit(x + 6, y + 2, "в║");
			gotoxylimit(x + 2, y + 3, "бх");
			gotoxylimit(x + 4, y + 3, "бс");
			gotoxylimit(x + 6, y + 3, "бс");
			gotoxylimit(x + 4, y + 4, "бс");
			gotoxylimit(x + 6, y + 4, "бс");
			gotoxylimit(x + 2, y + 5, "бу");
			gotoxylimit(x + 4, y + 5, "бс");
			gotoxylimit(x + 6, y + 5, "бс");
			gotoxylimit(x, y + 7, "бс");
			gotoxylimit(x + 2, y + 7, "бс");
			gotoxylimit(x + 4, y + 7, "в║");
			gotoxylimit(x, y + 8, "бс");
			gotoxylimit(x + 2, y + 8, "в║");
			gotoxylimit(x, y + 6, "бу");
			gotoxylimit(x + 2, y + 6, "бс");
			gotoxylimit(x + 4, y + 6, "бс");
			gotoxylimit(x + 6, y + 6, "в║");
			color_change(body_color);
			gotoxylimit_hori(x + 8, y + 6, "бс", 21);
			gotoxylimit_hori(x + 10, y, "бс", 18);
			gotoxylimit_hori(x + 8, y + 1, "бс", 20);
			gotoxylimit_hori(x + 8, y + 2, "бс", 21);
			gotoxylimit_hori(x + 8, y + 3, "бс", 22);
			gotoxylimit_hori(x + 8, y + 4, "бс", 22);
			gotoxylimit_hori(x + 8, y + 5, "бс", 22);
			gotoxylimit_hori(x + 8, y + 7, "бс", 20);
			gotoxylimit_hori(x + 10, y + 8, "бс", 18);
			color_change(eye_color);
			gotoxylimit(x + 40, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 12, y - 1, "бу", 14);
			gotoxylimit_hori(x + 12, y + 9, "бх", 14);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "бс", 18);
			gotoxylimit_hori(x - 2, y + 1, "бс", 20);
			gotoxylimit_hori(x - 4, y + 2, "бс", 21);
			gotoxylimit_hori(x - 6, y + 3, "бс", 22);
			gotoxylimit_hori(x - 6, y + 4, "бс", 22);
			gotoxylimit_hori(x - 6, y + 5, "бс", 22);
			gotoxylimit_hori(x - 4, y + 6, "бс", 21);
			gotoxylimit_hori(x - 2, y + 7, "бс", 20);
			gotoxylimit_hori(x, y + 8, "бс", 18);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "бс");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "бу", 14);
			gotoxylimit_hori(x + 6, y + 9, "бх", 14);
			color_change(tail_color);
			gotoxylimit(x + 42, y, "в╕");
			gotoxylimit(x + 44, y, "бс");
			gotoxylimit(x + 40, y + 1, "в╕");
			gotoxylimit(x + 42, y + 1, "бс");
			gotoxylimit(x + 44, y + 1, "бс");
			gotoxylimit(x + 38, y + 2, "в╕");
			gotoxylimit(x + 40, y + 2, "бс");
			gotoxylimit(x + 42, y + 2, "бс");
			gotoxylimit(x + 44, y + 2, "бх");
			gotoxylimit(x + 38, y + 3, "бс");
			gotoxylimit(x + 40, y + 3, "бс");
			gotoxylimit(x + 42, y + 3, "бх");
			gotoxylimit(x + 38, y + 4, "бс");
			gotoxylimit(x + 40, y + 4, "бс");
			gotoxylimit(x + 38, y + 5, "бс");
			gotoxylimit(x + 40, y + 5, "бс");
			gotoxylimit(x + 42, y + 5, "бу");
			gotoxylimit(x + 38, y + 6, "в╕");
			gotoxylimit(x + 40, y + 6, "бс");
			gotoxylimit(x + 42, y + 6, "бс");
			gotoxylimit(x + 44, y + 6, "бу");
			gotoxylimit(x + 40, y + 7, "в╕");
			gotoxylimit(x + 42, y + 7, "бс");
			gotoxylimit(x + 44, y + 7, "бс");
			gotoxylimit(x + 42, y + 8, "в╕");
			gotoxylimit(x + 44, y + 8, "бс");
		}
	}
	color_change(7);
}


void monster_fish_image_type02(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color) {
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
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("бсв║");
		}
		else {
			printf("в╕бс");
		}
	}
	else if (size == 3) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("бсбсв║");
		}
		else {
			printf("в╕бсбс");
		}
	}
	else if (size == 4) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("бсбсбсв║");
		}
		else {
			printf("в╕бсбсбс");
		}
	}
	else if (size == 5) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("бсбсбсбсв║");
		}
		else {
			printf("в╕бсбсбсбс");
		}
	}
	else if (size == 6) {
		gotoxy(x + 2, y);
		color_change(fin_color);
		printf("бубубу");
		gotoxy(x, y + 1);
		color_change(body_color);
		if (to_right) {
			printf("бсбсбсбсв║");
		}
		else {
			printf("в╕бсбсбсбс");
		}
	}
	else if (size == 7) {
		if (to_right) {
			gotoxy(x + 4, y);
			color_change(fin_color);
			printf("бубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсв║");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("бубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсв║");
		}
	}
	else if (size == 8) {
		if (to_right) {
			gotoxy(x + 6, y);
			color_change(fin_color);
			printf("бубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсв║");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("бубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсв║");
		}
	}
	else if (size == 9) {
		if (to_right) {
			gotoxy(x + 6, y);
			color_change(fin_color);
			printf("бубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсв║");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("бубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсв║");
		}
	}
	else if (size == 10) {
		if (to_right) {
			gotoxy(x + 6, y);
			color_change(fin_color);
			printf("бубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсв║");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("бубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсв║");
		}
	}
	else if (size == 11) {
		if (to_right) {
			gotoxy(x + 6, y);
			color_change(fin_color);
			printf("бубубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсбсв║");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("бубубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсбсв║");
		}
	}
	else if (size == 12) {
		if (to_right) {
			gotoxy(x + 6, y);
			color_change(fin_color);
			printf("бубубубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсбсбсв║");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("бубубубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсбсбсв║");
		}
	}
	else if (size == 13) {
		if (to_right) {
			gotoxy(x + 8, y);
			color_change(fin_color);
			printf("бубубубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсбсбсбсв║");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("бубубубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсбсбсбсв║");
		}
	}
	else if (size == 14) {
		if (to_right) {
			gotoxy(x + 10, y);
			color_change(fin_color);
			printf("бубубубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсбсбсбсбсв║");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("бубубубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсбсбсбсбсв║");
		}
	}
	else if (size == 15) {
		if (to_right) {
			gotoxy(x + 12, y);
			color_change(fin_color);
			printf("бубубубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсбсбсбсбсбсв║");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("бубубубубубубу");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("в╕бсбсбсбсбсбсбсбсбсбсбсбсв║");
		}
	}
	color_change(7);
}