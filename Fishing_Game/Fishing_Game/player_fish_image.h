#pragma once

#include "interface_design_tool.h"
#include <cstdio>

void player_fish_image(int size, bool to_right, int x, int y, int color1, int color2, int color3, int color4);

void player_fish_image(int size, bool to_right, int x, int y, int color1, int color2, int color3, int color4) {
	if (size == 1) {
		if (to_right == 0) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑"); 
			color_change(color2);
			gotoxy(x - 2, y);
			printf("＞"); // 个 何盒
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); // 个 何盒
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜");
		}
	}
	if (size == 2) {
		if (to_right == 0) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑");
			color_change(color2);
			gotoxy(x - 4, y);
			printf("＞＞"); // 个 何盒
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); // 个 何盒
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜＜"); 
		}
	}
	if (size == 3) {
		if (to_right == 0) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑");
			color_change(color2);
			gotoxy(x - 6, y);
			printf("＞＞＞"); // 个 何盒
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); // 个 何盒
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜＜＜");
		}
	}
	if (size == 4) {
		if (to_right == 0) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑");
			color_change(color2);
			gotoxy(x - 6, y);
			printf("＞＞＞"); // 个 何盒
			color_change(color3);
			gotoxy(x - 4, y - 1);
			printf("°");
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); // 个 何盒
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜＜＜");
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("°");
		}
	}
	if (size == 5) {
		if (to_right == 0) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑");
			color_change(color2);
			gotoxy(x - 6, y);
			printf("＞＞＞"); // 个 何盒
			color_change(color3);
			gotoxy(x - 4, y - 1);
			printf("°°");
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); // 个 何盒
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜＜＜");
			color_change(color3);
			gotoxy(x + 2, y - 1);
			printf("°°");
		}
	}
	if (size == 6) {
		if (to_right == 1) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑");
			color_change(color2);
			gotoxy(x - 8, y);
			printf("＞＞＞＞"); // 个 何盒
			color_change(color3);
			gotoxy(x - 6, y - 1);
			printf("°°");
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); // 个 何盒
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜＜＜＜");
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("°°");
		}
	}
	if (size == 7) {
		if (to_right == 0) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑");
			color_change(color2);
			gotoxy(x - 8, y);
			printf("＞＞＞♂"); // 个 何盒
			color_change(color3);
			gotoxy(x - 6, y - 1);
			printf("°°");
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); // 个 何盒
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂＜＜＜");
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("°°");
		}
	}
	if (size == 8) {
		if (to_right == 1) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑");
			color_change(color2);
			gotoxy(x - 8, y);
			printf("＞＞♂♂"); // 个 何盒
			color_change(color3);
			gotoxy(x - 6, y - 1);
			printf("°°");
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); // 个 何盒
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂♂＜＜");
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("°°");
		}
	}
	if (size == 9) {
		if (to_right == 1) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑");
			color_change(color2);
			gotoxy(x - 8, y);
			printf("＞♂♂♂"); // 个 何盒
			color_change(color3);
			gotoxy(x - 6, y - 1);
			printf("°°");
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); // 个 何盒
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂♂♂＜");
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("°°");
		}
	}
	if (size == 10) {
		if (to_right == 1) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑");
			color_change(color2);
			gotoxy(x - 8, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(color3);
			gotoxy(x - 6, y - 1);
			printf("°°");
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); // 个 何盒
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂♂♂♂");
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("°°");
		}
	}
}