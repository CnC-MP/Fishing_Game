#pragma once

#include "interface_design_tool.h"
#include <cstdio>
#include <cmath>

void monster_fish_image_type01(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color);
void monster_fish_image_type02(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color);
void gotoxylimit_hori(int x, int y, const char s[3], int num);
void monstermonster_fish_image_type02_helper01(int size, bool to_right, int x, int y, int body_color, int fin_color);
void monstermonster_fish_image_type02_helper02(int size, bool to_right, int x, int y, int body_color, int fin_color);


void gotoxylimit_hori(int x, int y, const char s[3], int num) {
	for (int i = 0; i < num; ++i) {
		gotoxylimit(x + 2 * i, y, s);
	}
}

void monster_fish_image_type01(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color) {
	if (size == 1) {
		color_change(body_color);
		if (to_right) {
			gotoxylimit(x, y, "��");
		}
		else {
			gotoxylimit(x, y, "��");
		}
	}
	else if (size == 2) {
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, ">>");
			color_change(body_color);
			gotoxylimit(x + 2, y, "��");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 2, y, "<<");
		}
	}
	else if (size == 3) {
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, ">>");
			color_change(body_color);
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
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
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "��");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 4, y, "<<");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "��");
		}
	}
	else if (size == 5) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, ">>");
			color_change(body_color);
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 4, y, "<<");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
		}
	}
	else if (size == 6) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, ">>");
			color_change(body_color);
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 6, y, "��");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "��");
			gotoxylimit(x + 4, y - 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 4, y + 1, "��");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 6, y, "<<");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "��");
			gotoxylimit(x + 4, y - 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 4, y + 1, "��");
		}
	}
	else if (size == 7){
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, ">>");
			color_change(body_color);
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 6, y, "��");
			gotoxylimit(x + 8, y, "��");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "��");
			gotoxylimit(x + 4, y - 1, "��");
			gotoxylimit(x + 6, y - 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 4, y + 1, "��");
			gotoxylimit(x + 6, y + 1, "��");
		}
		else {
			color_change(body_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 6, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 8, y, "<<");
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "��");
			gotoxylimit(x + 4, y - 1, "��");
			gotoxylimit(x + 6, y - 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 4, y + 1, "��");
			gotoxylimit(x + 6, y + 1, "��");
		}
	}
	else if (size == 8) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 1, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 2, y, "��", 4);
			gotoxylimit_hori(x + 2, y + 1, "��", 4);
			color_change(fin_color);
			gotoxylimit_hori(x + 2, y - 1, "��", 3);
			gotoxylimit_hori(x + 2, y + 2, "��", 3);
		}
		else {
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 4);
			gotoxylimit_hori(x, y + 1, "��", 4);
			color_change(tail_color);
			gotoxylimit(x + 8, y, "��");
			gotoxylimit(x + 8, y + 1, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 2, y - 1, "��", 3);
			gotoxylimit_hori(x + 2, y + 2, "��", 3);
		}
	}
	else if (size == 9) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 1, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 2, y, "��", 5);
			gotoxylimit_hori(x + 2, y + 1, "��", 5);
			color_change(fin_color);
			gotoxylimit_hori(x + 2, y - 1, "��", 4);
			gotoxylimit_hori(x + 2, y + 2, "��", 4);
		}
		else {
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 5);
			gotoxylimit_hori(x, y + 1, "��", 5);
			color_change(tail_color);
			gotoxylimit(x + 10, y, "��");
			gotoxylimit(x + 10, y + 1, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 2, y - 1, "��", 4);
			gotoxylimit_hori(x + 2, y + 2, "��", 4);
		}
	}
	else if (size == 10) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 2, "��");
			gotoxylimit(x, y + 1, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y, "��", 4);
			gotoxylimit_hori(x + 2, y + 1, "��", 5);
			gotoxylimit_hori(x + 4, y + 2, "��", 4);
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 3);
			gotoxylimit_hori(x + 4, y + 3, "��", 3);
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 2, y + 2, "��");
		}
		else {
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 4);
			gotoxylimit_hori(x, y + 1, "��", 5);
			gotoxylimit_hori(x, y + 2, "��", 4);
			color_change(fin_color);
			gotoxylimit(x + 8, y + 2, "��");
			gotoxylimit_hori(x + 2, y - 1, "��", 3);
			gotoxylimit_hori(x + 2, y + 3, "��", 3);
			gotoxylimit(x + 8, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 10, y, "��");
			gotoxylimit(x + 10, y + 1, "��");
			gotoxylimit(x + 10, y + 2, "��");
		}
	}
	else if (size == 11) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x, y + 2, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y, "��", 4);
			gotoxylimit_hori(x + 2, y + 1, "��", 6);
			gotoxylimit_hori(x + 4, y + 2, "��", 4);
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 3);
			gotoxylimit_hori(x + 4, y + 3, "��", 3);
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 2, y + 2, "��");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 4);
			gotoxylimit_hori(x - 2, y + 1, "��", 6);
			gotoxylimit_hori(x, y + 2, "��", 4);
			color_change(fin_color);
			gotoxylimit(x + 8, y + 2, "��");
			gotoxylimit_hori(x + 2, y - 1, "��", 3);
			gotoxylimit_hori(x + 2, y + 3, "��", 3);
			gotoxylimit(x + 8, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 10, y, "��");
			gotoxylimit(x + 10, y + 1, "��");
			gotoxylimit(x + 10, y + 2, "��");
		}
	}
	else if (size == 12) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x, y + 2, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "��", 4);
			gotoxylimit_hori(x + 4, y + 1, "��", 6);
			gotoxylimit_hori(x + 6, y + 2, "��", 4);
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 3);
			gotoxylimit_hori(x + 6, y + 3, "��", 3);
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 4, y + 2, "��");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 4);
			gotoxylimit_hori(x - 2, y + 1, "��", 6);
			gotoxylimit_hori(x, y + 2, "��", 4);
			color_change(fin_color);
			gotoxylimit(x + 8, y + 2, "��");
			gotoxylimit_hori(x + 2, y - 1, "��", 3);
			gotoxylimit_hori(x + 2, y + 3, "��", 3);
			gotoxylimit(x + 8, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 12, y, "��");
			gotoxylimit(x + 10, y + 1, "��");
			gotoxylimit(x + 12, y + 1, "��");
			gotoxylimit(x + 12, y + 2, "��");
		}
	}
	else if (size == 13) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x, y + 2, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "��", 5);
			gotoxylimit_hori(x + 4, y + 1, "��", 7);
			gotoxylimit_hori(x + 6, y + 2, "��", 5);
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 4);
			gotoxylimit_hori(x + 6, y + 3, "��", 4);
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 4, y + 2, "��");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 5);
			gotoxylimit_hori(x - 2, y + 1, "��", 7);
			gotoxylimit_hori(x, y + 2, "��", 5);
			color_change(fin_color);
			gotoxylimit(x + 10, y + 2, "��");
			gotoxylimit_hori(x + 2, y - 1, "��", 4);
			gotoxylimit_hori(x + 2, y + 3, "��", 4);
			gotoxylimit(x + 10, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 14, y, "��");
			gotoxylimit(x + 12, y + 1, "��");
			gotoxylimit(x + 14, y + 1, "��");
			gotoxylimit(x + 14, y + 2, "��");
		}
	}
	else if (size == 14) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 3, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x, y + 2, "��");
			gotoxylimit(x + 2, y + 2, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "��", 5);
			gotoxylimit_hori(x + 4, y + 1, "��", 7);
			gotoxylimit_hori(x + 4, y + 2, "��", 7);
			gotoxylimit_hori(x + 6, y + 3, "��", 5);
			color_change(eye_color);
			gotoxylimit(x + 14, y + 1, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 4);
			gotoxylimit_hori(x + 6, y + 4, "��", 4);
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 4, y + 3, "��");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 5);
			gotoxylimit_hori(x - 2, y + 1, "��", 7);
			gotoxylimit_hori(x - 2, y + 2, "��", 7);
			gotoxylimit_hori(x, y + 3, "��", 5);
			color_change(eye_color);
			gotoxylimit(x, y + 1, "��");
			color_change(fin_color);
			gotoxylimit(x + 10, y + 3, "��");
			gotoxylimit_hori(x + 2, y - 1, "��", 4);
			gotoxylimit_hori(x + 2, y + 4, "��", 4);
			gotoxylimit(x + 10, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 14, y, "��");
			gotoxylimit(x + 12, y + 1, "��");
			gotoxylimit(x + 14, y + 1, "��");
			gotoxylimit(x + 12, y + 2, "��");
			gotoxylimit(x + 14, y + 2, "��");
			gotoxylimit(x + 14, y + 3, "��");
		}
	}
	else if (size == 15) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 3, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x, y + 2, "��");
			gotoxylimit(x + 2, y + 2, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "��", 6);
			gotoxylimit_hori(x + 4, y + 1, "��", 8);
			gotoxylimit_hori(x + 4, y + 2, "��", 8);
			gotoxylimit_hori(x + 6, y + 3, "��", 6);
			color_change(eye_color);
			gotoxylimit(x + 16, y + 1, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 5);
			gotoxylimit_hori(x + 6, y + 4, "��", 5);
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 4, y + 3, "��");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 6);
			gotoxylimit_hori(x - 2, y + 1, "��", 8);
			gotoxylimit_hori(x - 2, y + 2, "��", 8);
			gotoxylimit_hori(x, y + 3, "��", 6);
			color_change(eye_color);
			gotoxylimit(x, y + 1, "��");
			color_change(fin_color);
			gotoxylimit(x + 12, y + 3, "��");
			gotoxylimit_hori(x + 2, y - 1, "��", 5);
			gotoxylimit_hori(x + 2, y + 4, "��", 5);
			gotoxylimit(x + 12, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 16, y, "��");
			gotoxylimit(x + 14, y + 1, "��");
			gotoxylimit(x + 16, y + 1, "��");
			gotoxylimit(x + 14, y + 2, "��");
			gotoxylimit(x + 16, y + 2, "��");
			gotoxylimit(x + 16, y + 3, "��");
		}
	}
	else if (size == 16) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 4, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x, y + 3, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x + 2, y + 2, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "��", 6);
			gotoxylimit_hori(x + 4, y + 1, "��", 8);
			gotoxylimit_hori(x + 4, y + 2, "��", 8);
			gotoxylimit_hori(x + 4, y + 3, "��", 8);
			gotoxylimit_hori(x + 6, y + 4, "��", 6);
			color_change(eye_color);
			gotoxylimit(x + 16, y + 1, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 5);
			gotoxylimit_hori(x + 6, y + 5, "��", 5);
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 4, y + 4, "��");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 6);
			gotoxylimit_hori(x - 2, y + 1, "��", 8);
			gotoxylimit_hori(x - 2, y + 2, "��", 8);
			gotoxylimit_hori(x - 2, y + 3, "��", 8);
			gotoxylimit_hori(x, y + 4, "��", 6);
			color_change(eye_color);
			gotoxylimit(x, y + 1, "��");
			color_change(fin_color);
			gotoxylimit(x + 12, y + 4, "��");
			gotoxylimit_hori(x + 2, y - 1, "��", 5);
			gotoxylimit_hori(x + 2, y + 5, "��", 5);
			gotoxylimit(x + 12, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 16, y, "��");
			gotoxylimit(x + 14, y + 1, "��");
			gotoxylimit(x + 16, y + 1, "��");
			gotoxylimit(x + 14, y + 2, "��");
			gotoxylimit(x + 14, y + 3, "��");
			gotoxylimit(x + 16, y + 3, "��");
			gotoxylimit(x + 16, y + 4, "��");
		}
	}
	else if (size == 17) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 4, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x, y + 3, "��");
			gotoxylimit(x + 2, y + 3, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "��", 7);
			gotoxylimit_hori(x + 4, y + 1, "��", 9);
			gotoxylimit_hori(x + 4, y + 2, "��", 9);
			gotoxylimit_hori(x + 4, y + 3, "��", 9);
			gotoxylimit_hori(x + 6, y + 4, "��", 7);
			color_change(eye_color);
			gotoxylimit(x + 16, y + 1, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 6);
			gotoxylimit_hori(x + 6, y + 5, "��", 6);
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 4, y + 4, "��");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 7);
			gotoxylimit_hori(x - 2, y + 1, "��", 9);
			gotoxylimit_hori(x - 2, y + 2, "��", 9);
			gotoxylimit_hori(x - 2, y + 3, "��", 9);
			gotoxylimit_hori(x, y + 4, "��", 7);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 1, "��");
			color_change(fin_color);
			gotoxylimit(x + 14, y + 4, "��");
			gotoxylimit_hori(x + 2, y - 1, "��", 6);
			gotoxylimit_hori(x + 2, y + 5, "��", 6);
			gotoxylimit(x + 14, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 18, y, "��");
			gotoxylimit(x + 16, y + 1, "��");
			gotoxylimit(x + 18, y + 1, "��");
			gotoxylimit(x + 16, y + 2, "��");
			gotoxylimit(x + 16, y + 3, "��");
			gotoxylimit(x + 18, y + 3, "��");
			gotoxylimit(x + 18, y + 4, "��");
		}
	}
	else if (size == 18) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");	
			gotoxylimit(x, y + 4, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x, y + 3, "��");
			gotoxylimit(x + 2, y + 3, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "��", 8);
			gotoxylimit_hori(x + 4, y + 1, "��", 10);
			gotoxylimit_hori(x + 4, y + 2, "��", 10);
			gotoxylimit_hori(x + 4, y + 3, "��", 10);
			gotoxylimit_hori(x + 6, y + 4, "��", 8);
			color_change(eye_color);
			gotoxylimit(x + 18, y + 1, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 7);
			gotoxylimit_hori(x + 6, y + 5, "��", 7);
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 4, y + 4, "��");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 8);
			gotoxylimit_hori(x - 2, y + 1, "��", 10);
			gotoxylimit_hori(x - 2, y + 2, "��", 10);
			gotoxylimit_hori(x - 2, y + 3, "��", 10);
			gotoxylimit_hori(x, y + 4, "��", 8);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 1, "��");
			color_change(fin_color);
			gotoxylimit(x + 16, y + 4, "��");
			gotoxylimit_hori(x + 2, y - 1, "��", 7);
			gotoxylimit_hori(x + 2, y + 5, "��", 7);
			gotoxylimit(x + 16, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 20, y, "��");
			gotoxylimit(x + 18, y + 1, "��");
			gotoxylimit(x + 20, y + 1, "��");
			gotoxylimit(x + 18, y + 2, "��");
			gotoxylimit(x + 18, y + 3, "��");
			gotoxylimit(x + 20, y + 3, "��");
			gotoxylimit(x + 20, y + 4, "��");
		}
	}
	else if (size == 19) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x, y + 4, "��");
			gotoxylimit(x + 2, y + 4, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "��", 8);
			gotoxylimit_hori(x + 4, y + 1, "��", 10);
			gotoxylimit_hori(x + 4, y + 2, "��", 10);
			gotoxylimit_hori(x + 4, y + 3, "��", 10);
			gotoxylimit_hori(x + 4, y + 4, "��", 10);
			gotoxylimit_hori(x + 6, y + 5, "��", 8);
			color_change(eye_color);
			gotoxylimit(x + 18, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 7);
			gotoxylimit_hori(x + 6, y + 6, "��", 7);
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 4, y + 5, "��");
		}
		else {
			x += 2;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 8);
			gotoxylimit_hori(x - 2, y + 1, "��", 10);
			gotoxylimit_hori(x - 2, y + 2, "��", 10);
			gotoxylimit_hori(x - 2, y + 3, "��", 10);
			gotoxylimit_hori(x - 2, y + 4, "��", 10);
			gotoxylimit_hori(x, y + 5, "��", 8);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "��");
			color_change(fin_color);
			gotoxylimit(x + 16, y + 5, "��");
			gotoxylimit_hori(x + 2, y - 1, "��", 7);
			gotoxylimit_hori(x + 2, y + 6, "��", 7);
			gotoxylimit(x + 16, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 20, y, "��");
			gotoxylimit(x + 18, y + 1, "��");
			gotoxylimit(x + 20, y + 1, "��");
			gotoxylimit(x + 18, y + 2, "��");
			gotoxylimit(x + 18, y + 3, "��");
			gotoxylimit(x + 18, y + 4, "��");
			gotoxylimit(x + 20, y + 4, "��");
			gotoxylimit(x + 20, y + 5, "��");
		}
	}
	else if (size == 20) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x, y + 4, "��");
			gotoxylimit(x + 2, y + 4, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "��", 8);
			gotoxylimit_hori(x + 4, y + 1, "��", 10);
			gotoxylimit_hori(x + 4, y + 2, "��", 11);
			gotoxylimit_hori(x + 4, y + 3, "��", 11);
			gotoxylimit_hori(x + 4, y + 4, "��", 10);
			gotoxylimit_hori(x + 6, y + 5, "��", 8);
			color_change(eye_color);
			gotoxylimit(x + 18, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 7);
			gotoxylimit_hori(x + 6, y + 6, "��", 7);
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 4, y + 5, "��");
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 8);
			gotoxylimit_hori(x - 2, y + 1, "��", 10);
			gotoxylimit_hori(x - 4, y + 2, "��", 11);
			gotoxylimit_hori(x - 4, y + 3, "��", 11);
			gotoxylimit_hori(x - 2, y + 4, "��", 10);
			gotoxylimit_hori(x, y + 5, "��", 8);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "��");
			color_change(fin_color);
			gotoxylimit(x + 16, y + 5, "��");
			gotoxylimit_hori(x + 2, y - 1, "��", 7);
			gotoxylimit_hori(x + 2, y + 6, "��", 7);
			gotoxylimit(x + 16, y, "��");
			color_change(tail_color);
			gotoxylimit(x + 20, y, "��");
			gotoxylimit(x + 18, y + 1, "��");
			gotoxylimit(x + 20, y + 1, "��");
			gotoxylimit(x + 18, y + 2, "��");
			gotoxylimit(x + 18, y + 3, "��");
			gotoxylimit(x + 18, y + 4, "��");
			gotoxylimit(x + 20, y + 4, "��");
			gotoxylimit(x + 20, y + 5, "��");
		}
	}
	else if (size == 21) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x, y + 4, "��");
			gotoxylimit(x + 2, y + 4, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y, "��", 9);
			gotoxylimit_hori(x + 4, y + 1, "��", 11);
			gotoxylimit_hori(x + 4, y + 2, "��", 12);
			gotoxylimit_hori(x + 4, y + 3, "��", 12);
			gotoxylimit_hori(x + 4, y + 4, "��", 11);
			gotoxylimit_hori(x + 6, y + 5, "��", 9);
			color_change(eye_color);
			gotoxylimit(x + 20, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 8);
			gotoxylimit_hori(x + 6, y + 6, "��", 8);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 9);
			gotoxylimit_hori(x - 2, y + 1, "��", 11);
			gotoxylimit_hori(x - 4, y + 2, "��", 12);
			gotoxylimit_hori(x - 4, y + 3, "��", 12);
			gotoxylimit_hori(x - 2, y + 4, "��", 11);
			gotoxylimit_hori(x, y + 5, "��", 9);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 2, y - 1, "��", 8);
			gotoxylimit_hori(x + 2, y + 6, "��", 8);
			color_change(tail_color);
			gotoxylimit(x + 22, y, "��");
			gotoxylimit(x + 20, y + 1, "��");
			gotoxylimit(x + 22, y + 1, "��");
			gotoxylimit(x + 20, y + 2, "��");
			gotoxylimit(x + 20, y + 3, "��");
			gotoxylimit(x + 20, y + 4, "��");
			gotoxylimit(x + 22, y + 4, "��");
			gotoxylimit(x + 22, y + 5, "��");
		}
	}
	else if (size == 22) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x, y + 4, "��");
			gotoxylimit(x + 2, y + 4, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 1, "��", 12);
			gotoxylimit_hori(x + 4, y + 4, "��", 12);
			gotoxylimit_hori(x + 4, y + 2, "��", 13);
			gotoxylimit_hori(x + 4, y + 3, "��", 13);
			gotoxylimit_hori(x + 6, y, "��", 10);
			gotoxylimit_hori(x + 6, y + 5, "��", 10);
			color_change(eye_color);
			gotoxylimit(x + 22, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 8);
			gotoxylimit_hori(x + 6, y + 6, "��", 8);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 10);
			gotoxylimit_hori(x - 2, y + 1, "��", 12);
			gotoxylimit_hori(x - 4, y + 2, "��", 13);
			gotoxylimit_hori(x - 4, y + 3, "��", 13);
			gotoxylimit_hori(x - 2, y + 4, "��", 12);
			gotoxylimit_hori(x, y + 5, "��", 10);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 8);
			gotoxylimit_hori(x + 4, y + 6, "��", 8);
			color_change(tail_color);
			gotoxylimit(x + 24, y, "��");
			gotoxylimit(x + 22, y + 1, "��");
			gotoxylimit(x + 24, y + 1, "��");
			gotoxylimit(x + 22, y + 2, "��");
			gotoxylimit(x + 22, y + 3, "��");
			gotoxylimit(x + 22, y + 4, "��");
			gotoxylimit(x + 24, y + 4, "��");
			gotoxylimit(x + 24, y + 5, "��");
		}
	}
	else if (size == 23) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x, y + 4, "��");
			gotoxylimit(x + 2, y + 4, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 4, "��", 13);
			gotoxylimit_hori(x + 4, y + 1, "��", 13);
			gotoxylimit_hori(x + 4, y + 2, "��", 14);
			gotoxylimit_hori(x + 4, y + 3, "��", 14);
			gotoxylimit_hori(x + 6, y, "��", 11);
			gotoxylimit_hori(x + 6, y + 5, "��", 11);
			color_change(eye_color);
			gotoxylimit(x + 24, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "��", 8);
			gotoxylimit_hori(x + 8, y + 6, "��", 8);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 11);
			gotoxylimit_hori(x - 2, y + 1, "��", 13);
			gotoxylimit_hori(x - 4, y + 2, "��", 14);
			gotoxylimit_hori(x - 4, y + 3, "��", 14);
			gotoxylimit_hori(x - 2, y + 4, "��", 13);
			gotoxylimit_hori(x, y + 5, "��", 11);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 8);
			gotoxylimit_hori(x + 4, y + 6, "��", 8);
			color_change(tail_color);
			gotoxylimit(x + 26, y, "��");
			gotoxylimit(x + 24, y + 1, "��");
			gotoxylimit(x + 26, y + 1, "��");
			gotoxylimit(x + 24, y + 2, "��");
			gotoxylimit(x + 24, y + 3, "��");
			gotoxylimit(x + 24, y + 4, "��");
			gotoxylimit(x + 26, y + 4, "��");
			gotoxylimit(x + 26, y + 5, "��");
		}
	}
	else if (size == 24) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x, y + 4, "��");
			gotoxylimit(x + 2, y + 4, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 1, "��", 14);
			gotoxylimit_hori(x + 4, y + 4, "��", 14);
			gotoxylimit_hori(x + 4, y + 2, "��", 15);
			gotoxylimit_hori(x + 4, y + 3, "��", 15);
			gotoxylimit_hori(x + 6, y, "��", 12);
			gotoxylimit_hori(x + 6, y + 5, "��", 12);
			color_change(eye_color);
			gotoxylimit(x + 26, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "��", 9);
			gotoxylimit_hori(x + 8, y + 6, "��", 9);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 12);
			gotoxylimit_hori(x - 2, y + 1, "��", 14);
			gotoxylimit_hori(x - 4, y + 2, "��", 15);
			gotoxylimit_hori(x - 4, y + 3, "��", 15);
			gotoxylimit_hori(x - 2, y + 4, "��", 14);
			gotoxylimit_hori(x, y + 5, "��", 12);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 9);
			gotoxylimit_hori(x + 4, y + 6, "��", 9);
			color_change(tail_color);
			gotoxylimit(x + 28, y, "��");
			gotoxylimit(x + 26, y + 1, "��");
			gotoxylimit(x + 28, y + 1, "��");
			gotoxylimit(x + 26, y + 2, "��");
			gotoxylimit(x + 26, y + 3, "��");
			gotoxylimit(x + 26, y + 4, "��");
			gotoxylimit(x + 28, y + 4, "��");
			gotoxylimit(x + 28, y + 5, "��");
		}
	}
	else if (size == 25) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x + 2, y + 4, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x + 2, y + 5, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 5, "��", 14);
			gotoxylimit_hori(x + 4, y + 1, "��", 14);
			gotoxylimit_hori(x + 4, y + 2, "��", 15);
			gotoxylimit_hori(x + 4, y + 3, "��", 15);
			gotoxylimit_hori(x + 4, y + 4, "��", 15);
			gotoxylimit_hori(x + 6, y, "��", 12);
			gotoxylimit_hori(x + 6, y + 6, "��", 12);
			color_change(eye_color);
			gotoxylimit(x + 26, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "��", 9);
			gotoxylimit_hori(x + 8, y + 7, "��", 9);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 12);
			gotoxylimit_hori(x - 2, y + 1, "��", 14);
			gotoxylimit_hori(x - 4, y + 2, "��", 15);
			gotoxylimit_hori(x - 4, y + 3, "��", 15);
			gotoxylimit_hori(x - 4, y + 4, "��", 15);
			gotoxylimit_hori(x - 2, y + 5, "��", 14);
			gotoxylimit_hori(x, y + 6, "��", 12);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 9);
			gotoxylimit_hori(x + 4, y + 7, "��", 9);
			color_change(tail_color);
			gotoxylimit(x + 28, y, "��");
			gotoxylimit(x + 26, y + 1, "��");
			gotoxylimit(x + 28, y + 1, "��");
			gotoxylimit(x + 26, y + 2, "��");
			gotoxylimit(x + 26, y + 3, "��");
			gotoxylimit(x + 26, y + 4, "��");
			gotoxylimit(x + 26, y + 5, "��");
			gotoxylimit(x + 28, y + 5, "��");
			gotoxylimit(x + 28, y + 6, "��");
		}
	}
	else if (size == 26) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x + 2, y + 4, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x + 2, y + 5, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 5, "��", 15);
			gotoxylimit_hori(x + 4, y + 1, "��", 15);
			gotoxylimit_hori(x + 4, y + 2, "��", 16);
			gotoxylimit_hori(x + 4, y + 3, "��", 16);
			gotoxylimit_hori(x + 4, y + 4, "��", 16);
			gotoxylimit_hori(x + 6, y, "��", 13);
			gotoxylimit_hori(x + 6, y + 6, "��", 13);
			color_change(eye_color);
			gotoxylimit(x + 26, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "��", 10);
			gotoxylimit_hori(x + 8, y + 7, "��", 10);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 13);
			gotoxylimit_hori(x - 2, y + 1, "��", 15);
			gotoxylimit_hori(x - 4, y + 2, "��", 16);
			gotoxylimit_hori(x - 4, y + 3, "��", 16);
			gotoxylimit_hori(x - 4, y + 4, "��", 16);
			gotoxylimit_hori(x - 2, y + 5, "��", 15);
			gotoxylimit_hori(x, y + 6, "��", 13);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 10);
			gotoxylimit_hori(x + 4, y + 7, "��", 10);
			color_change(tail_color);
			gotoxylimit(x + 30, y, "��");
			gotoxylimit(x + 28, y + 1, "��");
			gotoxylimit(x + 30, y + 1, "��");
			gotoxylimit(x + 28, y + 2, "��");
			gotoxylimit(x + 28, y + 3, "��");
			gotoxylimit(x + 28, y + 4, "��");
			gotoxylimit(x + 28, y + 5, "��");
			gotoxylimit(x + 30, y + 5, "��");
			gotoxylimit(x + 30, y + 6, "��");
		}
	}
	else if (size == 27) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x + 2, y + 4, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x + 2, y + 5, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 5, "��", 16);
			gotoxylimit_hori(x + 4, y + 1, "��", 16);
			gotoxylimit_hori(x + 4, y + 2, "��", 17);
			gotoxylimit_hori(x + 4, y + 3, "��", 17);
			gotoxylimit_hori(x + 4, y + 4, "��", 17);
			gotoxylimit_hori(x + 6, y, "��", 14);
			gotoxylimit_hori(x + 6, y + 6, "��", 14);
			color_change(eye_color);
			gotoxylimit(x + 28, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "��", 11);
			gotoxylimit_hori(x + 8, y + 7, "��", 11);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 14);
			gotoxylimit_hori(x - 2, y + 1, "��", 16);
			gotoxylimit_hori(x - 4, y + 2, "��", 17);
			gotoxylimit_hori(x - 4, y + 3, "��", 17);
			gotoxylimit_hori(x - 4, y + 4, "��", 17);
			gotoxylimit_hori(x - 2, y + 5, "��", 16);
			gotoxylimit_hori(x, y + 6, "��", 14);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 11);
			gotoxylimit_hori(x + 4, y + 7, "��", 11);
			color_change(tail_color);
			gotoxylimit(x + 32, y, "��");
			gotoxylimit(x + 30, y + 1, "��");
			gotoxylimit(x + 32, y + 1, "��");
			gotoxylimit(x + 30, y + 2, "��");
			gotoxylimit(x + 30, y + 3, "��");
			gotoxylimit(x + 30, y + 4, "��");
			gotoxylimit(x + 30, y + 5, "��");
			gotoxylimit(x + 32, y + 5, "��");
			gotoxylimit(x + 32, y + 6, "��");
		}
	}
	else if (size == 28) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x + 2, y + 4, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x + 2, y + 5, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 4, y + 5, "��", 17);
			gotoxylimit_hori(x + 4, y + 1, "��", 17);
			gotoxylimit_hori(x + 4, y + 2, "��", 18);
			gotoxylimit_hori(x + 4, y + 3, "��", 18);
			gotoxylimit_hori(x + 4, y + 4, "��", 18);
			gotoxylimit_hori(x + 6, y, "��", 15);
			gotoxylimit_hori(x + 6, y + 6, "��", 15);
			color_change(eye_color);
			gotoxylimit(x + 30, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 8, y - 1, "��", 12);
			gotoxylimit_hori(x + 8, y + 7, "��", 12);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 15);
			gotoxylimit_hori(x - 2, y + 1, "��", 17);
			gotoxylimit_hori(x - 4, y + 2, "��", 18);
			gotoxylimit_hori(x - 4, y + 3, "��", 18);
			gotoxylimit_hori(x - 4, y + 4, "��", 18);
			gotoxylimit_hori(x - 2, y + 5, "��", 17);
			gotoxylimit_hori(x, y + 6, "��", 15);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 12);
			gotoxylimit_hori(x + 4, y + 7, "��", 12);
			color_change(tail_color);
			gotoxylimit(x + 34, y, "��");
			gotoxylimit(x + 32, y + 1, "��");
			gotoxylimit(x + 34, y + 1, "��");
			gotoxylimit(x + 32, y + 2, "��");
			gotoxylimit(x + 32, y + 3, "��");
			gotoxylimit(x + 32, y + 4, "��");
			gotoxylimit(x + 32, y + 5, "��");
			gotoxylimit(x + 34, y + 5, "��");
			gotoxylimit(x + 34, y + 6, "��");
		}
	}
	else if (size == 29) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 4, y + 2, "��");
			gotoxylimit(x + 4, y + 3, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x + 2, y + 5, "��");
			gotoxylimit(x + 2, y + 4, "��");
			gotoxylimit(x + 4, y + 4, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 4, "��", 18);
			gotoxylimit_hori(x + 6, y + 5, "��", 17);
			gotoxylimit_hori(x + 6, y + 1, "��", 17);
			gotoxylimit_hori(x + 6, y + 2, "��", 18);
			gotoxylimit_hori(x + 6, y + 3, "��", 18);
			gotoxylimit_hori(x + 8, y, "��", 15);
			gotoxylimit_hori(x + 8, y + 6, "��", 15);
			color_change(eye_color);
			gotoxylimit(x + 32, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "��", 12);
			gotoxylimit_hori(x + 10, y + 7, "��", 12);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 15);
			gotoxylimit_hori(x - 2, y + 1, "��", 17);
			gotoxylimit_hori(x - 4, y + 2, "��", 18);
			gotoxylimit_hori(x - 4, y + 3, "��", 18);
			gotoxylimit_hori(x - 4, y + 4, "��", 18);
			gotoxylimit_hori(x - 2, y + 5, "��", 17);
			gotoxylimit_hori(x, y + 6, "��", 15);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 12);
			gotoxylimit_hori(x + 4, y + 7, "��", 12);
			color_change(tail_color);
			gotoxylimit(x + 36, y, "��");
			gotoxylimit(x + 34, y + 1, "��");
			gotoxylimit(x + 36, y + 1, "��");
			gotoxylimit(x + 32, y + 2, "��");
			gotoxylimit(x + 34, y + 2, "��");
			gotoxylimit(x + 32, y + 3, "��");
			gotoxylimit(x + 32, y + 4, "��");
			gotoxylimit(x + 34, y + 4, "��");
			gotoxylimit(x + 34, y + 5, "��");
			gotoxylimit(x + 36, y + 5, "��");
			gotoxylimit(x + 36, y + 6, "��");
		}
	}
	else if (size == 30) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 4, y + 2, "��");
			gotoxylimit(x + 4, y + 3, "��");
			gotoxylimit(x + 4, y + 4, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x + 2, y + 6, "��");
			gotoxylimit(x, y + 7, "��");
			gotoxylimit(x + 2, y + 5, "��");
			gotoxylimit(x + 4, y + 5, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 5, "��", 18);
			gotoxylimit_hori(x + 8, y, "��", 15);
			gotoxylimit_hori(x + 6, y + 1, "��", 17);
			gotoxylimit_hori(x + 6, y + 2, "��", 18);
			gotoxylimit_hori(x + 6, y + 3, "��", 18);
			gotoxylimit_hori(x + 6, y + 4, "��", 18);
			gotoxylimit_hori(x + 6, y + 6, "��", 17);
			gotoxylimit_hori(x + 8, y + 7, "��", 15);
			color_change(eye_color);
			gotoxylimit(x + 32, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "��", 12);
			gotoxylimit_hori(x + 10, y + 8, "��", 12);
		}
		else {
			x += 4;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 15);
			gotoxylimit_hori(x - 2, y + 1, "��", 17);
			gotoxylimit_hori(x - 4, y + 2, "��", 18);
			gotoxylimit_hori(x - 4, y + 3, "��", 18);
			gotoxylimit_hori(x - 4, y + 4, "��", 18);
			gotoxylimit_hori(x - 4, y + 5, "��", 18);
			gotoxylimit_hori(x - 2, y + 6, "��", 17);
			gotoxylimit_hori(x, y + 7, "��", 15);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 12);
			gotoxylimit_hori(x + 4, y + 8, "��", 12);
			color_change(tail_color);
			gotoxylimit(x + 36, y, "��");
			gotoxylimit(x + 34, y + 1, "��");
			gotoxylimit(x + 36, y + 1, "��");
			gotoxylimit(x + 32, y + 2, "��");
			gotoxylimit(x + 34, y + 2, "��");
			gotoxylimit(x + 32, y + 3, "��");
			gotoxylimit(x + 32, y + 4, "��");
			gotoxylimit(x + 32, y + 5, "��");
			gotoxylimit(x + 34, y + 5, "��");
			gotoxylimit(x + 34, y + 6, "��");
			gotoxylimit(x + 36, y + 6, "��");
			gotoxylimit(x + 36, y + 7, "��");
		}
	}
	else if (size == 31) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x, y + 2, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 4, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x + 4, y + 3, "��");
			gotoxylimit(x + 2, y + 4, "��");
			gotoxylimit(x + 4, y + 4, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x + 2, y + 6, "��");
			gotoxylimit(x, y + 7, "��");
			gotoxylimit(x, y + 5, "��");
			gotoxylimit(x + 2, y + 5, "��");
			gotoxylimit(x + 4, y + 5, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 5, "��", 18);
			gotoxylimit_hori(x + 8, y, "��", 15);
			gotoxylimit_hori(x + 6, y + 1, "��", 17);
			gotoxylimit_hori(x + 6, y + 2, "��", 18);
			gotoxylimit_hori(x + 6, y + 3, "��", 19);
			gotoxylimit_hori(x + 6, y + 4, "��", 19);
			gotoxylimit_hori(x + 6, y + 6, "��", 17);
			gotoxylimit_hori(x + 8, y + 7, "��", 15);
			color_change(eye_color);
			gotoxylimit(x + 34, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "��", 12);
			gotoxylimit_hori(x + 10, y + 8, "��", 12);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 15);
			gotoxylimit_hori(x - 2, y + 1, "��", 17);
			gotoxylimit_hori(x - 4, y + 2, "��", 18);
			gotoxylimit_hori(x - 6, y + 3, "��", 19);
			gotoxylimit_hori(x - 6, y + 4, "��", 19);
			gotoxylimit_hori(x - 4, y + 5, "��", 18);
			gotoxylimit_hori(x - 2, y + 6, "��", 17);
			gotoxylimit_hori(x, y + 7, "��", 15);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 12);
			gotoxylimit_hori(x + 4, y + 8, "��", 12);
			color_change(tail_color);
			gotoxylimit(x + 36, y, "��");
			gotoxylimit(x + 34, y + 1, "��");
			gotoxylimit(x + 36, y + 1, "��");
			gotoxylimit(x + 32, y + 2, "��");
			gotoxylimit(x + 34, y + 2, "��");
			gotoxylimit(x + 36, y + 2, "��");
			gotoxylimit(x + 32, y + 3, "��");
			gotoxylimit(x + 34, y + 3, "��");
			gotoxylimit(x + 32, y + 4, "��");
			gotoxylimit(x + 34, y + 4, "��");
			gotoxylimit(x + 32, y + 5, "��");
			gotoxylimit(x + 34, y + 5, "��");
			gotoxylimit(x + 36, y + 5, "��");
			gotoxylimit(x + 34, y + 6, "��");
			gotoxylimit(x + 36, y + 6, "��");
			gotoxylimit(x + 36, y + 7, "��");
		}
	}
	else if (size == 32) {  // 22 X 11
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x, y + 2, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 4, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x + 4, y + 3, "��");
			gotoxylimit(x + 4, y + 4, "��");
			gotoxylimit(x + 2, y + 5, "��");
			gotoxylimit(x + 4, y + 5, "��");
			gotoxylimit(x, y + 7, "��");
			gotoxylimit(x + 2, y + 7, "��");
			gotoxylimit(x, y + 8, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x + 2, y + 6, "��");
			gotoxylimit(x + 4, y + 6, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 6, "��", 18);
			gotoxylimit_hori(x + 8, y, "��", 15);
			gotoxylimit_hori(x + 6, y + 1, "��", 17);
			gotoxylimit_hori(x + 6, y + 2, "��", 18);
			gotoxylimit_hori(x + 6, y + 3, "��", 19);
			gotoxylimit_hori(x + 6, y + 4, "��", 19);
			gotoxylimit_hori(x + 6, y + 5, "��", 19);
			gotoxylimit_hori(x + 6, y + 7, "��", 17);
			gotoxylimit_hori(x + 8, y + 8, "��", 15);
			color_change(eye_color);
			gotoxylimit(x + 34, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "��", 12);
			gotoxylimit_hori(x + 10, y + 9, "��", 12);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 15);
			gotoxylimit_hori(x - 2, y + 1, "��", 17);
			gotoxylimit_hori(x - 4, y + 2, "��", 18);
			gotoxylimit_hori(x - 6, y + 3, "��", 19);
			gotoxylimit_hori(x - 6, y + 4, "��", 19);
			gotoxylimit_hori(x - 6, y + 5, "��", 19);
			gotoxylimit_hori(x - 4, y + 6, "��", 18);
			gotoxylimit_hori(x - 2, y + 7, "��", 17);
			gotoxylimit_hori(x, y + 8, "��", 15);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 12);
			gotoxylimit_hori(x + 4, y + 9, "��", 12);
			color_change(tail_color);
			gotoxylimit(x + 36, y, "��");
			gotoxylimit(x + 34, y + 1, "��");
			gotoxylimit(x + 36, y + 1, "��");
			gotoxylimit(x + 32, y + 2, "��");
			gotoxylimit(x + 34, y + 2, "��");
			gotoxylimit(x + 36, y + 2, "��");
			gotoxylimit(x + 32, y + 3, "��");
			gotoxylimit(x + 34, y + 3, "��");
			gotoxylimit(x + 32, y + 4, "��");
			gotoxylimit(x + 32, y + 5, "��");
			gotoxylimit(x + 34, y + 5, "��");
			gotoxylimit(x + 32, y + 6, "��");
			gotoxylimit(x + 34, y + 6, "��");
			gotoxylimit(x + 36, y + 6, "��");
			gotoxylimit(x + 34, y + 7, "��");
			gotoxylimit(x + 36, y + 7, "��");
			gotoxylimit(x + 36, y + 8, "��");
		}
	}
	else if (size == 33) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x, y + 2, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 4, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x + 4, y + 3, "��");
			gotoxylimit(x + 4, y + 4, "��");
			gotoxylimit(x + 2, y + 5, "��");
			gotoxylimit(x + 4, y + 5, "��");
			gotoxylimit(x, y + 7, "��");
			gotoxylimit(x + 2, y + 7, "��");
			gotoxylimit(x, y + 8, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x + 2, y + 6, "��");
			gotoxylimit(x + 4, y + 6, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 6, "��", 19);
			gotoxylimit_hori(x + 8, y, "��", 16);
			gotoxylimit_hori(x + 6, y + 1, "��", 18);
			gotoxylimit_hori(x + 6, y + 2, "��", 19);
			gotoxylimit_hori(x + 6, y + 3, "��", 20);
			gotoxylimit_hori(x + 6, y + 4, "��", 20);
			gotoxylimit_hori(x + 6, y + 5, "��", 20);
			gotoxylimit_hori(x + 6, y + 7, "��", 18);
			gotoxylimit_hori(x + 8, y + 8, "��", 16);
			color_change(eye_color);
			gotoxylimit(x + 36, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "��", 13);
			gotoxylimit_hori(x + 10, y + 9, "��", 13);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 16);
			gotoxylimit_hori(x - 2, y + 1, "��", 18);
			gotoxylimit_hori(x - 4, y + 2, "��", 19);
			gotoxylimit_hori(x - 6, y + 3, "��", 20);
			gotoxylimit_hori(x - 6, y + 4, "��", 20);
			gotoxylimit_hori(x - 6, y + 5, "��", 20);
			gotoxylimit_hori(x - 4, y + 6, "��", 19);
			gotoxylimit_hori(x - 2, y + 7, "��", 18);
			gotoxylimit_hori(x, y + 8, "��", 16);
			color_change(eye_color);
			gotoxylimit(x + 2, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 13);
			gotoxylimit_hori(x + 4, y + 9, "��", 13);
			color_change(tail_color);
			gotoxylimit(x + 38, y, "��");
			gotoxylimit(x + 36, y + 1, "��");
			gotoxylimit(x + 38, y + 1, "��");
			gotoxylimit(x + 34, y + 2, "��");
			gotoxylimit(x + 36, y + 2, "��");
			gotoxylimit(x + 38, y + 2, "��");
			gotoxylimit(x + 34, y + 3, "��");
			gotoxylimit(x + 36, y + 3, "��");
			gotoxylimit(x + 34, y + 4, "��");
			gotoxylimit(x + 34, y + 5, "��");
			gotoxylimit(x + 36, y + 5, "��");
			gotoxylimit(x + 34, y + 6, "��");
			gotoxylimit(x + 36, y + 6, "��");
			gotoxylimit(x + 38, y + 6, "��");
			gotoxylimit(x + 36, y + 7, "��");
			gotoxylimit(x + 38, y + 7, "��");
			gotoxylimit(x + 38, y + 8, "��");
		}
	}
	else if (size == 34) { //24
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x, y + 2, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 4, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x + 4, y + 3, "��");
			gotoxylimit(x + 4, y + 4, "��");
			gotoxylimit(x + 2, y + 5, "��");
			gotoxylimit(x + 4, y + 5, "��");
			gotoxylimit(x, y + 7, "��");
			gotoxylimit(x + 2, y + 7, "��");
			gotoxylimit(x, y + 8, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x + 2, y + 6, "��");
			gotoxylimit(x + 4, y + 6, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 6, y + 6, "��", 20);
			gotoxylimit_hori(x + 8, y, "��", 17);
			gotoxylimit_hori(x + 6, y + 1, "��", 19);
			gotoxylimit_hori(x + 6, y + 2, "��", 20);
			gotoxylimit_hori(x + 6, y + 3, "��", 21);
			gotoxylimit_hori(x + 6, y + 4, "��", 21);
			gotoxylimit_hori(x + 6, y + 5, "��", 21);
			gotoxylimit_hori(x + 6, y + 7, "��", 19);
			gotoxylimit_hori(x + 8, y + 8, "��", 17);
			color_change(eye_color);
			gotoxylimit(x + 36, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 10, y - 1, "��", 14);
			gotoxylimit_hori(x + 10, y + 9, "��", 14);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 17);
			gotoxylimit_hori(x - 2, y + 1, "��", 19);
			gotoxylimit_hori(x - 4, y + 2, "��", 20);
			gotoxylimit_hori(x - 6, y + 3, "��", 21);
			gotoxylimit_hori(x - 6, y + 4, "��", 21);
			gotoxylimit_hori(x - 6, y + 5, "��", 21);
			gotoxylimit_hori(x - 4, y + 6, "��", 20);
			gotoxylimit_hori(x - 2, y + 7, "��", 19);
			gotoxylimit_hori(x, y + 8, "��", 17);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 14);
			gotoxylimit_hori(x + 4, y + 9, "��", 14);
			color_change(tail_color);
			gotoxylimit(x + 40, y, "��");
			gotoxylimit(x + 38, y + 1, "��");
			gotoxylimit(x + 40, y + 1, "��");
			gotoxylimit(x + 36, y + 2, "��");
			gotoxylimit(x + 38, y + 2, "��");
			gotoxylimit(x + 40, y + 2, "��");
			gotoxylimit(x + 36, y + 3, "��");
			gotoxylimit(x + 38, y + 3, "��");
			gotoxylimit(x + 36, y + 4, "��");
			gotoxylimit(x + 36, y + 5, "��");
			gotoxylimit(x + 38, y + 5, "��");
			gotoxylimit(x + 36, y + 6, "��");
			gotoxylimit(x + 38, y + 6, "��");
			gotoxylimit(x + 40, y + 6, "��");
			gotoxylimit(x + 38, y + 7, "��");
			gotoxylimit(x + 40, y + 7, "��");
			gotoxylimit(x + 40, y + 8, "��");
		}
	}
	else if (size == 35) { //25
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 4, y + 1, "��");
			gotoxylimit(x, y + 2, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 4, y + 2, "��");
			gotoxylimit(x + 6, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x + 4, y + 3, "��");
			gotoxylimit(x + 6, y + 3, "��");
			gotoxylimit(x + 4, y + 4, "��");
			gotoxylimit(x + 6, y + 4, "��");
			gotoxylimit(x + 2, y + 5, "��");
			gotoxylimit(x + 4, y + 5, "��");
			gotoxylimit(x + 6, y + 5, "��");
			gotoxylimit(x, y + 7, "��");
			gotoxylimit(x + 2, y + 7, "��");
			gotoxylimit(x + 4, y + 7, "��");
			gotoxylimit(x, y + 8, "��");
			gotoxylimit(x + 2, y + 8, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x + 2, y + 6, "��");
			gotoxylimit(x + 4, y + 6, "��");
			gotoxylimit(x + 6, y + 6, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 8, y + 6, "��", 20);
			gotoxylimit_hori(x + 10, y, "��", 17);
			gotoxylimit_hori(x + 8, y + 1, "��", 19);
			gotoxylimit_hori(x + 8, y + 2, "��", 20);
			gotoxylimit_hori(x + 8, y + 3, "��", 21);
			gotoxylimit_hori(x + 8, y + 4, "��", 21);
			gotoxylimit_hori(x + 8, y + 5, "��", 21);
			gotoxylimit_hori(x + 8, y + 7, "��", 19);
			gotoxylimit_hori(x + 10, y + 8, "��", 17);
			color_change(eye_color);
			gotoxylimit(x + 38, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 12, y - 1, "��", 14);
			gotoxylimit_hori(x + 12, y + 9, "��", 14);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 17);
			gotoxylimit_hori(x - 2, y + 1, "��", 19);
			gotoxylimit_hori(x - 4, y + 2, "��", 20);
			gotoxylimit_hori(x - 6, y + 3, "��", 21);
			gotoxylimit_hori(x - 6, y + 4, "��", 21);
			gotoxylimit_hori(x - 6, y + 5, "��", 21);
			gotoxylimit_hori(x - 4, y + 6, "��", 20);
			gotoxylimit_hori(x - 2, y + 7, "��", 19);
			gotoxylimit_hori(x, y + 8, "��", 17);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 4, y - 1, "��", 14);
			gotoxylimit_hori(x + 4, y + 9, "��", 14);
			color_change(tail_color);
			gotoxylimit(x + 40, y, "��");
			gotoxylimit(x + 42, y, "��");
			gotoxylimit(x + 38, y + 1, "��");
			gotoxylimit(x + 40, y + 1, "��");
			gotoxylimit(x + 42, y + 1, "��");
			gotoxylimit(x + 36, y + 2, "��");
			gotoxylimit(x + 38, y + 2, "��");
			gotoxylimit(x + 40, y + 2, "��");
			gotoxylimit(x + 42, y + 2, "��");
			gotoxylimit(x + 36, y + 3, "��");
			gotoxylimit(x + 38, y + 3, "��");
			gotoxylimit(x + 40, y + 3, "��");
			gotoxylimit(x + 36, y + 4, "��");
			gotoxylimit(x + 38, y + 4, "��");
			gotoxylimit(x + 36, y + 5, "��");
			gotoxylimit(x + 38, y + 5, "��");
			gotoxylimit(x + 40, y + 5, "��");
			gotoxylimit(x + 36, y + 6, "��");
			gotoxylimit(x + 38, y + 6, "��");
			gotoxylimit(x + 40, y + 6, "��");
			gotoxylimit(x + 42, y + 6, "��");
			gotoxylimit(x + 38, y + 7, "��");
			gotoxylimit(x + 40, y + 7, "��");
			gotoxylimit(x + 42, y + 7, "��");
			gotoxylimit(x + 40, y + 8, "��");
			gotoxylimit(x + 42, y + 8, "��");
		}
	}
	else if (size == 36) { //26 X 11
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 4, y + 1, "��");
			gotoxylimit(x, y + 2, "��");
			gotoxylimit(x + 2, y + 2, "��");
			gotoxylimit(x + 4, y + 2, "��");
			gotoxylimit(x + 6, y + 2, "��");
			gotoxylimit(x + 2, y + 3, "��");
			gotoxylimit(x + 4, y + 3, "��");
			gotoxylimit(x + 6, y + 3, "��");
			gotoxylimit(x + 4, y + 4, "��");
			gotoxylimit(x + 6, y + 4, "��");
			gotoxylimit(x + 2, y + 5, "��");
			gotoxylimit(x + 4, y + 5, "��");
			gotoxylimit(x + 6, y + 5, "��");
			gotoxylimit(x, y + 7, "��");
			gotoxylimit(x + 2, y + 7, "��");
			gotoxylimit(x + 4, y + 7, "��");
			gotoxylimit(x, y + 8, "��");
			gotoxylimit(x + 2, y + 8, "��");
			gotoxylimit(x, y + 6, "��");
			gotoxylimit(x + 2, y + 6, "��");
			gotoxylimit(x + 4, y + 6, "��");
			gotoxylimit(x + 6, y + 6, "��");
			color_change(body_color);
			gotoxylimit_hori(x + 8, y + 6, "��", 21);
			gotoxylimit_hori(x + 10, y, "��", 18);
			gotoxylimit_hori(x + 8, y + 1, "��", 20);
			gotoxylimit_hori(x + 8, y + 2, "��", 21);
			gotoxylimit_hori(x + 8, y + 3, "��", 22);
			gotoxylimit_hori(x + 8, y + 4, "��", 22);
			gotoxylimit_hori(x + 8, y + 5, "��", 22);
			gotoxylimit_hori(x + 8, y + 7, "��", 20);
			gotoxylimit_hori(x + 10, y + 8, "��", 18);
			color_change(eye_color);
			gotoxylimit(x + 40, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 12, y - 1, "��", 14);
			gotoxylimit_hori(x + 12, y + 9, "��", 14);
		}
		else {
			x += 6;
			color_change(body_color);
			gotoxylimit_hori(x, y, "��", 18);
			gotoxylimit_hori(x - 2, y + 1, "��", 20);
			gotoxylimit_hori(x - 4, y + 2, "��", 21);
			gotoxylimit_hori(x - 6, y + 3, "��", 22);
			gotoxylimit_hori(x - 6, y + 4, "��", 22);
			gotoxylimit_hori(x - 6, y + 5, "��", 22);
			gotoxylimit_hori(x - 4, y + 6, "��", 21);
			gotoxylimit_hori(x - 2, y + 7, "��", 20);
			gotoxylimit_hori(x, y + 8, "��", 18);
			color_change(eye_color);
			gotoxylimit(x + 4, y + 2, "��");
			color_change(fin_color);
			gotoxylimit_hori(x + 6, y - 1, "��", 14);
			gotoxylimit_hori(x + 6, y + 9, "��", 14);
			color_change(tail_color);
			gotoxylimit(x + 42, y, "��");
			gotoxylimit(x + 44, y, "��");
			gotoxylimit(x + 40, y + 1, "��");
			gotoxylimit(x + 42, y + 1, "��");
			gotoxylimit(x + 44, y + 1, "��");
			gotoxylimit(x + 38, y + 2, "��");
			gotoxylimit(x + 40, y + 2, "��");
			gotoxylimit(x + 42, y + 2, "��");
			gotoxylimit(x + 44, y + 2, "��");
			gotoxylimit(x + 38, y + 3, "��");
			gotoxylimit(x + 40, y + 3, "��");
			gotoxylimit(x + 42, y + 3, "��");
			gotoxylimit(x + 38, y + 4, "��");
			gotoxylimit(x + 40, y + 4, "��");
			gotoxylimit(x + 38, y + 5, "��");
			gotoxylimit(x + 40, y + 5, "��");
			gotoxylimit(x + 42, y + 5, "��");
			gotoxylimit(x + 38, y + 6, "��");
			gotoxylimit(x + 40, y + 6, "��");
			gotoxylimit(x + 42, y + 6, "��");
			gotoxylimit(x + 44, y + 6, "��");
			gotoxylimit(x + 40, y + 7, "��");
			gotoxylimit(x + 42, y + 7, "��");
			gotoxylimit(x + 44, y + 7, "��");
			gotoxylimit(x + 42, y + 8, "��");
			gotoxylimit(x + 44, y + 8, "��");
		}
	}
	color_change(7);
}

