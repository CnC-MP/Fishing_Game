#pragma once

#include "interface_design_tool.h"
#include <cstdio>

void player_fish_image(int size, bool to_right, int x, int y, int mouth_color, int fin_color, int tail_color, int body_color, int eye_color);
void gotoxylimit_line(int a, int b, const char c[3], int number);
void ending_image(int x, int y, int color1, int color2, int color3, int color4, int color5);

void gotoxylimit_line(int x, int y, const char c[3], int number) {
	for (int i = 0; i < number; i++) {
		gotoxylimit(x + 2 * i, y, c);
	}
}

void player_fish_image(int size, bool to_right, int x, int y, int mouth_color, int fin_color, int tail_color, int body_color, int eye_color) {
	if (size == 1) {		//size 2x1
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y, "⒑");
			color_change(body_color);
			gotoxylimit(x - 2, y, "＞"); // 个 何盒
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			color_change(body_color);
			gotoxylimit(x + 2, y, "＜"); // 个 何盒
		}
	}
	if (size == 2) {	//size 2x1
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y, "⒑");
			color_change(body_color);
			gotoxylimit(x - 2, y, ">>"); // 个 何盒
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit (x, y, "⒏");
			color_change(body_color);
			gotoxylimit(x + 2, y, "<<"); // 个 何盒
		}
	}
	if (size == 3) {	//size 3x1
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y, "⒑");
			color_change(body_color);
			gotoxylimit(x - 4, y, ">>");
			gotoxylimit(x - 2, y, "♂"); // 个 何盒
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			color_change(body_color);
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 4, y, "<<");  // 个 何盒
		}
	}
	if (size == 4) {	//size 3x2
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y, "⒑");
			color_change(body_color);
			gotoxylimit(x - 4, y, ">>");
			gotoxylimit(x - 2, y, "♂");// 个 何盒
			color_change(fin_color);
			gotoxylimit(x - 2, y - 1, "°");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			color_change(body_color);
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 4, y, "<<");// 个 何盒
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "°");
		}
	}
	if (size == 5) {	//size 3x3
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y, "⒑");
			color_change(body_color);
			gotoxylimit(x - 4, y, ">>");
			gotoxylimit(x - 2, y, "♂");// 个 何盒
			color_change(fin_color);
			gotoxylimit(x - 2, y - 1, "°");
			gotoxylimit(x - 2, y + 1, "″");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			color_change(body_color);
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 4, y, "<<"); // 个 何盒
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "°");
			gotoxylimit(x + 2, y + 1, "″");
		}
	}
	if (size == 6) {	//size 4x3
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y, "⒑");
			color_change(body_color);
			gotoxylimit(x - 6, y, ">>");
			gotoxylimit_line(x - 4, y, "♂", 2); // 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x - 4, y - 1,"°", 2);
			gotoxylimit_line(x - 4, y + 1, "″", 2);
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			color_change(body_color);
			gotoxylimit_line(x + 2, y, "♂", 2);
			gotoxylimit(x + 6, y, "<<"); // 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x + 2, y - 1, "°", 2);
			gotoxylimit_line(x + 2, y + 1, "″", 2);
		}
	}
	if (size == 7) {	//size 5x3
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y, "⒑");
			color_change(body_color);
			gotoxylimit_line(x - 6, y, "♂", 3);	// 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x - 6, y - 1, "°", 3);
			gotoxylimit_line(x - 6, y + 1, "″", 3);
			color_change(tail_color);
			gotoxylimit(x - 8, y, ">>");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			color_change(body_color);
			gotoxylimit_line(x + 2, y, "♂", 3);	// 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x + 2, y - 1, "°", 3);
			gotoxylimit_line(x + 2, y + 1, "″", 3);
			color_change(tail_color);
			gotoxylimit(x + 8, y, "<<");
		}
	}
	if (size == 8) {
		if (to_right == 0) {  //size 6x4
			color_change(mouth_color);
			gotoxylimit(x, y, "⒑");
			gotoxylimit(x, y + 1, "⒑");
			color_change(body_color);
			gotoxylimit_line(x - 6, y, "♂", 3);
			gotoxylimit_line(x - 6, y + 1, "♂", 3);	// 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x - 6, y - 1, "°", 3);
			gotoxylimit_line(x - 6, y + 2, "″", 3);
			color_change(tail_color);
			gotoxylimit(x - 8, y, "⒑");
			gotoxylimit(x - 8, y + 1, "⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			gotoxylimit(x, y + 1, "⒏");
			color_change(body_color);
			gotoxylimit_line(x + 2, y, "♂", 3);
			gotoxylimit_line(x + 2, y + 1, "♂", 3); // 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x + 2, y - 1, "°", 3);
			gotoxylimit_line(x + 2, y + 2, "″", 3);
			color_change(tail_color);
			gotoxylimit(x + 8, y, "⒏");
			gotoxylimit(x + 8, y + 1, "⒏");
		}
	}
	if (size == 9) {	//size 6x4
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y, "⒑");
			gotoxylimit(x, y + 1, "⒑");
			color_change(body_color);
			gotoxylimit_line(x - 8, y, "♂", 4);
			gotoxylimit_line(x - 8, y + 1, "♂", 4);	// 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x - 8, y - 1, "°", 3);
			gotoxylimit_line(x - 8, y + 2, "″", 3);
			color_change(tail_color);
			gotoxylimit(x - 10, y, "⒑");
			gotoxylimit(x - 10, y + 1, "⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			gotoxylimit(x, y + 1, "⒏");
			color_change(body_color);
			gotoxylimit_line(x + 2, y, "♂", 4);
			gotoxylimit_line(x + 2, y + 1, "♂", 4);	 // 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x + 4, y - 1, "°", 3);
			gotoxylimit_line(x + 4, y + 2, "″", 3);
			color_change(tail_color);
			gotoxylimit(x + 10, y, "⒏");
			gotoxylimit(x + 10, y + 1, "⒏");
		}
	}
	if (size == 10) {	//size 6x5
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y - 1, "⒑");
			gotoxylimit(x, y, "| ");
			gotoxylimit(x, y + 1, "⒑");
			color_change(body_color);
			gotoxylimit_line(x - 8, y - 1, "♂", 4);
			gotoxylimit_line(x - 8, y, "♂", 4);
			gotoxylimit_line(x - 8, y + 1, "♂", 4);	 // 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x - 8, y - 2, "°", 3);
			gotoxylimit_line(x - 8, y + 2, "″", 3);
			color_change(tail_color);
			gotoxylimit(x - 10, y - 1, "⒑");
			gotoxylimit(x - 10, y, "♂");
			gotoxylimit(x - 10, y + 1, "⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y - 1, "⒏");
			gotoxylimit(x, y, " |");
			gotoxylimit(x, y + 1, "⒏");
			color_change(body_color);
			gotoxylimit_line(x + 2, y - 1, "♂", 4);
			gotoxylimit_line(x + 2, y, "♂", 4);
			gotoxylimit_line(x + 2, y + 1, "♂", 4); // 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x + 4, y - 2, "°", 3);
			gotoxylimit_line(x + 4, y + 2, "″", 3);
			color_change(tail_color);
			gotoxylimit(x + 10, y - 1, "⒏");
			gotoxylimit(x + 10, y, "♂");
			gotoxylimit(x + 10, y + 1, "⒏");
		}
	}
	if (size == 11) {	 //size 7x5
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y - 1, "⒑");
			gotoxylimit(x, y, "| ");
			gotoxylimit(x, y + 1, "⒑");
			color_change(body_color);
			gotoxylimit_line(x - 8, y - 1, "♂", 4);
			gotoxylimit_line(x - 10, y, "♂", 5);
			gotoxylimit_line(x - 8, y + 1, "♂", 4);	// 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x - 8, y - 2, "°", 3);
			gotoxylimit_line(x - 8, y + 2, "″", 3);
			gotoxylimit(x - 10, y - 1, "°");
			gotoxylimit(x - 10, y + 1, "″");
			color_change(tail_color);
			gotoxylimit(x - 12, y - 1, "⒑");
			gotoxylimit(x - 12, y, "♂");
			gotoxylimit(x - 12, y + 1, "⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y - 1, "⒏");
			gotoxylimit(x, y, " |");
			gotoxylimit(x, y + 1, "⒏");
			color_change(body_color);
			gotoxylimit_line(x + 2, y - 1, "♂", 4);
			gotoxylimit_line(x + 2, y, "♂", 5);
			gotoxylimit_line(x + 2, y + 1, "♂", 4);	// 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x + 4, y - 2, "°", 3);
			gotoxylimit_line(x + 4, y + 2, "″", 3);
			gotoxylimit(x + 10, y - 1, "°");
			gotoxylimit(x + 10, y + 1, "″");
			color_change(tail_color);
			gotoxylimit(x + 12, y - 1, "⒏");
			gotoxylimit(x + 12, y, "♂");
			gotoxylimit(x + 12, y + 1, "⒏");
		}
	}
	if (size == 12) {	//size 8x5
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y - 1, "⒑");
			gotoxylimit(x, y, "| ");
			gotoxylimit(x, y + 1, "⒑");
			color_change(body_color);
			gotoxylimit_line(x - 8, y - 1, "♂", 4);
			gotoxylimit_line(x - 10, y, "♂", 5);
			gotoxylimit_line(x - 8, y + 1, "♂", 4);	// 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x - 8, y - 2, "°", 3);
			gotoxylimit_line(x - 8, y + 2, "″", 3);
			gotoxylimit(x - 10, y - 1, "°");
			gotoxylimit(x - 10, y + 1, "″");
			color_change(tail_color);
			gotoxylimit(x - 14, y - 1, "⒑");
			gotoxylimit(x - 14, y, "♂");
			gotoxylimit(x - 12, y, "⒑");
			gotoxylimit(x - 14, y + 1, "⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y - 1, "⒏");
			gotoxylimit(x, y, " |");
			gotoxylimit(x, y + 1, "⒏");
			color_change(body_color);
			gotoxylimit_line(x + 2, y - 1, "♂", 4);
			gotoxylimit_line(x + 2, y, "♂", 5);
			gotoxylimit_line(x + 2, y + 1, "♂", 4);	// 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x + 4, y - 2, "°", 3);
			gotoxylimit_line(x + 4, y + 2, "″", 3);
			gotoxylimit(x + 10, y - 1, "°");
			gotoxylimit(x + 10, y + 1, "″");
			color_change(tail_color);
			gotoxylimit(x + 14, y - 1, "⒏");
			gotoxylimit(x + 12, y, "⒏");
			gotoxylimit(x + 14, y, "♂");
			gotoxylimit(x + 14, y + 1, "⒏");
		}
	}
	if (size == 13) {	//size 9x5
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y - 1, "⒑");
			gotoxylimit(x, y, "| ");
			gotoxylimit(x, y + 1, "⒑");
			color_change(body_color);
			gotoxylimit_line(x - 10, y - 1, "♂", 5);
			gotoxylimit_line(x - 12, y, "♂", 6);
			gotoxylimit_line(x - 10, y + 1, "♂", 5);	// 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x - 10, y - 2, "°", 4);
			gotoxylimit_line(x - 10, y + 2, "″", 4);
			gotoxylimit(x - 12, y - 1, "°");
			gotoxylimit(x - 12, y + 1, "″");
			color_change(tail_color);
			gotoxylimit(x - 16, y - 1, "⒑");
			gotoxylimit(x - 16, y, "♂");
			gotoxylimit(x - 14, y, "⒑");
			gotoxylimit(x - 16, y + 1, "⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y - 1, "⒏");
			gotoxylimit(x, y, " |");
			gotoxylimit(x, y + 1, "⒏");
			color_change(body_color);
			gotoxylimit_line(x + 2, y - 1, "♂", 5);
			gotoxylimit_line(x + 2, y, "♂", 6);
			gotoxylimit_line(x + 2, y + 1, "♂", 5);	// 个 何盒
			color_change(fin_color);
			gotoxylimit_line(x + 4, y - 2, "°", 4);
			gotoxylimit_line(x + 4, y + 2, "″", 4);
			gotoxylimit(x + 12, y - 1, "°");
			gotoxylimit(x + 12, y + 1, "″");
			color_change(tail_color);
			gotoxylimit(x + 16, y - 1, "⒏");
			gotoxylimit(x + 14, y, "⒏");
			gotoxylimit(x + 16, y, "♂");
			gotoxylimit(x + 16, y + 1, "⒏");
		}
	}
	if (size == 14) { //size 9x6
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y, "⒑");
			gotoxylimit(x, y + 1, "| ");
			gotoxylimit(x, y + 2, "⒑");
			color_change(body_color);
			gotoxylimit_line(x - 10, y - 1, "♂", 5);
			gotoxylimit_line(x - 12, y, "♂", 4);
			gotoxylimit_line(x - 2, y, "♂", 1);
			gotoxylimit_line(x - 12, y + 1, "♂", 6);
			gotoxylimit_line(x - 10, y + 2, "♂", 5);	// 个 何盒
			color_change(eye_color);
			gotoxylimit(x - 4, y, "≤");
			color_change(fin_color);
			gotoxylimit_line(x - 10, y - 2, "°", 4);
			gotoxylimit_line(x - 10, y + 3, "″", 4);
			gotoxylimit(x - 12, y - 1, "°");
			gotoxylimit(x - 12, y + 2, "″");
			color_change(tail_color);
			gotoxylimit(x - 16, y - 1, "⒑");
			gotoxylimit(x - 16, y, "♂");
			gotoxylimit(x - 14, y, "⒑");
			gotoxylimit(x - 16, y + 1, "♂");
			gotoxylimit(x - 14, y + 1, "⒑");
			gotoxylimit(x - 16, y + 2, "⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			gotoxylimit(x, y + 1, " |");
			gotoxylimit(x, y + 2, "⒏");
			color_change(body_color);
			gotoxylimit_line(x + 2, y - 1, "♂", 5);
			gotoxylimit_line(x + 2, y, "♂", 1);
			gotoxylimit_line(x + 6, y, "♂", 4);
			gotoxylimit_line(x + 2, y + 1, "♂", 6);
			gotoxylimit_line(x + 2, y + 2, "♂", 5);	// 个 何盒
			color_change(eye_color);
			gotoxylimit(x + 4, y, "≤");
			color_change(fin_color);
			gotoxylimit_line(x + 4, y - 2, "°", 4);
			gotoxylimit_line(x + 4, y + 3, "″", 4);
			gotoxylimit(x + 12, y - 1, "°");
			gotoxylimit(x + 12, y + 2, "″");
			color_change(tail_color);
			gotoxylimit(x + 16, y - 1, "⒏");
			gotoxylimit(x + 14, y, "⒏");
			gotoxylimit(x + 16, y, "♂");
			gotoxylimit(x + 14, y + 1, "⒏");
			gotoxylimit(x + 16, y + 1, "♂");
			gotoxylimit(x + 16, y + 2, "⒏");
		}
	}
		if (size == 15) { //size 10x6
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x, y, "⒑");
				gotoxylimit(x, y + 1, "| ");
				gotoxylimit(x, y + 2, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 12, y - 1, "♂", 6);
				gotoxylimit_line(x - 14, y, "♂", 5);
				gotoxylimit_line(x - 2, y, "♂", 1);
				gotoxylimit_line(x - 14, y + 1, "♂", 7);
				gotoxylimit_line(x - 12, y + 2, "♂", 6);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 4, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 12, y - 2, "°", 5);
				gotoxylimit_line(x - 12, y + 3, "″", 5);
				gotoxylimit(x - 14, y - 1, "°");
				gotoxylimit(x - 14, y + 2, "″");
				color_change(tail_color);
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 18, y, "♂");
				gotoxylimit(x - 16, y, "⒑");
				gotoxylimit(x - 18, y + 1, "♂");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 18, y + 2, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x, y, "⒏");
				gotoxylimit(x, y + 1, " |");
				gotoxylimit(x, y + 2, "⒏");
				color_change(body_color);
				gotoxylimit_line(x + 2, y - 1, "♂", 6);
				gotoxylimit_line(x + 2, y, "♂", 1);
				gotoxylimit_line(x + 6, y, "♂", 5);
				gotoxylimit_line(x + 2, y + 1, "♂", 7);
				gotoxylimit_line(x + 2, y + 2, "♂", 6);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 4, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x + 4, y - 2, "°", 5);
				gotoxylimit_line(x + 4, y + 3, "″", 5);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 2, "″");
				color_change(tail_color);
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "♂");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "♂");
				gotoxylimit(x + 18, y + 2, "⒏");
			}
		}
		if (size == 16) {	//size 10x7
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x, y, "⒑");
				gotoxylimit(x, y + 1, "| ");
				gotoxylimit(x, y + 2, "| ");
				gotoxylimit(x, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 12, y - 1, "♂", 6);
				gotoxylimit_line(x - 14, y, "♂", 5);
				gotoxylimit_line(x - 2, y, "♂", 1);
				gotoxylimit_line(x - 14, y + 1, "♂", 7);
				gotoxylimit_line(x - 14, y + 2, "♂", 7);
				gotoxylimit_line(x - 12, y + 3, "♂", 6);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 4, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 12, y - 2, "°", 5);
				gotoxylimit_line(x - 12, y + 4, "″", 5);
				gotoxylimit(x - 14, y - 1, "°");
				gotoxylimit(x - 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 18, y, "♂");
				gotoxylimit(x - 16, y, "⒑");
				gotoxylimit(x - 18, y + 1, "♂");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 18, y + 2, "♂");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 18, y + 3 ,"⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x, y, "⒏");
				gotoxylimit(x, y + 1, " |");
				gotoxylimit(x, y + 2, " |");
				gotoxylimit(x, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit_line(x + 2, y - 1, "♂", 6);
				gotoxylimit_line(x + 2, y, "♂", 1);
				gotoxylimit_line(x + 6, y, "♂", 5);
				gotoxylimit_line(x + 2, y + 1, "♂", 7);
				gotoxylimit_line(x + 2, y + 2, "♂", 7);
				gotoxylimit_line(x + 2, y + 3, "♂", 6);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 4, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x + 4, y - 2, "°", 5);
				gotoxylimit_line(x + 4, y + 4, "″", 5);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "♂");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "♂");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "♂");
				gotoxylimit(x + 18, y + 3, "⒏");
			}
		}
		if (size == 17) {	//size 11x7
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 2, y, "⒑");
				gotoxylimit(x + 2, y + 1, "| ");
				gotoxylimit(x + 2, y + 2 ,"| ");
				gotoxylimit(x + 2, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 12, y - 1, "♂", 7);
				gotoxylimit_line(x - 14, y, "♂", 6);
				gotoxylimit_line(x, y, "♂", 1);
				gotoxylimit_line(x - 14, y + 1, "♂", 8);
				gotoxylimit_line(x - 14, y + 2, "♂", 8);
				gotoxylimit_line(x - 12, y + 3, "♂", 7);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 2, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 12, y - 2, "°", 6);
				gotoxylimit_line(x - 12, y + 4, "″", 6);
				gotoxylimit(x - 14, y - 1, "°");
				gotoxylimit(x - 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 18, y, "♂");
				gotoxylimit(x - 16, y, "⒑");
				gotoxylimit(x - 18, y + 1, "♂");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 18, y + 2, "♂");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 18, y + 3, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 2, y, "⒏");
				gotoxylimit(x - 2, y + 1, " |");
				gotoxylimit(x - 2, y + 2, " |");
				gotoxylimit(x - 2, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit_line(x, y - 1, "♂", 7);
				gotoxylimit_line(x, y, "♂", 1);
				gotoxylimit_line(x + 4, y, "♂", 6);
				gotoxylimit_line(x, y + 1, "♂", 8);
				gotoxylimit_line(x, y + 2, "♂", 8);
				gotoxylimit_line(x, y + 3, "♂", 7);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 2, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x + 2, y - 2, "°", 6);
				gotoxylimit_line(x + 2, y + 4, "″", 6);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "♂");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "♂");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "♂");
				gotoxylimit(x + 18, y + 3, "⒏");
			}
		}
		if (size == 18) {	//size 12x7
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 2, y, "⒑");
				gotoxylimit(x + 2, y + 1, "| ");
				gotoxylimit(x + 2, y + 2, "| ");
				gotoxylimit(x + 2, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 12, y - 1, "♂", 7);
				gotoxylimit_line(x - 14, y, "♂", 6);
				gotoxylimit_line(x, y, "♂", 1);
				gotoxylimit_line(x - 14, y + 1, "♂", 8);
				gotoxylimit_line(x - 14, y + 2, "♂", 8);
				gotoxylimit_line(x - 12, y + 3, "♂", 7);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 2, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 12, y - 2, "°", 6);
				gotoxylimit_line(x - 12, y + 4, "″", 6);
				gotoxylimit(x - 14, y - 1, "°");
				gotoxylimit(x - 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 18, y, "⒏");
				gotoxylimit(x - 16, y, "⒑");
				gotoxylimit(x - 18, y + 1, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 18, y + 2, "⒏");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 20, y + 3, "°");
				gotoxylimit(x - 18, y + 3, "⒑");
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 20, y + 4, "⒑");
				
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 2, y, "⒏");
				gotoxylimit(x - 2, y + 1, " |");
				gotoxylimit(x - 2, y + 2, " |");
				gotoxylimit(x - 2, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit_line(x, y - 1, "♂", 7);
				gotoxylimit_line(x, y, "♂", 1);
				gotoxylimit_line(x + 4, y, "♂", 6);
				gotoxylimit_line(x, y + 1, "♂", 8);
				gotoxylimit_line(x, y + 2, "♂", 8);
				gotoxylimit_line(x, y + 3, "♂", 7);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 2, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x + 2, y - 2, "°", 6);
				gotoxylimit_line(x + 2, y + 4, "″", 6);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "″");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2 ,"⒑");
				gotoxylimit(x + 18, y + 3, "⒏");
				gotoxylimit(x + 20, y + 3, "°");
				gotoxylimit(x + 20, y + 4, "⒏");
			}
		}
		if (size == 19) {	//size 12x8
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 4, y, "⒑");
				gotoxylimit(x + 4, y + 1, "| ");
				gotoxylimit(x + 4, y + 2, "| ");
				gotoxylimit(x + 4, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 7);
				gotoxylimit_line(x - 12, y, "♂", 6);
				gotoxylimit_line(x + 2, y, "♂", 1);
				gotoxylimit_line(x - 12, y + 1, "♂", 8);
				gotoxylimit_line(x - 12, y + 2, "♂", 8);
				gotoxylimit_line(x - 12, y + 3, "♂", 8);
				gotoxylimit_line(x - 10, y + 4, "♂", 7);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 6);
				gotoxylimit_line(x - 10, y + 5, "″", 6);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 4, "″");
				color_change(tail_color);
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 18, y + 3, "°");
				gotoxylimit(x - 16, y + 3, "⒏");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 18, y + 4, "⒑");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 18, y + 5, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 2, y, "⒏");
				gotoxylimit(x - 2, y + 1, " |");
				gotoxylimit(x - 2, y + 2, " |");
				gotoxylimit(x - 2, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit_line(x, y - 1, "♂", 7);
				gotoxylimit_line(x, y, "♂", 1);
				gotoxylimit_line(x + 4, y, "♂", 6);
				gotoxylimit_line(x, y + 1, "♂", 8);
				gotoxylimit_line(x, y + 2, "♂", 8);
				gotoxylimit_line(x, y + 3, "♂", 8);
				gotoxylimit_line(x, y + 4, "♂", 7);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 2, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x + 2, y - 2, "°", 6);
				gotoxylimit_line(x + 2, y + 5, "″", 6);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 4, "″");
				color_change(tail_color);
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "⒏");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 20, y, "″");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒑"); 
				gotoxylimit(x + 20, y + 3, "°");
				gotoxylimit(x + 18, y + 4, "⒏");
				gotoxylimit(x + 20, y + 4, "⒏");
				gotoxylimit(x + 20, y + 5, "⒏");
			}
		}
		if (size == 20) {	//size 13x8
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 4, y, "⒑");
				gotoxylimit(x + 4, y + 1, "| ");
				gotoxylimit(x + 4, y + 2, "| ");
				gotoxylimit(x + 4, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 6);
				gotoxylimit_line(x - 12, y, "♂", 5);
				gotoxylimit_line(x, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 8);
				gotoxylimit_line(x - 12, y + 2, "♂", 8);
				gotoxylimit_line(x - 12, y + 3, "♂", 8);
				gotoxylimit_line(x - 10, y + 4, "♂", 6);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 2, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 5);
				gotoxylimit_line(x - 10, y + 5, "″", 5);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 4, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 18, y + 3, "°");
				gotoxylimit(x - 16, y + 3, "⒏");
				gotoxylimit(x - 14, y + 3 ,"⒑");
				gotoxylimit(x - 20, y + 4, "°");
				gotoxylimit(x - 18, y + 4, "⒑");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "⒑");
				gotoxylimit(x - 18, y + 5, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 2, y, "⒏");
				gotoxylimit(x - 2, y + 1, " |");
				gotoxylimit(x - 2, y + 2, " |");
				gotoxylimit(x - 2, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit_line(x + 2, y - 1, "♂", 6);
				gotoxylimit_line(x, y, "♂", 2);
				gotoxylimit_line(x + 6, y, "♂", 5);
				gotoxylimit_line(x, y + 1, "♂", 8);
				gotoxylimit_line(x, y + 2, "♂", 8);
				gotoxylimit_line(x, y + 3, "♂", 8);
				gotoxylimit_line(x + 2, y + 4, "♂", 6);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 4, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x + 4, y - 2, "°", 5);
				gotoxylimit_line(x + 4, y + 5, "″", 5);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 4 ,"″");
				color_change(tail_color);
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 22, y - 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "⒏");
				gotoxylimit(x + 22, y - 1, "″");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 20, y, "″");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒑");
				gotoxylimit(x + 20, y + 3, "°");
				gotoxylimit(x + 18, y + 4, "⒏");
				gotoxylimit(x + 20, y + 4, "⒏");
				gotoxylimit(x + 22, y + 4, "°");
				gotoxylimit(x + 20, y + 5, "⒏");
				gotoxylimit(x + 22, y + 5, "⒏");
			}
		}
		if (size == 21) {	//size 14x8
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 6, y, "⒑");
				gotoxylimit(x + 6, y + 1, "| ");
				gotoxylimit(x + 6, y + 2, "| ");
				gotoxylimit(x + 6, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 7);
				gotoxylimit_line(x - 12, y, "♂", 6);
				gotoxylimit_line(x + 2, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 9);
				gotoxylimit_line(x - 12, y + 2, "♂", 9);
				gotoxylimit_line(x - 12, y + 3, "♂", 9);
				gotoxylimit_line(x - 10, y + 4, "♂", 7);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 6);
				gotoxylimit_line(x - 10, y + 5, "″", 6);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 4, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 18, y + 3, "°");
				gotoxylimit(x - 16, y + 3, "⒏");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 20, y + 4, "°");
				gotoxylimit(x - 18, y + 4, "⒑");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "⒑");
				gotoxylimit(x - 18, y + 5, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 4, y, "⒏");
				gotoxylimit(x - 4, y + 1, " |");
				gotoxylimit(x - 4, y + 2, " |");
				gotoxylimit(x - 4, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit_line(x, y - 1, "♂", 7);
				gotoxylimit_line(x - 2, y, "♂", 2);
				gotoxylimit_line(x + 4, y, "♂", 6);
				gotoxylimit_line(x - 2, y + 1, "♂", 9);
				gotoxylimit_line(x - 2, y + 2, "♂", 9);
				gotoxylimit_line(x - 2, y + 3, "♂", 9);
				gotoxylimit_line(x, y + 4, "♂", 7);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 2, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x + 2, y - 2, "°", 6);
				gotoxylimit_line(x + 2, y + 5, "″", 6);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 4, "″");
				color_change(tail_color);
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 22, y - 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "⒏");
				gotoxylimit(x + 22, y - 1, "″");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 20, y, "″");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒑");
				gotoxylimit(x + 20, y + 3, "°");
				gotoxylimit(x + 18, y + 4, "⒏");
				gotoxylimit(x + 20, y + 4, "⒏");
				gotoxylimit(x + 22, y + 4, "°");
				gotoxylimit(x + 20, y + 5, "⒏");
				gotoxylimit(x + 22, y + 5, "⒏");
			}
		}
		if (size == 22) {	//size 15X8
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 8, y, "⒑");
				gotoxylimit(x + 8, y + 1, "| ");
				gotoxylimit(x + 8, y + 2, "| ");
				gotoxylimit(x + 8, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 8);
				gotoxylimit_line(x - 12, y, "♂", 7);
				gotoxylimit_line(x + 4, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 10);
				gotoxylimit_line(x - 12, y + 2, "♂", 10);
				gotoxylimit_line(x - 12, y + 3, "♂", 10);
				gotoxylimit_line(x - 10, y + 4, "♂", 8);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 2, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 7);
				gotoxylimit_line(x - 10, y + 5, "″", 7);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 4, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 18, y + 3, "°");
				gotoxylimit(x - 16, y + 3, "⒏");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 20, y + 4, "°");
				gotoxylimit(x - 18, y + 4, "⒑");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "⒑");
				gotoxylimit(x - 18, y + 5, "⒑");
			}
			else
			{
			color_change(mouth_color);
			gotoxylimit(x - 6, y, "⒏");
			gotoxylimit(x - 6, y + 1, " |");
			gotoxylimit(x - 6, y + 2, " |");
			gotoxylimit(x - 6, y + 3, "⒏");
			color_change(body_color);
			gotoxylimit_line(x - 2, y - 1, "♂", 8);
			gotoxylimit_line(x - 4, y, "♂", 2);
			gotoxylimit_line(x + 2, y, "♂", 7);
			gotoxylimit_line(x - 4, y + 1, "♂", 10);
			gotoxylimit_line(x - 4, y + 2, "♂", 10);
			gotoxylimit_line(x - 4, y + 3, "♂", 10);
			gotoxylimit_line(x - 2, y + 4, "♂", 8);	// 个 何盒
			color_change(eye_color);
			gotoxylimit(x, y, "≤");
			color_change(fin_color);
			gotoxylimit_line(x, y - 2, "°", 7);
			gotoxylimit_line(x, y + 5, "″", 7);
			gotoxylimit(x + 14, y - 1, "°");
			gotoxylimit(x + 14, y + 4, "″");
			color_change(tail_color);
			gotoxylimit(x + 20, y - 2, "⒏");
			gotoxylimit(x + 22, y - 2, "⒏");
			gotoxylimit(x + 18, y - 1, "⒏");
			gotoxylimit(x + 20, y - 1, "⒏");
			gotoxylimit(x + 22, y - 1, "″");
			gotoxylimit(x + 16, y, "⒏");
			gotoxylimit(x + 18, y, "⒑");
			gotoxylimit(x + 20, y, "″");
			gotoxylimit(x + 16, y + 1, "⒏");
			gotoxylimit(x + 18, y + 1, "⒏");
			gotoxylimit(x + 16, y + 2, "⒏");
			gotoxylimit(x + 18, y + 2, "⒏");
			gotoxylimit(x + 16, y + 3, "⒏");
			gotoxylimit(x + 18, y + 3, "⒑");
			gotoxylimit(x + 20, y + 3, "°");
			gotoxylimit(x + 18, y + 4, "⒏");
			gotoxylimit(x + 20, y + 4, "⒏");
			gotoxylimit(x + 22, y + 4, "°");
			gotoxylimit(x + 20, y + 5, "⒏");
			gotoxylimit(x + 22, y + 5, "⒏");
			}
		}
		if (size == 23) {	//size 16x8
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 10, y, "⒑");
				gotoxylimit(x + 10, y + 1, "| ");
				gotoxylimit(x + 10, y + 2, "| ");
				gotoxylimit(x + 10, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 9);
				gotoxylimit_line(x - 12, y, "♂", 8);
				gotoxylimit_line(x + 6, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 11);
				gotoxylimit_line(x - 12, y + 2, "♂", 11);
				gotoxylimit_line(x - 12, y + 3, "♂", 11);
				gotoxylimit_line(x - 10, y + 4, "♂", 9);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 4, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 8);
				gotoxylimit_line(x - 10, y + 5, "″", 8);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 4, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 18, y + 3, "°");
				gotoxylimit(x - 16, y + 3, "⒏");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 20, y + 4, "°");
				gotoxylimit(x - 18, y + 4, "⒑");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "⒑");
				gotoxylimit(x - 18, y + 5, "⒑");
			}
			else
			{
			color_change(mouth_color);
			gotoxylimit(x - 8, y, "⒏");
			gotoxylimit(x - 8, y + 1, " |");
			gotoxylimit(x - 8, y + 2, " |");
			gotoxylimit(x - 8, y + 3, "⒏");
			color_change(body_color);
			gotoxylimit_line(x - 4, y - 1, "♂", 9);
			gotoxylimit_line(x - 6, y, "♂", 2);
			gotoxylimit_line(x, y, "♂", 8);
			gotoxylimit_line(x - 6, y + 1, "♂", 11);
			gotoxylimit_line(x - 6, y + 2, "♂", 11);
			gotoxylimit_line(x - 6, y + 3, "♂", 11);
			gotoxylimit_line(x - 4, y + 4, "♂", 9);	// 个 何盒
			color_change(eye_color);
			gotoxylimit(x - 2, y, "≤");
			color_change(fin_color);
			gotoxylimit_line(x - 2, y - 2, "°", 8);
			gotoxylimit_line(x - 2, y + 5, "″", 8);
			gotoxylimit(x + 14, y - 1, "°");
			gotoxylimit(x + 14, y + 4, "″");
			color_change(tail_color);
			gotoxylimit(x + 20, y - 2, "⒏");
			gotoxylimit(x + 22, y - 2, "⒏");
			gotoxylimit(x + 18, y - 1, "⒏");
			gotoxylimit(x + 20, y - 1, "⒏");
			gotoxylimit(x + 22, y - 1, "″");
			gotoxylimit(x + 16, y, "⒏");
			gotoxylimit(x + 18, y, "⒑");
			gotoxylimit(x + 20, y, "″");
			gotoxylimit(x + 16, y + 1, "⒏");
			gotoxylimit(x + 18, y + 1, "⒏");
			gotoxylimit(x + 16, y + 2, "⒏");
			gotoxylimit(x + 18, y + 2, "⒏");
			gotoxylimit(x + 16, y + 3, "⒏");
			gotoxylimit(x + 18, y + 3, "⒑");
			gotoxylimit(x + 20, y + 3, "°");
			gotoxylimit(x + 18, y + 4, "⒏");
			gotoxylimit(x + 20, y + 4, "⒏");
			gotoxylimit(x + 22, y + 4, "°");
			gotoxylimit(x + 20, y + 5, "⒏");
			gotoxylimit(x + 22, y + 5, "⒏");
			}
		}
		if (size == 24) {	//size 17x8
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 12, y, "⒑");
				gotoxylimit(x + 12, y + 1, "| ");
				gotoxylimit(x + 12, y + 2, "| ");
				gotoxylimit(x + 12, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 10);
				gotoxylimit_line(x - 12, y, "♂", 9);
				gotoxylimit_line(x + 8, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 12);
				gotoxylimit_line(x - 12, y + 2, "♂", 12);
				gotoxylimit_line(x - 12, y + 3, "♂", 12);
				gotoxylimit_line(x - 10, y + 4, "♂", 10);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 6, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 9);
				gotoxylimit_line(x - 10, y + 5, "″", 9);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 4, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 18, y + 3, "°");
				gotoxylimit(x - 16, y + 3, "⒏");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 20, y + 4, "°");
				gotoxylimit(x - 18, y + 4, "⒑");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "⒑");
				gotoxylimit(x - 18, y + 5, "⒑");
			}
			else
			{
			color_change(mouth_color);
			gotoxylimit(x - 10, y, "⒏");
			gotoxylimit(x - 10, y + 1, " |");
			gotoxylimit(x - 10, y + 2, " |");
			gotoxylimit(x - 10, y + 3, "⒏");
			color_change(body_color);
			gotoxylimit_line(x - 6, y - 1, "♂", 10);
			gotoxylimit_line(x - 8, y, "♂", 2);
			gotoxylimit_line(x - 2, y, "♂", 9);
			gotoxylimit_line(x - 8, y + 1, "♂", 12);
			gotoxylimit_line(x - 8, y + 2, "♂", 12);
			gotoxylimit_line(x - 8, y + 3, "♂", 12);
			gotoxylimit_line(x - 6, y + 4, "♂", 10);	// 个 何盒
			color_change(eye_color);
			gotoxylimit(x - 4, y, "≤");
			color_change(fin_color);
			gotoxylimit_line(x - 4, y - 2, "°", 9);
			gotoxylimit_line(x - 4, y + 5, "″", 9);
			gotoxylimit(x + 14, y - 1, "°");
			gotoxylimit(x + 14, y + 4, "″");
			color_change(tail_color);
			gotoxylimit(x + 20, y - 2, "⒏");
			gotoxylimit(x + 22, y - 2, "⒏");
			gotoxylimit(x + 18, y - 1, "⒏");
			gotoxylimit(x + 20, y - 1, "⒏");
			gotoxylimit(x + 22, y - 1, "″");
			gotoxylimit(x + 16, y, "⒏");
			gotoxylimit(x + 18, y, "⒑");
			gotoxylimit(x + 20, y, "″");
			gotoxylimit(x + 16, y + 1, "⒏");
			gotoxylimit(x + 18, y + 1, "⒏");
			gotoxylimit(x + 16, y + 2, "⒏");
			gotoxylimit(x + 18, y + 2, "⒏");
			gotoxylimit(x + 16, y + 3, "⒏");
			gotoxylimit(x + 18, y + 3, "⒑");
			gotoxylimit(x + 20, y + 3, "°");
			gotoxylimit(x + 18, y + 4, "⒏");
			gotoxylimit(x + 20, y + 4, "⒏");
			gotoxylimit(x + 22, y + 4, "°");
			gotoxylimit(x + 20, y + 5, "⒏");
			gotoxylimit(x + 22, y + 5, "⒏");
			}
		}
		if (size == 25) {	//size 17x9
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 12, y + 1, "⒑");
				gotoxylimit(x + 12, y + 2, "| ");
				gotoxylimit(x + 12, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 10);
				gotoxylimit_line(x - 12, y, "♂", 9);
				gotoxylimit_line(x + 8, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 12);
				gotoxylimit_line(x - 12, y + 2, "♂", 12);
				gotoxylimit_line(x - 12, y + 3, "♂", 12);
				gotoxylimit_line(x - 12, y + 4, "♂", 12);
				gotoxylimit_line(x - 10, y + 5, "♂", 10);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 6, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 9);
				gotoxylimit_line(x - 10, y + 6, "″", 9);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 5, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑"); 
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 18, y + 4, "°");
				gotoxylimit(x - 16, y + 4, "⒏");
				gotoxylimit(x - 14, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "°");
				gotoxylimit(x - 18, y + 5, "⒑");
				gotoxylimit(x - 16, y + 5, "⒑");
				gotoxylimit(x - 20, y + 6, "⒑");
				gotoxylimit(x - 18, y + 6, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 10, y + 1, "⒏");
				gotoxylimit(x - 10, y + 2, " |");
				gotoxylimit(x - 10, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit_line(x - 6, y - 1, "♂", 10);
				gotoxylimit_line(x - 8, y, "♂", 2);
				gotoxylimit_line(x - 2, y, "♂", 9);
				gotoxylimit_line(x - 8, y + 1, "♂", 12);
				gotoxylimit_line(x - 8, y + 2, "♂", 12);
				gotoxylimit_line(x - 8, y + 3, "♂", 12);
				gotoxylimit_line(x - 8, y + 4, "♂", 12);
				gotoxylimit_line(x - 6, y + 5, "♂", 10);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 4, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 4, y - 2, "°", 9);
				gotoxylimit_line(x - 4, y + 6, "″", 9);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 5, "″");
				color_change(tail_color);
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 22, y - 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "⒏");
				gotoxylimit(x + 22, y - 1, "″");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 20, y, "″");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒏");
				gotoxylimit(x + 16, y + 4, "⒏");
				gotoxylimit(x + 18, y + 4, "⒑");
				gotoxylimit(x + 20, y + 4, "°");
				gotoxylimit(x + 18, y + 5, "⒏");
				gotoxylimit(x + 20, y + 5, "⒏");
				gotoxylimit(x + 22, y + 5, "°");
				gotoxylimit(x + 20, y + 6, "⒏");
				gotoxylimit(x + 22, y + 6, "⒏");
			}
		}
		if (size == 26) {	//size 18x9
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 14, y + 1, "⒑");
				gotoxylimit(x + 14, y + 2, "| ");
				gotoxylimit(x + 14, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 11);
				gotoxylimit_line(x - 12, y, "♂", 10);
				gotoxylimit_line(x + 10, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 13);
				gotoxylimit_line(x - 12, y + 2, "♂", 13);
				gotoxylimit_line(x - 12, y + 3, "♂", 13);
				gotoxylimit_line(x - 12, y + 4, "♂", 13);
				gotoxylimit_line(x - 10, y + 5, "♂", 11);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 8, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 10);
				gotoxylimit_line(x - 10, y + 6, "″", 10);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 5, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 18, y + 4, "°");
				gotoxylimit(x - 16, y + 4, "⒏");
				gotoxylimit(x - 14, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "°");
				gotoxylimit(x - 18, y + 5, "⒑");
				gotoxylimit(x - 16, y + 5, "⒑");
				gotoxylimit(x - 20, y + 6, "⒑");
				gotoxylimit(x - 18, y + 6, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 12, y + 1, "⒏");
				gotoxylimit(x - 12, y + 2, " |");
				gotoxylimit(x - 12, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit_line(x - 8, y - 1, "♂", 11);
				gotoxylimit_line(x - 10, y, "♂", 2);
				gotoxylimit_line(x - 4, y, "♂", 10);
				gotoxylimit_line(x - 10, y + 1, "♂", 13);
				gotoxylimit_line(x - 10, y + 2, "♂", 13);
				gotoxylimit_line(x - 10, y + 3, "♂", 13);
				gotoxylimit_line(x - 10, y + 4, "♂", 13);
				gotoxylimit_line(x - 8, y + 5, "♂", 11);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 6, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 6, y - 2, "°", 10);
				gotoxylimit_line(x - 6, y + 6, "″", 10);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 5, "″");
				color_change(tail_color);
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 22, y - 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "⒏");
				gotoxylimit(x + 22, y - 1, "″");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 20, y, "″");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒏");
				gotoxylimit(x + 16, y + 4, "⒏");
				gotoxylimit(x + 18, y + 4, "⒑");
				gotoxylimit(x + 20, y + 4, "°");
				gotoxylimit(x + 18, y + 5, "⒏");
				gotoxylimit(x + 20, y + 5, "⒏");
				gotoxylimit(x + 22, y + 5, "°");
				gotoxylimit(x + 20, y + 6, "⒏");
				gotoxylimit(x + 22, y + 6, "⒏");
			}
		}
		if (size == 27) {	//size 19x9
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 16, y + 1, "⒑");
				gotoxylimit(x + 16, y + 2, "| ");
				gotoxylimit(x + 16, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 12);
				gotoxylimit_line(x - 12, y, "♂", 11);
				gotoxylimit_line(x + 12, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 14);
				gotoxylimit_line(x - 12, y + 2, "♂", 14);
				gotoxylimit_line(x - 12, y + 3, "♂", 14);
				gotoxylimit_line(x - 12, y + 4, "♂", 14);
				gotoxylimit_line(x - 10, y + 5, "♂", 12);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 10, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 11);
				gotoxylimit_line(x - 10, y + 6, "″", 11);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 5, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 18, y + 4, "°");
				gotoxylimit(x - 16, y + 4, "⒏");
				gotoxylimit(x - 14, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "°");
				gotoxylimit(x - 18, y + 5, "⒑");
				gotoxylimit(x - 16, y + 5, "⒑");
				gotoxylimit(x - 20, y + 6, "⒑");
				gotoxylimit(x - 18, y + 6, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 14, y + 1, "⒏");
				gotoxylimit(x - 14, y + 2, " |");
				gotoxylimit(x - 14, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 12);
				gotoxylimit_line(x - 12, y, "♂", 2);
				gotoxylimit_line(x - 6, y, "♂", 11);
				gotoxylimit_line(x - 12, y + 1, "♂", 14);
				gotoxylimit_line(x - 12, y + 2, "♂", 14);
				gotoxylimit_line(x - 12, y + 3, "♂", 14);
				gotoxylimit_line(x - 12, y + 4, "♂", 14);
				gotoxylimit_line(x - 10, y + 5, "♂", 12);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 8, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 8, y - 2, "°", 11);
				gotoxylimit_line(x - 8, y + 6, "″", 11);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 5, "″");
				color_change(tail_color);
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 22, y - 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "⒏");
				gotoxylimit(x + 22, y - 1, "″");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 20, y, "″");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒏");
				gotoxylimit(x + 16, y + 4, "⒏");
				gotoxylimit(x + 18, y + 4, "⒑");
				gotoxylimit(x + 20, y + 4, "°");
				gotoxylimit(x + 18, y + 5, "⒏");
				gotoxylimit(x + 20, y + 5, "⒏");
				gotoxylimit(x + 22, y + 5, "°");
				gotoxylimit(x + 20, y + 6, "⒏");
				gotoxylimit(x + 22, y + 6, "⒏");
			}
		}
		if (size == 28) {	//size 20x9
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 18, y + 1, "⒑");
				gotoxylimit(x + 18, y + 2, "| ");
				gotoxylimit(x + 18, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 13);
				gotoxylimit_line(x - 12, y, "♂", 12);
				gotoxylimit_line(x + 14, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 15);
				gotoxylimit_line(x - 12, y + 2, "♂", 15);
				gotoxylimit_line(x - 12, y + 3, "♂", 15);
				gotoxylimit_line(x - 12, y + 4, "♂", 15);
				gotoxylimit_line(x - 10, y + 5, "♂", 13);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 12, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 12);
				gotoxylimit_line(x - 10, y + 6, "″", 12);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 5, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 18, y + 4, "°");
				gotoxylimit(x - 16, y + 4, "⒏");
				gotoxylimit(x - 14, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "°");
				gotoxylimit(x - 18, y + 5, "⒑");
				gotoxylimit(x - 16, y + 5, "⒑");
				gotoxylimit(x - 20, y + 6, "⒑");
				gotoxylimit(x - 18, y + 6, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 16, y + 1, "⒏");
				gotoxylimit(x - 16, y + 2, " |");
				gotoxylimit(x - 16, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit_line(x - 12, y - 1, "♂", 13);
				gotoxylimit_line(x - 14, y, "♂", 2);
				gotoxylimit_line(x - 8, y, "♂", 12);
				gotoxylimit_line(x - 14, y + 1, "♂", 15);
				gotoxylimit_line(x - 14, y + 2, "♂", 15);
				gotoxylimit_line(x - 14, y + 3, "♂", 15);
				gotoxylimit_line(x - 14, y + 4, "♂", 15);
				gotoxylimit_line(x - 12, y + 5, "♂", 13);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 10, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 12);
				gotoxylimit_line(x - 10, y + 6, "″", 12);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 5, "″");
				color_change(tail_color);
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 22, y - 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "⒏");
				gotoxylimit(x + 22, y - 1, "″");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 20, y, "″");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒏");
				gotoxylimit(x + 16, y + 4, "⒏");
				gotoxylimit(x + 18, y + 4, "⒑");
				gotoxylimit(x + 20, y + 4, "°");
				gotoxylimit(x + 18, y + 5, "⒏");
				gotoxylimit(x + 20, y + 5, "⒏");
				gotoxylimit(x + 22, y + 5, "°");
				gotoxylimit(x + 20, y + 6, "⒏");
				gotoxylimit(x + 22, y + 6, "⒏");
			}
		}
		if (size == 29) {	//size 21x9
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 20, y + 1, "⒑");
				gotoxylimit(x + 20, y + 2, "| ");
				gotoxylimit(x + 20, y + 3, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 14);
				gotoxylimit_line(x - 12, y, "♂", 13);
				gotoxylimit_line(x + 16, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 16);
				gotoxylimit_line(x - 12, y + 2, "♂", 16);
				gotoxylimit_line(x - 12, y + 3, "♂", 16);
				gotoxylimit_line(x - 12, y + 4, "♂", 16);
				gotoxylimit_line(x - 10, y + 5, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 14, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 13);
				gotoxylimit_line(x - 10, y + 6, "″", 13);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 5, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 18, y + 4, "°");
				gotoxylimit(x - 16, y + 4, "⒏");
				gotoxylimit(x - 14, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "°");
				gotoxylimit(x - 18, y + 5, "⒑");
				gotoxylimit(x - 16, y + 5, "⒑");
				gotoxylimit(x - 20, y + 6, "⒑");
				gotoxylimit(x - 18, y + 6, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 18, y + 1, "⒏");
				gotoxylimit(x - 18, y + 2, " |");
				gotoxylimit(x - 18, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit_line(x - 14, y - 1, "♂", 14);
				gotoxylimit_line(x - 16, y, "♂", 2);
				gotoxylimit_line(x - 10, y, "♂", 13);
				gotoxylimit_line(x - 16, y + 1, "♂", 16);
				gotoxylimit_line(x - 16, y + 2, "♂", 16);
				gotoxylimit_line(x - 16, y + 3, "♂", 16);
				gotoxylimit_line(x - 16, y + 4, "♂", 16);
				gotoxylimit_line(x - 14, y + 5, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 12, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 12, y - 2, "°", 13);
				gotoxylimit_line(x - 12, y + 6, "″", 13);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 5, "″");
				color_change(tail_color);
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 20, y, "″");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "⒏");
				gotoxylimit(x + 22, y - 1, "″");
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒏");
				gotoxylimit(x + 16, y + 4, "⒏");
				gotoxylimit(x + 18, y + 4, "⒑");
				gotoxylimit(x + 20, y + 4, "°");
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 22, y - 2, "⒏");
				gotoxylimit(x + 18, y + 5, "⒏");
				gotoxylimit(x + 20, y + 5, "⒏");
				gotoxylimit(x + 22, y + 5, "°");
				gotoxylimit(x + 20, y + 6, "⒏");
				gotoxylimit(x + 22, y + 6, "⒏");
			}
		}
		if (size == 30) {	//size 21x10
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 20, y + 1, "⒑");
				gotoxylimit(x + 20, y + 2, "| ");
				gotoxylimit(x + 20, y + 3, "| ");
				gotoxylimit(x + 20, y + 4, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 14);
				gotoxylimit_line(x - 12, y, "♂", 13);
				gotoxylimit_line(x + 16, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 16);
				gotoxylimit_line(x - 12, y + 2, "♂", 16);
				gotoxylimit_line(x - 12, y + 3, "♂", 16);
				gotoxylimit_line(x - 12, y + 4, "♂", 16);
				gotoxylimit_line(x - 12, y + 5, "♂", 16);
				gotoxylimit_line(x - 10, y + 6, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 14, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 13);
				gotoxylimit_line(x - 10, y + 7, "″", 13);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 6, "″");
				color_change(tail_color);
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 20, y - 1, "⒑");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 20, y, "″");
				gotoxylimit(x - 18, y, "⒑");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 18, y + 1, "″");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 18, y + 4, "°");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 14, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "°");
				gotoxylimit(x - 18, y + 5, "⒑");
				gotoxylimit(x - 16, y + 5, "⒏");
				gotoxylimit(x - 14, y + 5, "⒑");
				gotoxylimit(x - 20, y + 6, "⒑");
				gotoxylimit(x - 18, y + 6, "⒑");
				gotoxylimit(x - 16, y + 6, "⒑");
				gotoxylimit(x - 20, y + 7, "⒑");
				gotoxylimit(x - 18, y + 7, "⒑");
			}
			else
			{
			color_change(mouth_color);
			gotoxylimit(x - 18, y + 1, "⒏");
			gotoxylimit(x - 18, y + 2, " |");
			gotoxylimit(x - 18, y + 3, " |");
			gotoxylimit(x - 18, y + 4, "⒏");
			color_change(body_color);
			gotoxylimit_line(x - 14, y - 1, "♂", 14);
			gotoxylimit_line(x - 16, y, "♂", 2);
			gotoxylimit_line(x - 10, y, "♂", 13);
			gotoxylimit_line(x - 16, y + 1, "♂", 16);
			gotoxylimit_line(x - 16, y + 2, "♂", 16);
			gotoxylimit_line(x - 16, y + 3, "♂", 16);
			gotoxylimit_line(x - 16, y + 4, "♂", 16);
			gotoxylimit_line(x - 16, y + 5, "♂", 16);
			gotoxylimit_line(x - 14, y + 6, "♂", 14);	// 个 何盒
			color_change(eye_color);
			gotoxylimit(x - 12, y, "≤");
			color_change(fin_color);
			gotoxylimit_line(x - 12, y - 2, "°", 13);
			gotoxylimit_line(x - 12, y + 7, "″", 13);
			gotoxylimit(x + 14, y - 1, "°");
			gotoxylimit(x + 14, y + 6, "″");
			color_change(tail_color);
			gotoxylimit(x + 20, y - 2, "⒏");
			gotoxylimit(x + 22, y - 2, "⒏");
			gotoxylimit(x + 18, y - 1, "⒏");
			gotoxylimit(x + 20, y - 1, "⒏");
			gotoxylimit(x + 22, y - 1, "⒏");
			gotoxylimit(x + 16, y, "⒏");
			gotoxylimit(x + 18, y, "⒑");
			gotoxylimit(x + 20, y, "⒏");
			gotoxylimit(x + 22, y, "″");
			gotoxylimit(x + 16, y + 1, "⒏");
			gotoxylimit(x + 18, y + 1, "⒏");
			gotoxylimit(x + 20, y + 1, "″");
			gotoxylimit(x + 16, y + 2, "⒏");
			gotoxylimit(x + 18, y + 2, "⒏");
			gotoxylimit(x + 16, y + 3, "⒏");
			gotoxylimit(x + 18, y + 3, "⒏");
			gotoxylimit(x + 16, y + 4, "⒏");
			gotoxylimit(x + 18, y + 4, "⒏");
			gotoxylimit(x + 20, y + 4, "°");
			gotoxylimit(x + 16, y + 5, "⒏");
			gotoxylimit(x + 18, y + 5, "⒑");
			gotoxylimit(x + 20, y + 5, "⒏");
			gotoxylimit(x + 22, y + 5, "°");
			gotoxylimit(x + 18, y + 6, "⒏");
			gotoxylimit(x + 20, y + 6, "⒏");
			gotoxylimit(x + 22, y + 6, "⒏");
			gotoxylimit(x + 20, y + 7, "⒏");
			gotoxylimit(x + 22, y + 7, "⒏");
			}
		}
		if (size == 31) {	//size 22x10
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 20, y + 1, "⒑");
				gotoxylimit(x + 20, y + 2, "| ");
				gotoxylimit(x + 20, y + 3, "| ");
				gotoxylimit(x + 20, y + 4, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 14);
				gotoxylimit_line(x - 12, y, "♂", 13);
				gotoxylimit_line(x + 16, y, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 16);
				gotoxylimit_line(x - 12, y + 2, "♂", 16);
				gotoxylimit_line(x - 12, y + 3, "♂", 16);
				gotoxylimit_line(x - 12, y + 4, "♂", 16);
				gotoxylimit_line(x - 12, y + 5, "♂", 16);
				gotoxylimit_line(x - 10, y + 6, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 14, y, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 13);
				gotoxylimit_line(x - 10, y + 7, "″", 13);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 6, "″");
				color_change(tail_color);
				gotoxylimit(x - 22, y - 2, "⒑");
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 22, y - 1, "⒑");
				gotoxylimit(x - 20, y - 1, "⒑");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 20, y, "″");
				gotoxylimit(x - 18, y, "⒑");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 18, y + 1, "″");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 18, y + 4, "°");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 14, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "°");
				gotoxylimit(x - 18, y + 5, "⒑");
				gotoxylimit(x - 16, y + 5, "⒏");
				gotoxylimit(x - 14, y + 5, "⒑");
				gotoxylimit(x - 22, y + 6, "⒑");
				gotoxylimit(x - 20, y + 6, "⒑");
				gotoxylimit(x - 18, y + 6, "⒑");
				gotoxylimit(x - 16, y + 6, "⒑");
				gotoxylimit(x - 22, y + 7, "⒑");
				gotoxylimit(x - 20, y + 7, "⒑");
				gotoxylimit(x - 18, y + 7, "⒑");
			}
			else
			{
			color_change(mouth_color);
			gotoxylimit(x - 18, y + 1, "⒏");
			gotoxylimit(x - 18, y + 2, " |");
			gotoxylimit(x - 18, y + 3, " |");
			gotoxylimit(x - 18, y + 4, "⒏");
			color_change(body_color);
			gotoxylimit_line(x - 14, y - 1, "♂", 14);
			gotoxylimit_line(x - 16, y, "♂", 2);
			gotoxylimit_line(x - 10, y, "♂", 13);
			gotoxylimit_line(x - 16, y + 1, "♂", 16);
			gotoxylimit_line(x - 16, y + 2, "♂", 16);
			gotoxylimit_line(x - 16, y + 3, "♂", 16);
			gotoxylimit_line(x - 16, y + 4, "♂", 16);
			gotoxylimit_line(x - 16, y + 5, "♂", 16);
			gotoxylimit_line(x - 14, y + 6, "♂", 14);	// 个 何盒
			color_change(eye_color);
			gotoxylimit(x - 12, y, "≤");
			color_change(fin_color);
			gotoxylimit_line(x - 12, y - 2, "°", 13);
			gotoxylimit_line(x - 12, y + 7, "″", 13);
			gotoxylimit(x + 14, y - 1, "°");
			gotoxylimit(x + 14, y + 6, "″");
			color_change(tail_color);
			gotoxylimit(x + 20, y - 2, "⒏");
			gotoxylimit(x + 22, y - 2, "⒏");
			gotoxylimit(x + 24, y - 2, "⒏");
			gotoxylimit(x + 18, y - 1, "⒏");
			gotoxylimit(x + 20, y - 1, "⒏");
			gotoxylimit(x + 22, y - 1, "⒏");
			gotoxylimit(x + 24, y - 1, "⒏");
			gotoxylimit(x + 16, y, "⒏");
			gotoxylimit(x + 18, y, "⒑");
			gotoxylimit(x + 20, y, "⒏");
			gotoxylimit(x + 22, y, "″");
			gotoxylimit(x + 16, y + 1, "⒏");
			gotoxylimit(x + 18, y + 1, "⒏");
			gotoxylimit(x + 20, y + 1, "″");
			gotoxylimit(x + 16, y + 2, "⒏");
			gotoxylimit(x + 18, y + 2, "⒏");
			gotoxylimit(x + 16, y + 3, "⒏");
			gotoxylimit(x + 18, y + 3, "⒏");
			gotoxylimit(x + 16, y + 4, "⒏");
			gotoxylimit(x + 18, y + 4, "⒏");
			gotoxylimit(x + 20, y + 4, "°");
			gotoxylimit(x + 16, y + 5, "⒏");
			gotoxylimit(x + 18, y + 5, "⒑");
			gotoxylimit(x + 20, y + 5, "⒏");
			gotoxylimit(x + 22, y + 5, "°");
			gotoxylimit(x + 18, y + 6, "⒏");
			gotoxylimit(x + 20, y + 6, "⒏");
			gotoxylimit(x + 22, y + 6, "⒏");
			gotoxylimit(x + 24, y + 6, "⒏");
			gotoxylimit(x + 20, y + 7, "⒏");
			gotoxylimit(x + 22, y + 7, "⒏");
			gotoxylimit(x + 24, y + 7, "⒏");
			}
		}
		if (size == 32) {	//size 22x11
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 20, y + 1, "⒑");
				gotoxylimit(x + 20, y + 2, "| ");
				gotoxylimit(x + 20, y + 3, "| ");
				gotoxylimit(x + 20, y + 4, "| ");
				gotoxylimit(x + 20, y + 5, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 10, y - 1, "♂", 14);
				gotoxylimit_line(x - 12, y, "♂", 16);
				gotoxylimit_line(x - 12, y + 1, "♂", 13);
				gotoxylimit_line(x + 16, y + 1, "♂", 2);
				gotoxylimit_line(x - 12, y + 2, "♂", 16);
				gotoxylimit_line(x - 12, y + 3, "♂", 16);
				gotoxylimit_line(x - 12, y + 4, "♂", 16);
				gotoxylimit_line(x - 12, y + 5, "♂", 16);
				gotoxylimit_line(x - 12, y + 6, "♂", 16);
				gotoxylimit_line(x - 10, y + 7, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 14, y + 1, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 10, y - 2, "°", 13);
				gotoxylimit_line(x - 10, y + 8, "″", 13);
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 7, "″");
				color_change(tail_color);
				gotoxylimit(x - 22, y - 2, "⒑");
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 22, y - 1, "⒑");
				gotoxylimit(x - 20, y - 1, "⒑");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 20, y, "″");
				gotoxylimit(x - 18, y, "⒑");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 18, y + 1, "″");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 14, y + 4, "⒑");
				gotoxylimit(x - 18, y + 5, "°");
				gotoxylimit(x - 16, y + 5, "⒑");
				gotoxylimit(x - 14, y + 5, "⒑");
				gotoxylimit(x - 20, y + 6, "°");
				gotoxylimit(x - 18, y + 6, "⒑");
				gotoxylimit(x - 16, y + 6, "⒏");
				gotoxylimit(x - 14, y + 6, "⒑");
				gotoxylimit(x - 22, y + 7, "⒑");
				gotoxylimit(x - 20, y + 7, "⒑");
				gotoxylimit(x - 18, y + 7, "⒑");
				gotoxylimit(x - 16, y + 7, "⒑");
				gotoxylimit(x - 22, y + 8, "⒑");
				gotoxylimit(x - 20, y + 8, "⒑");
				gotoxylimit(x - 18, y + 8, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 18, y + 1, "⒏");
				gotoxylimit(x - 18, y + 2, " |");
				gotoxylimit(x - 18, y + 3, " |");
				gotoxylimit(x - 18, y + 4, " |");
				gotoxylimit(x - 18, y + 5, "⒏");
				color_change(body_color);
				gotoxylimit_line(x - 14, y - 1, "♂", 14);
				gotoxylimit_line(x - 16, y, "♂", 16);
				gotoxylimit_line(x - 16, y + 1, "♂", 2);
				gotoxylimit_line(x - 10, y + 1, "♂", 13);
				gotoxylimit_line(x - 16, y + 2, "♂", 16);
				gotoxylimit_line(x - 16, y + 3, "♂", 16);
				gotoxylimit_line(x - 16, y + 4, "♂", 16);
				gotoxylimit_line(x - 16, y + 5, "♂", 16);
				gotoxylimit_line(x - 16, y + 6, "♂", 16);
				gotoxylimit_line(x - 14, y + 7, "♂", 14);// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 12, y + 1, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 12, y - 2, "°", 13);
				gotoxylimit_line(x - 12, y + 8, "″", 13);
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 7, "″");
				color_change(tail_color);
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 22, y - 2, "⒏");
				gotoxylimit(x + 24, y - 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "⒏");
				gotoxylimit(x + 22, y - 1, "⒏");
				gotoxylimit(x + 24, y - 1, "⒏");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 20, y, "⒏");
				gotoxylimit(x + 22, y, "″");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 20, y + 1, "″");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒏");
				gotoxylimit(x + 16, y + 4, "⒏");
				gotoxylimit(x + 18, y + 4, "⒏");
				gotoxylimit(x + 16, y + 5, "⒏");
				gotoxylimit(x + 18, y + 5, "⒏");
				gotoxylimit(x + 20, y + 5, "°");
				gotoxylimit(x + 16, y + 6, "⒏");
				gotoxylimit(x + 18, y + 6, "⒑");
				gotoxylimit(x + 20, y + 6, "⒏");
				gotoxylimit(x + 22, y + 6, "°");
				gotoxylimit(x + 18, y + 7, "⒏");
				gotoxylimit(x + 20, y + 7, "⒏");
				gotoxylimit(x + 22, y + 7, "⒏");
				gotoxylimit(x + 24, y + 7, "⒏");
				gotoxylimit(x + 20, y + 8, "⒏");
				gotoxylimit(x + 22, y + 8, "⒏");
				gotoxylimit(x + 24, y + 8, "⒏");
			}
		}
		if (size == 33) {	//size 23x11
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 22, y + 1, "⒑");
				gotoxylimit(x + 22, y + 2, "| ");
				gotoxylimit(x + 22, y + 3, "| ");
				gotoxylimit(x + 22, y + 4, "| ");
				gotoxylimit(x + 22, y + 5, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 8, y - 1, "♂", 14);
				gotoxylimit_line(x - 12, y, "♂", 17);
				gotoxylimit_line(x - 12, y + 1, "♂", 14);
				gotoxylimit_line(x + 18, y + 1, "♂", 2);
				gotoxylimit_line(x - 12, y + 2, "♂", 17);
				gotoxylimit_line(x - 12, y + 3, "♂", 17);
				gotoxylimit_line(x - 12, y + 4, "♂", 17);
				gotoxylimit_line(x - 12, y + 5, "♂", 17);
				gotoxylimit_line(x - 12, y + 6, "♂", 17);
				gotoxylimit_line(x - 8, y + 7, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 16, y + 1, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 8, y - 2, "°", 13);
				gotoxylimit_line(x - 8, y + 8, "″", 13);
				gotoxylimit_line(x - 12, y - 1, "°", 2);
				gotoxylimit_line(x - 12, y + 7, "″", 2);
				color_change(tail_color);
				gotoxylimit(x - 22, y - 2, "⒑");
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 22, y - 1, "⒑");
				gotoxylimit(x - 20, y - 1, "⒑");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 20, y, "″");
				gotoxylimit(x - 18, y, "⒑");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 18, y + 1, "″");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 14, y + 4, "⒑");
				gotoxylimit(x - 18, y + 5, "°");
				gotoxylimit(x - 16, y + 5, "⒑");
				gotoxylimit(x - 14, y + 5, "⒑");
				gotoxylimit(x - 20, y + 6, "°");
				gotoxylimit(x - 18, y + 6, "⒑");
				gotoxylimit(x - 16, y + 6, "⒏");
				gotoxylimit(x - 14, y + 6, "⒑");
				gotoxylimit(x - 22, y + 7, "⒑");
				gotoxylimit(x - 20, y + 7, "⒑");
				gotoxylimit(x - 18, y + 7, "⒑");
				gotoxylimit(x - 16, y + 7, "⒑");
				gotoxylimit(x - 22, y + 8, "⒑");
				gotoxylimit(x - 20, y + 8, "⒑");
				gotoxylimit(x - 18, y + 8, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 20, y + 1, "⒏");
				gotoxylimit(x - 20, y + 2, " |");
				gotoxylimit(x - 20, y + 3, " |");
				gotoxylimit(x - 20, y + 4, " |");
				gotoxylimit(x - 20, y + 5, "⒏");
				color_change(body_color);
				gotoxylimit_line(x - 16, y - 1, "♂", 14);
				gotoxylimit_line(x - 18, y, "♂", 17);
				gotoxylimit_line(x - 18, y + 1, "♂", 2);
				gotoxylimit_line(x - 12, y + 1, "♂", 14);
				gotoxylimit_line(x - 18, y + 2, "♂", 17);
				gotoxylimit_line(x - 18, y + 3, "♂", 17);
				gotoxylimit_line(x - 18, y + 4, "♂", 17);
				gotoxylimit_line(x - 18, y + 5, "♂", 17);
				gotoxylimit_line(x - 18, y + 6, "♂", 17);
				gotoxylimit_line(x - 16, y + 7, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 14, y + 1, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 14, y - 2, "°", 13);
				gotoxylimit_line(x - 14, y + 8, "″", 13);
				gotoxylimit_line(x + 12, y - 1, "°", 2);
				gotoxylimit_line(x + 12, y + 7, "″", 2);
				color_change(tail_color);
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 22, y - 2, "⒏");
				gotoxylimit(x + 24, y - 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "⒏");
				gotoxylimit(x + 22, y - 1, "⒏");
				gotoxylimit(x + 24, y - 1, "⒏");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 20, y, "⒏");
				gotoxylimit(x + 22, y, "″");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 20, y + 1, "″");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒏");
				gotoxylimit(x + 16, y + 4, "⒏");
				gotoxylimit(x + 18, y + 4, "⒏");
				gotoxylimit(x + 16, y + 5, "⒏");
				gotoxylimit(x + 18, y + 5, "⒏");
				gotoxylimit(x + 20, y + 5, "°");
				gotoxylimit(x + 16, y + 6, "⒏");
				gotoxylimit(x + 18, y + 6, "⒑");
				gotoxylimit(x + 20, y + 6, "⒏");
				gotoxylimit(x + 22, y + 6, "°");
				gotoxylimit(x + 18, y + 7, "⒏");
				gotoxylimit(x + 20, y + 7, "⒏");
				gotoxylimit(x + 22, y + 7, "⒏");
				gotoxylimit(x + 24, y + 7, "⒏");
				gotoxylimit(x + 20, y + 8, "⒏");
				gotoxylimit(x + 22, y + 8, "⒏");
				gotoxylimit(x + 24, y + 8, "⒏");
			}
		}
		if (size == 34) {	//size 24x11
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 24, y + 1, "⒑");
				gotoxylimit(x + 24, y + 2, "| ");
				gotoxylimit(x + 24, y + 3, "| ");
				gotoxylimit(x + 24, y + 4, "| ");
				gotoxylimit(x + 24, y + 5, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 8, y - 1, "♂", 14);
				gotoxylimit_line(x - 12, y, "♂", 17);
				gotoxylimit_line(x - 12, y + 1, "♂", 14);
				gotoxylimit_line(x + 18, y + 1, "♂", 3);
				gotoxylimit_line(x - 12, y + 2, "♂", 18);
				gotoxylimit_line(x - 12, y + 3, "♂", 18);
				gotoxylimit_line(x - 12, y + 4, "♂", 18);
				gotoxylimit_line(x - 12, y + 5, "♂", 18);
				gotoxylimit_line(x - 12, y + 6, "♂", 17);
				gotoxylimit_line(x - 8, y + 7, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 16, y + 1, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 8, y - 2, "°", 13);
				gotoxylimit_line(x - 8, y + 8, "″", 13);
				gotoxylimit_line(x - 12, y - 1, "°", 2);
				gotoxylimit_line(x - 12, y + 7, "″", 2);
				color_change(tail_color);
				gotoxylimit(x - 22, y - 2, "⒑");
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
				gotoxylimit(x - 22, y - 1, "⒑");
				gotoxylimit(x - 20, y - 1, "⒑");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 20, y, "″");
				gotoxylimit(x - 18, y, "⒑");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 18, y + 1, "″");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 14, y + 4, "⒑");
				gotoxylimit(x - 18, y + 5, "°");
				gotoxylimit(x - 16, y + 5, "⒑");
				gotoxylimit(x - 14, y + 5, "⒑");
				gotoxylimit(x - 20, y + 6, "°");
				gotoxylimit(x - 18, y + 6, "⒑");
				gotoxylimit(x - 16, y + 6, "⒏");
				gotoxylimit(x - 14, y + 6, "⒑");
				gotoxylimit(x - 22, y + 7, "⒑");
				gotoxylimit(x - 20, y + 7, "⒑");
				gotoxylimit(x - 18, y + 7, "⒑");
				gotoxylimit(x - 16, y + 7, "⒑");
				gotoxylimit(x - 22, y + 8, "⒑");
				gotoxylimit(x - 20, y + 8, "⒑");
				gotoxylimit(x - 18, y + 8, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 22, y + 1, "⒏");
				gotoxylimit(x - 22, y + 2, " |");
				gotoxylimit(x - 22, y + 3, " |");
				gotoxylimit(x - 22, y + 4, " |");
				gotoxylimit(x - 22, y + 5, "⒏");
				color_change(body_color);
				gotoxylimit_line(x - 16, y - 1, "♂", 14);
				gotoxylimit_line(x - 18, y, "♂", 17);
				gotoxylimit_line(x - 20, y + 1, "♂", 3);
				gotoxylimit_line(x - 12, y + 1, "♂", 14);
				gotoxylimit_line(x - 20, y + 2, "♂", 18);
				gotoxylimit_line(x - 20, y + 3, "♂", 18);
				gotoxylimit_line(x - 20, y + 4, "♂", 18);
				gotoxylimit_line(x - 20, y + 5, "♂", 18);
				gotoxylimit_line(x - 18, y + 6, "♂", 17);
				gotoxylimit_line(x - 16, y + 7, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 14, y + 1, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 14, y - 2, "°", 13);
				gotoxylimit_line(x - 14, y + 8, "″", 13);
				gotoxylimit_line(x + 12, y - 1, "°", 2);
				gotoxylimit_line(x + 12, y + 7, "″", 2);
				color_change(tail_color);
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 22, y - 2, "⒏");
				gotoxylimit(x + 24, y - 2, "⒏");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "⒏");
				gotoxylimit(x + 22, y - 1, "⒏");
				gotoxylimit(x + 24, y - 1, "⒏");
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 20, y, "⒏");
				gotoxylimit(x + 22, y, "″");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 20, y + 1, "″");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒏");
				gotoxylimit(x + 16, y + 4, "⒏");
				gotoxylimit(x + 18, y + 4, "⒏");
				gotoxylimit(x + 16, y + 5, "⒏");
				gotoxylimit(x + 18, y + 5, "⒏");
				gotoxylimit(x + 20, y + 5, "°");
				gotoxylimit(x + 16, y + 6, "⒏");
				gotoxylimit(x + 18, y + 6, "⒑");
				gotoxylimit(x + 20, y + 6, "⒏");
				gotoxylimit(x + 22, y + 6, "°");
				gotoxylimit(x + 18, y + 7, "⒏");
				gotoxylimit(x + 20, y + 7, "⒏");
				gotoxylimit(x + 22, y + 7, "⒏");
				gotoxylimit(x + 24, y + 7, "⒏");
				gotoxylimit(x + 20, y + 8, "⒏");
				gotoxylimit(x + 22, y + 8, "⒏");
				gotoxylimit(x + 24, y + 8, "⒏");
			}
		}
		if (size == 35) {	//size 25x11
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 26, y + 1, "⒑");
				gotoxylimit(x + 26, y + 2, "| ");
				gotoxylimit(x + 26, y + 3, "| ");
				gotoxylimit(x + 26, y + 4, "| ");
				gotoxylimit(x + 26, y + 5, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 6, y - 1, "♂", 14);
				gotoxylimit_line(x - 10, y, "♂", 17);
				gotoxylimit_line(x - 12, y + 1, "♂", 15);
				gotoxylimit_line(x + 20, y + 1, "♂", 3);
				gotoxylimit_line(x - 12, y + 2, "♂", 19);
				gotoxylimit_line(x - 12, y + 3, "♂", 19);
				gotoxylimit_line(x - 12, y + 4, "♂", 19);
				gotoxylimit_line(x - 12, y + 5, "♂", 19);
				gotoxylimit_line(x - 10, y + 6, "♂", 17);
				gotoxylimit_line(x - 6, y + 7, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 18, y + 1, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 6, y - 2, "°", 13);
				gotoxylimit_line(x - 6, y + 8, "″", 13);
				gotoxylimit_line(x - 10, y - 1, "°", 2);
				gotoxylimit_line(x - 10, y + 7, "″", 2);
				gotoxylimit(x - 12, y, "°");
				gotoxylimit(x - 12, y + 6, "″");
				color_change(tail_color);
				gotoxylimit(x - 22, y - 2, "⒑");
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 22, y - 1, "⒑");
				gotoxylimit(x - 20, y - 1, "⒑");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 22, y, "″");
				gotoxylimit(x - 20, y, "⒑");
				gotoxylimit(x - 18, y, "⒑");
				gotoxylimit(x - 16, y, "⒑");
				gotoxylimit(x - 20, y + 1, "″");
				gotoxylimit(x - 18, y + 1, "⒑");
				gotoxylimit(x - 16, y + 1, "⒏");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 18, y + 2, "″");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 14, y + 3, "⒑");
				gotoxylimit(x - 18, y + 4, "°");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 14, y + 4, "⒑");
				gotoxylimit(x - 20, y + 5, "°");
				gotoxylimit(x - 18, y + 5, "⒑");
				gotoxylimit(x - 16, y + 5, "⒏");
				gotoxylimit(x - 14, y + 5, "⒑");
				gotoxylimit(x - 22, y + 6, "°");
				gotoxylimit(x - 20, y + 6, "⒑");
				gotoxylimit(x - 18, y + 6, "⒑");
				gotoxylimit(x - 16, y + 6, "⒑");
				gotoxylimit(x - 22, y + 7, "⒑");
				gotoxylimit(x - 20, y + 7, "⒑");
				gotoxylimit(x - 18, y + 7, "⒑");
				gotoxylimit(x - 22, y + 8, "⒑");
				gotoxylimit(x - 20, y + 8, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 22, y + 1, "⒏");
				gotoxylimit(x - 22, y + 2, " |");
				gotoxylimit(x - 22, y + 3, " |");
				gotoxylimit(x - 22, y + 4, " |");
				gotoxylimit(x - 22, y + 5, "⒏");
				color_change(body_color);
				gotoxylimit_line(x - 16, y - 1, "♂", 14);
				gotoxylimit_line(x - 18, y, "♂", 17);
				gotoxylimit_line(x - 20, y + 1, "♂", 3);
				gotoxylimit_line(x - 12, y + 1, "♂", 15);
				gotoxylimit_line(x - 20, y + 2, "♂", 19);
				gotoxylimit_line(x - 20, y + 3, "♂", 19);
				gotoxylimit_line(x - 20, y + 4, "♂", 19);
				gotoxylimit_line(x - 20, y + 5, "♂", 19);
				gotoxylimit_line(x - 18, y + 6, "♂", 17);
				gotoxylimit_line(x - 16, y + 7, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 14, y + 1, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 14, y - 2, "°", 13);
				gotoxylimit_line(x - 14, y + 8, "″", 13);
				gotoxylimit_line(x + 12, y - 1, "°", 2);
				gotoxylimit_line(x + 12, y + 7, "″", 2);
				gotoxylimit(x + 16, y, "°");
				gotoxylimit(x + 16, y + 6, "″");
				color_change(tail_color);
				gotoxylimit(x + 26, y - 2, "⒏");
				gotoxylimit(x + 24, y - 2, "⒏");
				gotoxylimit(x + 22, y - 1, "⒏");
				gotoxylimit(x + 24, y - 1, "⒏");
				gotoxylimit(x + 26, y - 1, "⒏");
				gotoxylimit(x + 20, y, "⒏");
				gotoxylimit(x + 22, y, "⒏");
				gotoxylimit(x + 24, y, "⒏");
				gotoxylimit(x + 26, y, "″");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 20, y + 1, "⒑");
				gotoxylimit(x + 22, y + 1, "⒏");
				gotoxylimit(x + 24, y + 1, "″");
				gotoxylimit(x + 18, y + 2, "⒏");
				gotoxylimit(x + 20, y + 2, "⒏");
				gotoxylimit(x + 22, y + 2, "″");
				gotoxylimit(x + 18, y + 3, "⒏");
				gotoxylimit(x + 20, y + 3, "⒏");
				gotoxylimit(x + 18, y + 4, "⒏");
				gotoxylimit(x + 20, y + 4, "⒏");
				gotoxylimit(x + 22, y + 4, "°");
				gotoxylimit(x + 18, y + 5, "⒏");
				gotoxylimit(x + 20, y + 5, "⒑");
				gotoxylimit(x + 22, y + 5, "⒏");
				gotoxylimit(x + 24, y + 5, "°");
				gotoxylimit(x + 20, y + 6, "⒏");
				gotoxylimit(x + 22, y + 6, "⒏");
				gotoxylimit(x + 24, y + 6, "⒏");
				gotoxylimit(x + 26, y + 6, "°");
				gotoxylimit(x + 22, y + 7, "⒏");
				gotoxylimit(x + 24, y + 7, "⒏");
				gotoxylimit(x + 26, y + 7, "⒏");
				gotoxylimit(x + 24, y + 8, "⒏");
				gotoxylimit(x + 26, y + 8, "⒏");
			}
		}
		if (size == 36) {	//size 26x11
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxylimit(x + 26, y + 1, "⒑");
				gotoxylimit(x + 26, y + 2, "| ");
				gotoxylimit(x + 26, y + 3, "| ");
				gotoxylimit(x + 26, y + 4, "| ");
				gotoxylimit(x + 26, y + 5, "⒑");
				color_change(body_color);
				gotoxylimit_line(x - 6, y - 1, "♂", 14);
				gotoxylimit_line(x - 10, y, "♂", 17);
				gotoxylimit_line(x - 14, y + 1, "♂", 16);
				gotoxylimit_line(x + 20, y + 1, "♂", 3);
				gotoxylimit_line(x - 14, y + 2, "♂", 20);
				gotoxylimit_line(x - 14, y + 3, "♂", 20);
				gotoxylimit_line(x - 14, y + 4, "♂", 20);
				gotoxylimit_line(x - 14, y + 5, "♂", 20);
				gotoxylimit_line(x - 10, y + 6, "♂", 17);
				gotoxylimit_line(x - 6, y + 7, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 18, y + 1, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 6, y - 2, "°", 13);
				gotoxylimit_line(x - 6, y + 8, "″", 13);
				gotoxylimit_line(x - 10, y - 1, "°", 2);
				gotoxylimit_line(x - 10, y + 7, "″", 2);
				gotoxylimit_line(x - 14, y, "°", 2);
				gotoxylimit_line(x - 14, y + 6, "″", 2);
				color_change(tail_color);
				gotoxylimit(x - 24, y - 2, "⒑");
				gotoxylimit(x - 22, y - 2, "⒑");
				gotoxylimit(x - 24, y - 1, "⒑");
				gotoxylimit(x - 22, y - 1, "⒑");
				gotoxylimit(x - 20, y - 1, "⒑");
				gotoxylimit(x - 24, y, "″");
				gotoxylimit(x - 22, y, "⒑");
				gotoxylimit(x - 20, y, "⒑");
				gotoxylimit(x - 18, y, "⒑");
				gotoxylimit(x - 22, y + 1, "″");
				gotoxylimit(x - 20, y + 1, "⒑");
				gotoxylimit(x - 18, y + 1, "⒏");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 20, y + 2, "″");
				gotoxylimit(x - 18, y + 2, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 18, y + 3, "⒑");
				gotoxylimit(x - 16, y + 3, "⒑");
				gotoxylimit(x - 20, y + 4, "°");
				gotoxylimit(x - 18, y + 4, "⒑");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 22, y + 5, "°");
				gotoxylimit(x - 20, y + 5, "⒑");
				gotoxylimit(x - 18, y + 5, "⒏");
				gotoxylimit(x - 16, y + 5, "⒑");
				gotoxylimit(x - 24, y + 6, "°");
				gotoxylimit(x - 22, y + 6, "⒑");
				gotoxylimit(x - 20, y + 6, "⒑");
				gotoxylimit(x - 18, y + 6, "⒑");
				gotoxylimit(x - 24, y + 7, "⒑");
				gotoxylimit(x - 22, y + 7, "⒑");
				gotoxylimit(x - 20, y + 7, "⒑");
				gotoxylimit(x - 24, y + 8, "⒑");
				gotoxylimit(x - 22, y + 8, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x - 22, y + 1, "⒏");
				gotoxylimit(x - 22, y + 2, " |");
				gotoxylimit(x - 22, y + 3, " |");
				gotoxylimit(x - 22, y + 4, " |");
				gotoxylimit(x - 22, y + 5, "⒏");
				color_change(body_color);
				gotoxylimit_line(x - 16, y - 1, "♂", 14);
				gotoxylimit_line(x - 18, y, "♂", 17);
				gotoxylimit_line(x - 20, y + 1, "♂", 3);
				gotoxylimit_line(x - 12, y + 1, "♂", 16);
				gotoxylimit_line(x - 20, y + 2, "♂", 20);
				gotoxylimit_line(x - 20, y + 3, "♂", 20);
				gotoxylimit_line(x - 20, y + 4, "♂", 20);
				gotoxylimit_line(x - 20, y + 5, "♂", 20);
				gotoxylimit_line(x - 18, y + 6, "♂", 17);
				gotoxylimit_line(x - 16, y + 7, "♂", 14);	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 14, y + 1, "≤");
				color_change(fin_color);
				gotoxylimit_line(x - 14, y - 2, "°", 13);
				gotoxylimit_line(x - 14, y + 8, "″", 13);
				gotoxylimit_line(x + 12, y - 1, "°", 2);
				gotoxylimit_line(x + 12, y + 7, "″", 2);
				gotoxylimit_line(x + 16, y, "°", 2);
				gotoxylimit_line(x + 16, y + 6, "″", 2);
				color_change(tail_color);
				gotoxylimit(x + 28, y - 2, "⒏");
				gotoxylimit(x + 26, y - 2, "⒏");
				gotoxylimit(x + 24, y - 1, "⒏");
				gotoxylimit(x + 26, y - 1, "⒏");
				gotoxylimit(x + 28, y - 1, "⒏");
				gotoxylimit(x + 22, y, "⒏");
				gotoxylimit(x + 24, y, "⒏");
				gotoxylimit(x + 26, y, "⒏");
				gotoxylimit(x + 28, y, "″");
				gotoxylimit(x + 20, y + 1, "⒏");
				gotoxylimit(x + 22, y + 1, "⒑");
				gotoxylimit(x + 24, y + 1, "⒏");
				gotoxylimit(x + 26, y + 1, "″");
				gotoxylimit(x + 20, y + 2, "⒏");
				gotoxylimit(x + 22, y + 2, "⒏");
				gotoxylimit(x + 24, y + 2, "″");
				gotoxylimit(x + 20, y + 3, "⒏");
				gotoxylimit(x + 22, y + 3, "⒏");
				gotoxylimit(x + 20, y + 4, "⒏");
				gotoxylimit(x + 22, y + 4, "⒏");
				gotoxylimit(x + 24, y + 4, "°");
				gotoxylimit(x + 20, y + 5, "⒏");
				gotoxylimit(x + 22, y + 5, "⒑");
				gotoxylimit(x + 24, y + 5, "⒏");
				gotoxylimit(x + 26, y + 5, "°");
				gotoxylimit(x + 22, y + 6, "⒏");
				gotoxylimit(x + 24, y + 6, "⒏");
				gotoxylimit(x + 26, y + 6, "⒏");
				gotoxylimit(x + 28, y + 6, "°");
				gotoxylimit(x + 24, y + 7, "⒏");
				gotoxylimit(x + 26, y + 7, "⒏");
				gotoxylimit(x + 28, y + 7, "⒏");
				gotoxylimit(x + 26, y + 8, "⒏");
				gotoxylimit(x + 28, y + 8, "⒏");
			}
		}
		if (size == 37) {
			if(to_right == 0)
			ending_image(x, y, 8, 9, 10, 11, 12);
		}
}
void ending_image(int x, int y, int color1, int color2, int color3, int color4, int color5) {
	y += 5;
	gotoxylimit_line(x + 10, y - 4, "♂", 9);
	gotoxylimit_line(x + 6, y - 3, "♂", 2);
	gotoxylimit(x + 16, y - 3, "♂");
	gotoxylimit_line(x + 28, y - 3, "♂", 4);
	gotoxylimit_line(x + 2, y - 2, "♂", 2);
	gotoxylimit(x + 18, y - 2, "♂");
	gotoxylimit(x + 22, y - 2, "♂");
	gotoxylimit(x + 30, y - 2, "♂");
	gotoxylimit_line(x + 36, y - 2, "♂", 2);
	gotoxylimit(x, y - 1, "♂");
	gotoxylimit(x + 16, y - 1, "♂");
	gotoxylimit(x + 18, y - 1, "♂");
	gotoxylimit(x + 22, y - 1, "♂");
	gotoxylimit(x + 26, y - 1, "♂");
	gotoxylimit(x + 30, y - 1, "♂");
	gotoxylimit(x + 40, y - 1, "♂");
	gotoxylimit(x, y, "♂");
	gotoxylimit(x + 18, y, "♂");
	gotoxylimit(x + 22, y, "♂");
	gotoxylimit(x + 26, y, "♂");
	gotoxylimit(x + 34, y, "♂");
	gotoxylimit(x + 42, y, "♂");
	gotoxylimit(x, y + 1, "♂");
	gotoxylimit(x + 18, y + 1, "♂");
	gotoxylimit(x + 34, y + 1, "♂");
	gotoxylimit(x + 42, y + 1, "♂");
	gotoxylimit(x + 2, y + 2, "♂");
	gotoxylimit(x + 18, y + 2, "♂");
	gotoxylimit(x + 22, y + 2, "♂");
	gotoxylimit(x + 30, y + 2, "♂");
	gotoxylimit(x + 34, y + 2, "♂");
	gotoxylimit(x + 40, y + 2, "♂");
	gotoxylimit(x + 4, y + 3, "♂");
	gotoxylimit(x + 6, y + 3, "♂");
	gotoxylimit(x + 18, y + 3, "♂");
	gotoxylimit(x + 22, y + 3, "♂");
	gotoxylimit(x + 26, y + 3, "♂");
	gotoxylimit(x + 30, y + 3, "♂");
	gotoxylimit(x + 38, y + 3, "♂");
	gotoxylimit_line(x + 8, y + 4, "♂", 3);
	gotoxylimit(x + 16, y + 4, "♂");
	gotoxylimit(x + 26, y + 4, "♂");
	gotoxylimit(x + 36, y + 4, "♂");
	gotoxylimit(x + 34, y + 4, "♂");
	gotoxylimit_line(x + 14, y + 5, "♂", 10);  // 6 8 7: 啊款单 厚框, 抛滴府

	color_change(color2);
	gotoxylimit_line(x + 10, y - 3, "♂", 3);
	gotoxylimit_line(x + 18, y - 3, "♂", 5);
	gotoxylimit_line(x + 6, y - 2, "♂", 6);
	gotoxylimit(x + 20, y - 2, "♂");
	gotoxylimit_line(x + 24, y - 2, "♂", 3);
	gotoxylimit_line(x + 32, y - 2, "♂", 2);
	gotoxylimit_line(x + 2, y - 1, "♂", 7);
	gotoxylimit(x + 20, y - 1, "♂");
	gotoxylimit(x + 24, y - 1, "♂");
	gotoxylimit(x + 28, y - 1, "♂");
	gotoxylimit_line(x + 32, y - 1, "♂", 4);
	gotoxylimit_line(x + 2, y, "♂", 8);
	gotoxylimit(x + 20, y, "♂");
	gotoxylimit(x + 24, y, "♂");
	gotoxylimit_line(x + 28, y, "♂", 3);
	gotoxylimit_line(x + 36, y, "♂", 3);
	gotoxylimit_line(x + 2, y + 1, "♂", 8);
	gotoxylimit_line(x + 20, y + 1, "♂", 7);
	gotoxylimit_line(x + 36, y + 1, "♂", 3);
	gotoxylimit_line(x + 4, y + 2, "♂", 7);
	gotoxylimit(x + 20, y + 2, "♂");
	gotoxylimit_line(x + 24, y + 2, "♂", 3);
	gotoxylimit(x + 32, y + 2, "♂");
	gotoxylimit_line(x + 36, y + 2, "♂", 2);
	gotoxylimit_line(x + 8, y + 3, "♂", 5);
	gotoxylimit(x + 20, y + 3, "♂");
	gotoxylimit(x + 24, y + 3, "♂");
	gotoxylimit(x + 28, y + 3, "♂");
	gotoxylimit_line(x + 32, y + 3, "♂", 3);
	gotoxylimit(x + 14, y + 4, "♂");
	gotoxylimit_line(x + 18, y + 4, "♂", 4);
	gotoxylimit_line(x + 28, y + 4, "♂", 3);

	color_change(color3);
	gotoxylimit(x + 10, y - 1, "≮");

	color_change(color4);
	gotoxylimit_line(x + 48, y - 4, "♂", 3);
	gotoxylimit_line(x + 44, y - 3, "♂", 4);
	gotoxylimit_line(x + 42, y - 2, "♂", 4);
	gotoxylimit_line(x + 42, y - 1, "♂", 3);
	gotoxylimit(x + 44, y, "♂");
	gotoxylimit(x + 44, y + 1, "♂");
	gotoxylimit_line(x + 42, y + 2, "♂", 3);
	gotoxylimit_line(x + 42, y + 3, "♂", 4);
	gotoxylimit_line(x + 44, y + 4, "♂", 4);
	gotoxylimit_line(x + 48, y + 5, "♂", 3);
	color_change(color5);
	gotoxylimit_line(x + 12, y - 5, "°", 8);
	gotoxylimit_line(x + 28, y - 4, "°", 2);
	gotoxylimit_line(x + 12, y + 5, "″", 1);
	gotoxylimit_line(x + 14, y + 6, "″", 9);
}