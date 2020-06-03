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
			printf("⒏"); 
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜"); // 个 何盒
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
			printf("⒏"); 
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜＜"); // 个 何盒
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
			printf("⒏"); 
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜＜＜"); // 个 何盒
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
			printf("⒏"); 
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜＜＜"); // 个 何盒
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
			printf("⒏"); 
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜＜＜"); // 个 何盒
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
			printf("⒏");
			color_change(color2);
			gotoxy(x + 2, y);
			printf("＜＜＜＜"); // 个 何盒
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
			printf("⒏"); 
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂＜＜＜"); // 个 何盒
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
			printf("⒏");
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂♂＜＜"); // 个 何盒
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
			printf("⒏"); 
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂♂♂＜"); // 个 何盒
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("°°");
		}
	}
	if (size == 10) {
		if (to_right == 0) {
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
			printf("⒏"); 
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("°°");
		}
	}
	if (size == 11) {
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
			gotoxy(x - 4, y + 1);
			printf("″");
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏");
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("°°");
			gotoxy(x + 4, y + 1);
			printf("″");
		}
	}
	if (size == 12) {
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
			gotoxy(x - 6, y + 1);
			printf("″″");
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("°°");
			gotoxy(x + 4, y + 1);
			printf("″″");
		}
	}
	if (size == 13) {
		if (to_right == 1) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑");
			color_change(color2);
			gotoxy(x - 8, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(color3);
			gotoxy(x - 6, y - 1);
			printf("°♂");
			gotoxy(x - 6, y + 1);
			printf("″″");
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("♂°");
			gotoxy(x + 4, y + 1);
			printf("″″");
		}
	}
	if (size == 14) {
		if (to_right == 0) {
			color_change(color1);
			gotoxy(x, y);
			printf("⒑");
			color_change(color2);
			gotoxy(x - 8, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(color3);
			gotoxy(x - 6, y - 1);
			printf("♂♂");
			gotoxy(x - 6, y + 1);
			printf("″″");
		}
		else
		{
			color_change(color1);
			gotoxy(x, y);
			printf("⒏");
			color_change(color2);
			gotoxy(x + 2, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(color3);
			gotoxy(x + 4, y - 1);
			printf("♂♂");
			gotoxy(x + 4, y + 1);
			printf("″″");
		}
	}
		if (size == 15) {
			if (to_right == 0) {
				color_change(color1);
				gotoxy(x, y);
				printf("⒑");
				color_change(color2);
				gotoxy(x - 8, y);
				printf("♂♂♂♂"); // 个 何盒
				color_change(color3);
				gotoxy(x - 6, y - 1);
				printf("♂♂");
				gotoxy(x - 6, y + 1);
				printf("″♂");
			}
			else
			{
				color_change(color1);
				gotoxy(x, y);
				printf("⒏");
				color_change(color2);
				gotoxy(x + 2, y);
				printf("♂♂♂♂"); // 个 何盒
				color_change(color3);
				gotoxy(x + 4, y - 1);
				printf("♂♂");
				gotoxy(x + 4, y + 1);
				printf("♂″");
			}
		}
		if (size == 15) {
			if (to_right == 0) {
				color_change(color1);
				gotoxy(x, y);
				printf("⒑");
				color_change(color2);
				gotoxy(x - 8, y);
				printf("♂♂♂♂"); // 个 何盒
				color_change(color3);
				gotoxy(x - 6, y - 1);
				printf("♂♂");
				gotoxy(x - 6, y + 1);
				printf("″♂");
			}
			else
			{
				color_change(color1);
				gotoxy(x, y);
				printf("⒏");
				color_change(color2);
				gotoxy(x + 2, y);
				printf("♂♂♂♂"); // 个 何盒
				color_change(color3);
				gotoxy(x + 4, y - 1);
				printf("♂♂");
				gotoxy(x + 4, y + 1);
				printf("♂″");
			}
		}
		if (size == 16) {
			if (to_right == 0) {
				color_change(color1);
				gotoxy(x, y);
				printf("⒑");
				color_change(color2);
				gotoxy(x - 8, y);
				printf("♂♂♂♂"); // 个 何盒
				color_change(color3);
				gotoxy(x - 6, y - 1);
				printf("♂♂");
				gotoxy(x - 6, y + 1);
				printf("♂♂");
			}
			else
			{
				color_change(color1);
				gotoxy(x, y);
				printf("⒏");
				color_change(color2);
				gotoxy(x + 2, y);
				printf("♂♂♂♂"); // 个 何盒
				color_change(color3);
				gotoxy(x + 4, y - 1);
				printf("♂♂");
				gotoxy(x + 4, y + 1);
				printf("♂♂");
			}
		}
		if (size == 17) {
			if (to_right == 0) {
				color_change(color1);
				gotoxy(x, y);
				printf("⒑");
				gotoxy(x, y + 1);
				printf("⒑");
				color_change(color2);
				gotoxy(x - 8, y);
				printf("♂♂♂♂"); 
				gotoxy(x - 8, y + 1);
				printf("♂♂♂♂"); // 个 何盒
				color_change(color3);
				gotoxy(x - 6, y - 1);
				printf("♂♂");
				gotoxy(x - 6, y + 2);
				printf("♂♂");
			}
			else
			{
				color_change(color1);
				gotoxy(x, y);
				printf("⒏");
				gotoxy(x, y + 1);
				printf("⒏");
				color_change(color2);
				gotoxy(x + 2, y);
				printf("♂♂♂♂"); 
				gotoxy(x + 2, y + 1);
				printf("♂♂♂♂");// 个 何盒
				color_change(color3);
				gotoxy(x + 4, y - 1);
				printf("♂♂");
				gotoxy(x + 4, y + 2);
				printf("♂♂");
			}
		}
}