void monstermonster_fish_image_type02_helper01(int size, bool to_right, int x, int y, int body_color, int fin_color) {
	double front_per = 0.08;
	double end_per = 0.8;
	int length = size - 3;
	int start = (int)floor(front_per * length);
	int end = (int)ceil(length * (end_per - front_per));
	if (to_right) {
		color_change(fin_color);
		gotoxylimit_hori(x + 2 + 2 * length - 2 * end, y, "��", end - start);
		color_change(body_color);
		gotoxylimit_hori(x + 2, y + 1, "��", length);
		gotoxylimit(x, y + 1, "��");
		gotoxylimit(x + 2 * length + 2, y + 1, "��");
	}
	else {
		color_change(fin_color);
		gotoxylimit_hori(x + 2 + 2 * start, y, "��", end - start);
		color_change(body_color);
		gotoxylimit_hori(x + 2, y + 1, "��", length);
		gotoxylimit(x, y + 1, "��");
		gotoxylimit(x + 2 * length + 2, y + 1, "��");
	}

}

void monstermonster_fish_image_type02_helper02(int size, bool to_right, int x, int y, int body_color, int fin_color) {
	double front_per = 0.08;
	double end_per = 0.8;
	double upper = 0.53;
	double lower = 0.72;
	int length = size - 4;
	int start = (int)floor(front_per * length);
	int end = (int)ceil(length * (end_per - front_per));
	int upper_length = (int)round(upper * length);
	int lower_length = (int)round(lower * length);
	if (to_right) {
		
		color_change(fin_color);
		gotoxylimit_hori(x + 2 * (length - upper_length) + 2, y, "��", upper_length - start);
		gotoxylimit_hori(x + 2 + 2 * length - 2 * end, y + 1, "��", end - upper_length);
		color_change(body_color);
		gotoxylimit_hori(x + 2 * (length - upper_length) + 2, y + 1, "��", upper_length);
		gotoxylimit_hori(x + 2, y + 2, "��", lower_length);
		gotoxylimit(x + 2 * length + 2, y + 1, "��");
		gotoxylimit(x, y + 2, "��");

	}
	else {
		color_change(fin_color);
		gotoxylimit_hori(x + 2 + 2 * start, y, "��", upper_length - start);
		gotoxylimit_hori(x + 2 + 2 * upper_length, y + 1, "��", end - upper_length);
		color_change(body_color);
		gotoxylimit_hori(x + 2, y + 1, "��", upper_length);
		gotoxylimit_hori(x + 2 * (length - lower_length) + 2, y + 2, "��", lower_length);
		gotoxylimit(x, y + 1, "��");
		gotoxylimit(x + 2 * length + 2, y + 2, "��");
	}
}

