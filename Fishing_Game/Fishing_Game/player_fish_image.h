#pragma once

#include "interface_design_tool.h"
#include <cstdio>

void player_fish_image(int size, bool to_right, int x, int y, int mouth_color, int fin_color, int tail_color, int body_color, int eye_color);

void player_fish_image(int size, bool to_right, int x, int y, int mouth_color, int fin_color, int tail_color, int body_color, int eye_color) {
	if (size == 1) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑"); 
			color_change(body_color);
			gotoxy(x - 2, y);
			printf("＞"); // 个 何盒
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("＜"); // 个 何盒
		}
	}
	if (size == 2) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 4, y);
			printf("＞＞"); // 个 何盒
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("＜＜"); // 个 何盒
		}
	}
	if (size == 3) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 6, y);
			printf("＞＞＞"); // 个 何盒
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("＜＜＜"); // 个 何盒
		}
	}
	if (size == 4) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 6, y);
			printf("＞＞＞"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 4, y - 1);
			printf("°");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("＜＜＜"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("°");
		}
	}
	if (size == 5) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 6, y);
			printf("＞＞＞"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 4, y - 1);
			printf("°°");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("＜＜＜"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°");
		}
	}
	if (size == 6) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 8, y);
			printf("＞＞＞＞"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 6, y - 1);
			printf("°°°");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏");
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("＜＜＜＜"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°°");
		}
	}
	if (size == 7) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 8, y);
			printf("＞＞＞♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 6, y - 1);
			printf("°°°");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂＜＜＜"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°°");
		}
	}
	if (size == 8) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 8, y);
			printf("＞＞♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 6, y - 1);
			printf("°°°");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏");
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂♂＜＜"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°°");
		}
	}
	if (size == 9) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 8, y);
			printf("＞♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 6, y - 1);
			printf("°°°");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂♂♂＜"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°°");
		}
	}
	if (size == 10) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 8, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 6, y - 1);
			printf("°°°");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏");
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°°");
		}
	}
	if (size == 11) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 8, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 6, y - 1);
			printf("°°°");
			color_change(tail_color);
			gotoxy(x - 10, y);
			printf("⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°°");
			color_change(tail_color);
			gotoxy(x + 10, y);
			printf("⒏");
		}
	}
	if (size == 12) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 8, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 6, y - 1);
			printf("°°°");
			gotoxy(x - 2, y + 1);
			printf("″");
			color_change(tail_color);
			gotoxy(x - 10, y);
			printf("⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏");
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°°");
			gotoxy(x + 2, y + 1);
			printf("″");
			color_change(tail_color);
			gotoxy(x + 10, y);
			printf("⒏");
		}
	}
	if (size == 13) {
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 8, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 6, y - 1);
			printf("°°°");
			gotoxy(x - 4, y + 1);
			printf("″″");
			color_change(tail_color);
			gotoxy(x - 10, y);
			printf("⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°°");
			gotoxy(x + 2, y + 1);
			printf("″″");
			color_change(tail_color);
			gotoxy(x + 10, y);
			printf("⒏");
		}
	}
		if (size == 14) {
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxy(x, y);
				printf("⒑");
				gotoxy(x, y + 1);
				printf("⒑");
				color_change(body_color);
				gotoxy(x - 8, y);
				printf("♂♂♂♂"); 
				gotoxy(x - 8, y + 1);
				printf("♂♂♂♂"); // 个 何盒
				color_change(fin_color);
				gotoxy(x - 6, y - 1);
				printf("°°°");
				gotoxy(x - 6, y + 2);
				printf("″″″");
				color_change(tail_color);
				gotoxy(x - 10, y);
				printf("⒑");
				gotoxy(x - 10, y + 1);
				printf("⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxy(x, y);
				printf("⒏");
				gotoxy(x, y + 1);
				printf("⒏");
				color_change(body_color);
				gotoxy(x + 2, y);
				printf("♂♂♂♂"); 
				gotoxy(x + 2, y + 1);
				printf("♂♂♂♂");// 个 何盒
				color_change(fin_color);
				gotoxy(x + 2, y - 1);
				printf("°°°");
				gotoxy(x + 2, y + 2);
				printf("″″″");
				color_change(tail_color);
				gotoxy(x + 10, y);
				printf("⒏");
				gotoxy(x + 10, y + 1);
				printf("⒏");
			}
		}
		if (size == 15) {
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxy(x, y - 1);
				printf("⒑");
				gotoxy(x, y);
				printf("| ");
				gotoxy(x, y + 1);
				printf("⒑");
				color_change(body_color);
				gotoxy(x - 8, y - 1);
				printf("♂♂♂  ");
				gotoxy(x - 8, y);
				printf("♂♂♂♂");
				gotoxy(x - 8, y + 1);
				printf("♂♂♂♂"); // 个 何盒
				color_change(eye_color);
				gotoxy(x - 2, y - 1);
				printf("≤");
				color_change(fin_color);
				gotoxy(x - 8, y - 2);
				printf("°°°");
				gotoxy(x - 8, y + 2);
				printf("″″″");
				color_change(tail_color);
				gotoxy(x - 10, y - 1);
				printf("⒑");
				gotoxy(x - 10, y);
				printf("⒑");
				gotoxy(x - 10, y + 1);
				printf("⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxy(x, y - 1);
				printf("⒏");
				gotoxy(x, y);
				printf(" |");
				gotoxy(x, y + 1);
				printf("⒏");
				color_change(body_color);
				gotoxy(x + 2, y - 1);
				printf("  ♂♂♂");
				gotoxy(x + 2, y);
				printf("♂♂♂♂");
				gotoxy(x + 2, y + 1);
				printf("♂♂♂♂");// 个 何盒
				color_change(eye_color);
				gotoxy(x + 2, y - 1);
				printf("≤");
				color_change(fin_color);
				gotoxy(x + 4, y - 2);
				printf("°°°");
				gotoxy(x + 4, y + 2);
				printf("″″″");
				color_change(tail_color);
				gotoxy(x + 10, y);
				printf("⒏");
				gotoxy(x + 10, y + 1);
				printf("⒏");
				gotoxy(x + 10, y - 1);
				printf("⒏");
			}
		}
}