void monster_fish_image_type02(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color) {
	if (size == 1) {
		color_change(body_color);
		if (to_right) {
			gotoxylimit(x, y, "��");
		}
		else {
			gotoxylimit(x, y, "��");
		}
	}
	else if (size == 2) {
		color_change(body_color);
		if (to_right) {
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
		}
		else {
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
		}
	}
	else if (size == 3) {
		color_change(body_color);
		if (to_right) {
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
		}
		else {
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
		}
	}
	else if (size == 4) {
		color_change(body_color);
		if (to_right) {
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 6, y, "��");
		}
		else {
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 6, y, "��");
		}
	}
	else if (size == 5) {
		color_change(body_color);
		if (to_right) {
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 6, y, "��");
			gotoxylimit(x + 8, y, "��");
		}
		else {
			gotoxylimit(x, y, "��");
			gotoxylimit(x + 2, y, "��");
			gotoxylimit(x + 4, y, "��");
			gotoxylimit(x + 6, y, "��");
			gotoxylimit(x + 8, y, "��");
		}
	}
	else if (size == 6) {
		color_change(fin_color);
		gotoxylimit(x + 2, y, "��");
		gotoxylimit(x + 4, y, "��");
		gotoxylimit(x + 6, y, "��");
		color_change(body_color);
		if (to_right) {
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 4, y + 1, "��");
			gotoxylimit(x + 6, y + 1, "��");
			gotoxylimit(x + 8, y + 1, "��");
		}
		else {
			gotoxylimit(x, y + 1, "��");
			gotoxylimit(x + 2, y + 1, "��");
			gotoxylimit(x + 4, y + 1, "��");
			gotoxylimit(x + 6, y + 1, "��");
			gotoxylimit(x + 8, y + 1, "��");
		}
	}
	else if (size <= 22) {
		monstermonster_fish_image_type02_helper01(size, to_right, x, y, body_color, fin_color);
	}
	else {
		monstermonster_fish_image_type02_helper02(size, to_right, x, y, body_color, fin_color);
	}
	color_change(7);
}