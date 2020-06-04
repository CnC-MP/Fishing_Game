#pragma once

#include "interface_design_tool.h"
#include <cstdio>

void player_fish_image(int size, bool to_right, int x, int y, int mouth_color, int fin_color, int tail_color, int body_color, int eye_color);

void player_fish_image(int size, bool to_right, int x, int y, int mouth_color, int fin_color, int tail_color, int body_color, int eye_color) {
	if (size == 1) {		//size 2x1
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
	if (size == 2) {	//size 2x1
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 2, y);
			printf(">>"); // 个 何盒
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("<<"); // 个 何盒
		}
	}
	if (size == 3) {	//size 3x1
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 4, y);
			printf(">>♂"); // 个 何盒
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂<<"); // 个 何盒
		}
	}
	if (size == 4) {	//size 3x2
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 4, y);
			printf(">>♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 2, y - 1);
			printf("°");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂<<"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°");
		}
	}
	if (size == 5) {	//size 3x3
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 4, y);
			printf(">>♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 2, y - 1);
			printf("°");
			gotoxy(x - 2, y + 1);
			printf("″");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏");
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂<<"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°");
			gotoxy(x + 2, y + 1);
			printf("″");
		}
	}
	if (size == 6) {	//size 4x3
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 6, y);
			printf(">>♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 4, y - 1);
			printf("°°");
			gotoxy(x - 4, y + 1);
			printf("″″");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏"); 
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂♂<<"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°");
			gotoxy(x + 2, y + 1);
			printf("″″");
		}
	}
	if (size == 7) {	//size 5x3
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 6, y);
			printf("♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x - 6, y - 1);
			printf("°°°");
			gotoxy(x - 6, y + 1);
			printf("″″″");
			color_change(tail_color);
			gotoxy(x - 8, y);
			printf(">>");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏");
			color_change(body_color);
			gotoxy(x + 2, y);
			printf("♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°°");
			gotoxy(x + 2, y + 1);
			printf("″″″");
			color_change(tail_color);
			gotoxy(x + 8, y);
			printf("<<");
		}
	}
	if (size == 8) {
		if (to_right == 0) {  //size 6x4
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			gotoxy(x, y + 1);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 6, y);
			printf("♂♂♂");
			gotoxy(x - 6, y + 1);
			printf("♂♂♂");// 个 何盒
			color_change(fin_color);
			gotoxy(x - 6, y - 1);
			printf("°°°");
			gotoxy(x - 6, y + 2);
			printf("″″″");
			color_change(tail_color);
			gotoxy(x - 8, y);
			printf("⒑");
			gotoxy(x - 8, y + 1);
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
			printf("♂♂♂"); 
			gotoxy(x + 2, y + 1);
			printf("♂♂♂"); // 个 何盒
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("°°°");
			gotoxy(x + 2, y + 2);
			printf("″″″");
			color_change(tail_color);
			gotoxy(x + 8, y);
			printf("⒏");
			gotoxy(x + 8, y + 1);
			printf("⒏");
		}
	}
	if (size == 9) {	//size 6x4
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
			printf("♂♂♂♂");// 个 何盒
			color_change(fin_color);
			gotoxy(x - 8, y - 1);
			printf("°°°");
			gotoxy(x - 8, y + 2);
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
			gotoxy(x + 4, y - 1);
			printf("°°°");
			gotoxy(x + 4, y + 2);
			printf("″″″");
			color_change(tail_color);
			gotoxy(x + 10, y);
			printf("⒏");
			gotoxy(x + 10, y + 1);
			printf("⒏");
		}
	}
	if (size == 10) {	//size 6x5
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
			printf("♂♂♂♂");
			gotoxy(x - 8, y);
			printf("♂♂♂♂");
			gotoxy(x - 8, y + 1);
			printf("♂♂♂♂");// 个 何盒
			color_change(fin_color);
			gotoxy(x - 8, y - 2);
			printf("°°°");
			gotoxy(x - 8, y + 2);
			printf("″″″");
			color_change(tail_color);
			gotoxy(x - 10, y - 1);
			printf("⒑");
			gotoxy(x - 10, y);
			printf("♂");
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
			printf("♂♂♂♂");
			gotoxy(x + 2, y);
			printf("♂♂♂♂");
			gotoxy(x + 2, y + 1);
			printf("♂♂♂♂");// 个 何盒
			color_change(fin_color);
			gotoxy(x + 4, y - 2);
			printf("°°°");
			gotoxy(x + 4, y + 2);
			printf("″″″");
			color_change(tail_color);
			gotoxy(x + 10, y - 1);
			printf("⒏");
			gotoxy(x + 10, y);
			printf("♂");
			gotoxy(x + 10, y + 1);
			printf("⒏");
		}
	}
	if (size == 11) {	 //size 7x5
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
			printf("♂♂♂♂");
			gotoxy(x - 8, y);
			printf("♂♂♂♂");
			gotoxy(x - 8, y + 1);
			printf("♂♂♂♂");  
			gotoxy(x - 10, y);
			printf("♂");	// 个 何盒
			color_change(fin_color);
			gotoxy(x - 8, y - 2);
			printf("°°°");
			gotoxy(x - 8, y + 2);
			printf("″″″");
			gotoxy(x - 10, y - 1);
			printf("°");
			gotoxy(x - 10, y + 1);
			printf("″");
			color_change(tail_color);
			gotoxy(x - 12, y - 1);
			printf("⒑");
			gotoxy(x - 12, y);
			printf("♂");
			gotoxy(x - 12, y + 1);
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
			printf("♂♂♂♂");
			gotoxy(x + 2, y);
			printf("♂♂♂♂");
			gotoxy(x + 2, y + 1);
			printf("♂♂♂♂"); 
			gotoxy(x + 10, y);
			printf("♂");	// 个 何盒
			color_change(fin_color);
			gotoxy(x + 4, y - 2);
			printf("°°°");
			gotoxy(x + 4, y + 2);
			printf("″″″");
			gotoxy(x + 10, y - 1);
			printf("°");
			gotoxy(x + 10, y + 1);
			printf("″");
			color_change(tail_color);
			gotoxy(x + 12, y - 1);
			printf("⒏");
			gotoxy(x + 12, y);
			printf("♂");
			gotoxy(x + 12, y + 1);
			printf("⒏");
		}
	}
	if (size == 12) {	//size 8x5
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
			printf("♂♂♂♂");
			gotoxy(x - 8, y);
			printf("♂♂♂♂");
			gotoxy(x - 8, y + 1);
			printf("♂♂♂♂");
			gotoxy(x - 10, y);
			printf("♂");	// 个 何盒
			color_change(fin_color);
			gotoxy(x - 8, y - 2);
			printf("°°°");
			gotoxy(x - 8, y + 2);
			printf("″″″");
			gotoxy(x - 10, y - 1);
			printf("°");
			gotoxy(x - 10, y + 1);
			printf("″");
			color_change(tail_color);
			gotoxy(x - 12, y);
			printf("⒑");
			gotoxy(x - 14, y - 1);
			printf("⒑");
			gotoxy(x - 14, y);
			printf("♂");
			gotoxy(x - 14, y + 1);
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
			printf("♂♂♂♂");
			gotoxy(x + 2, y);
			printf("♂♂♂♂");
			gotoxy(x + 2, y + 1);
			printf("♂♂♂♂");
			gotoxy(x + 10, y);
			printf("♂");	// 个 何盒
			color_change(fin_color);
			gotoxy(x + 4, y - 2);
			printf("°°°");
			gotoxy(x + 4, y + 2);
			printf("″″″");
			gotoxy(x + 10, y - 1);
			printf("°");
			gotoxy(x + 10, y + 1);
			printf("″");
			color_change(tail_color);
			gotoxy(x + 12, y);
			printf("⒏");
			gotoxy(x + 14, y - 1);
			printf("⒏");
			gotoxy(x + 14, y);
			printf("♂");
			gotoxy(x + 14, y + 1);
			printf("⒏");
		}
	}
	if (size == 13) {	//size 9x5
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y - 1);
			printf("⒑");
			gotoxy(x, y);
			printf("| ");
			gotoxy(x, y + 1);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 10, y - 1);
			printf("♂♂♂♂♂");
			gotoxy(x - 12, y);
			printf("♂♂♂♂♂♂");
			gotoxy(x - 10, y + 1);
			printf("♂♂♂♂♂");	// 个 何盒
			color_change(fin_color);
			gotoxy(x - 10, y - 2);
			printf("°°°°");
			gotoxy(x - 10, y + 2);
			printf("″″″″");
			color_change(tail_color);
			gotoxy(x - 14, y);
			printf("⒑");
			gotoxy(x - 16, y - 1);
			printf("⒑");
			gotoxy(x - 16, y);
			printf("♂");
			gotoxy(x - 16, y + 1);
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
			printf("♂♂♂♂♂");
			gotoxy(x + 2, y);
			printf("♂♂♂♂♂♂");
			gotoxy(x + 2, y + 1);
			printf("♂♂♂♂♂");
			gotoxy(x + 12, y);
			printf("♂");	// 个 何盒
			color_change(fin_color);
			gotoxy(x + 4, y - 2);
			printf("°°°°");
			gotoxy(x + 4, y + 2);
			printf("″″″″");
			color_change(tail_color);
			gotoxy(x + 14, y);
			printf("⒏");
			gotoxy(x + 16, y - 1);
			printf("⒏");
			gotoxy(x + 16, y);
			printf("♂");
			gotoxy(x + 16, y + 1);
			printf("⒏");
		}
	}
	if (size == 14) { //size 9x6
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒑");
			gotoxy(x, y + 1);
			printf("| ");
			gotoxy(x, y + 2);
			printf("⒑");
			color_change(body_color);
			gotoxy(x - 10, y - 1);
			printf("♂♂♂♂♂");
			gotoxy(x - 12, y);
			printf("♂♂♂♂  ♂");
			gotoxy(x - 12, y + 1);
			printf("♂♂♂♂♂♂");
			gotoxy(x - 10, y + 2);
			printf("♂♂♂♂♂");	// 个 何盒
			color_change(eye_color);
			gotoxy(x - 4, y);
			printf("≤");
			color_change(fin_color);
			gotoxy(x - 10, y - 2);
			printf("°°°");
			gotoxy(x - 10, y + 3);
			printf("″″″");
			gotoxy(x - 12, y - 1);
			printf("°");
			gotoxy(x - 12, y + 2);
			printf("″");
			color_change(tail_color);
			gotoxy(x - 14, y);
			printf("⒑");
			gotoxy(x - 14, y + 1);
			printf("⒑");
			gotoxy(x - 16, y - 1);
			printf("⒑");
			gotoxy(x - 16, y);
			printf("♂");
			gotoxy(x - 16, y + 1);
			printf("♂");
			gotoxy(x - 16, y + 2);
			printf("⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxy(x, y);
			printf("⒏");
			gotoxy(x, y + 1);
			printf(" |");
			gotoxy(x, y + 2);
			printf("⒏");
			color_change(body_color);
			gotoxy(x + 2, y - 1);
			printf("♂♂♂♂♂");
			gotoxy(x + 2, y);
			printf("♂  ♂♂♂♂");
			gotoxy(x + 2, y + 1);
			printf("♂♂♂♂♂♂");
			gotoxy(x + 2, y + 2);
			printf("♂♂♂♂♂");
			gotoxy(x + 12, y);
			printf("♂");	// 个 何盒
			color_change(eye_color);
			gotoxy(x + 4, y);
			printf("≤");
			color_change(fin_color);
			gotoxy(x + 6, y - 2);
			printf("°°°");
			gotoxy(x + 6, y + 3);
			printf("″″″");
			gotoxy(x + 12, y - 1);
			printf("°");
			gotoxy(x + 12, y + 2);
			printf("″");
			color_change(tail_color);
			gotoxy(x + 14, y);
			printf("⒏");
			gotoxy(x + 14, y + 1);
			printf("⒏");
			gotoxy(x + 16, y - 1);
			printf("⒏");
			gotoxy(x + 16, y);
			printf("♂");
			gotoxy(x + 16, y + 1);
			printf("♂");
			gotoxy(x + 16, y + 2);
			printf("⒏");
		}
	}
		if (size == 15) { //size 10x6
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxy(x, y);
				printf("⒑");
				gotoxy(x, y + 1);
				printf("| ");
				gotoxy(x, y + 2);
				printf("⒑");
				color_change(body_color);
				gotoxy(x - 12, y - 1);
				printf("♂♂♂♂♂♂");
				gotoxy(x - 14, y);
				printf("♂♂♂♂♂  ♂");
				gotoxy(x - 14, y + 1);
				printf("♂♂♂♂♂♂♂");
				gotoxy(x - 12, y + 2);
				printf("♂♂♂♂♂♂");	// 个 何盒
				color_change(eye_color);
				gotoxy(x - 4, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x - 12, y - 2);
				printf("°°°°");
				gotoxy(x - 12, y + 3);
				printf("″″″″");
				gotoxy(x - 14, y - 1);
				printf("°");
				gotoxy(x - 14, y + 2);
				printf("″");
				color_change(tail_color);
				gotoxy(x - 16, y);
				printf("⒑");
				gotoxy(x - 16, y + 1);
				printf("⒑");
				gotoxy(x - 18, y - 1);
				printf("⒑");
				gotoxy(x - 18, y);
				printf("♂");
				gotoxy(x - 18, y + 1);
				printf("♂");
				gotoxy(x - 18, y + 2);
				printf("⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxy(x, y);
				printf("⒏");
				gotoxy(x, y + 1);
				printf(" |");
				gotoxy(x, y + 2);
				printf("⒏");
				color_change(body_color);
				gotoxy(x + 2, y - 1);
				printf("♂♂♂♂♂♂");
				gotoxy(x + 2, y);
				printf("♂  ♂♂♂♂♂");
				gotoxy(x + 2, y + 1);
				printf("♂♂♂♂♂♂♂");
				gotoxy(x + 2, y + 2);
				printf("♂♂♂♂♂♂");	// 个 何盒
				color_change(eye_color);
				gotoxy(x + 4, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x + 6, y - 2);
				printf("°°°°");
				gotoxy(x + 6, y + 3);
				printf("″″″″");
				gotoxy(x + 14, y - 1);
				printf("°");
				gotoxy(x + 14, y + 2);
				printf("″");
				color_change(tail_color);
				gotoxy(x + 16, y);
				printf("⒏");
				gotoxy(x + 16, y + 1);
				printf("⒏");
				gotoxy(x + 18, y - 1);
				printf("⒏");
				gotoxy(x + 18, y);
				printf("♂");
				gotoxy(x + 18, y + 1);
				printf("♂");
				gotoxy(x + 18, y + 2);
				printf("⒏");
			}
		}
		if (size == 16) {	//size 10x7
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxy(x, y);
				printf("⒑");
				gotoxy(x, y + 1);
				printf("| ");
				gotoxy(x, y + 2);
				printf("⒑");
				color_change(body_color);
				gotoxy(x - 12, y - 1);
				printf("♂♂♂♂♂♂");
				gotoxy(x - 14, y);
				printf("♂♂♂♂♂  ♂");
				gotoxy(x - 14, y + 1);
				printf("♂♂♂♂♂♂♂");
				gotoxy(x - 14, y + 2);
				printf("♂♂♂♂♂♂♂");
				gotoxy(x - 12, y + 3);
				printf("♂♂♂♂♂♂");	// 个 何盒
				color_change(eye_color);
				gotoxy(x - 4, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x - 12, y - 2);
				printf("°°°°");
				gotoxy(x - 12, y + 4);
				printf("″″″″");
				gotoxy(x - 14, y - 1);
				printf("°");
				gotoxy(x - 14, y + 3);
				printf("″");
				color_change(tail_color);
				gotoxy(x - 16, y);
				printf("⒑");
				gotoxy(x - 16, y + 1);
				printf("⒑");
				gotoxy(x - 16, y + 2);
				printf("⒑");
				gotoxy(x - 18, y - 1);
				printf("⒑");
				gotoxy(x - 18, y);
				printf("♂");
				gotoxy(x - 18, y + 1);
				printf("♂");
				gotoxy(x - 18, y + 2);
				printf("♂");
				gotoxy(x - 18, y + 3);
				printf("⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxy(x, y);
				printf("⒏");
				gotoxy(x, y + 1);
				printf(" |");
				gotoxy(x, y + 2);
				printf(" |");
				gotoxy(x, y + 3);
				printf("⒏");
				color_change(body_color);
				gotoxy(x + 2, y - 1);
				printf("♂♂♂♂♂♂");
				gotoxy(x + 2, y);
				printf("♂  ♂♂♂♂♂");
				gotoxy(x + 2, y + 1);
				printf("♂♂♂♂♂♂♂");
				gotoxy(x + 2, y + 2);
				printf("♂♂♂♂♂♂♂");
				gotoxy(x + 2, y + 3);
				printf("♂♂♂♂♂♂");// 个 何盒
				color_change(eye_color);
				gotoxy(x + 4, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x + 6, y - 2);
				printf("°°°°");
				gotoxy(x + 6, y + 4);
				printf("″″″″");
				gotoxy(x + 14, y - 1);
				printf("°");
				gotoxy(x + 14, y + 3);
				printf("″");
				color_change(tail_color);
				gotoxy(x + 16, y);
				printf("⒏");
				gotoxy(x + 16, y + 1);
				printf("⒏");
				gotoxy(x + 16, y + 2);
				printf("⒏");
				gotoxy(x + 18, y - 1);
				printf("⒏");
				gotoxy(x + 18, y);
				printf("♂");
				gotoxy(x + 18, y + 1);
				printf("♂");
				gotoxy(x + 18, y + 2);
				printf("♂");
				gotoxy(x + 18, y + 3);
				printf("⒏");
			}
		}
		if (size == 17) {	//size 11x7
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxy(x + 2, y);
				printf("⒑");
				gotoxy(x + 2, y + 1);
				printf("| ");
				gotoxy(x + 2, y + 2);
				printf("⒑");
				color_change(body_color);
				gotoxy(x - 12, y - 1);
				printf("♂♂♂♂♂♂");
				gotoxy(x - 14, y);
				printf("♂♂♂♂♂  ♂♂");
				gotoxy(x - 14, y + 1);
				printf("♂♂♂♂♂♂♂♂");
				gotoxy(x - 14, y + 2);
				printf("♂♂♂♂♂♂♂♂");
				gotoxy(x - 12, y + 3);
				printf("♂♂♂♂♂♂");	// 个 何盒
				color_change(eye_color);
				gotoxy(x - 4, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x - 12, y - 2);
				printf("°°°°°");
				gotoxy(x - 12, y + 4);
				printf("″″″″″");
				gotoxy(x - 14, y - 1);
				printf("°");
				gotoxy(x - 14, y + 3);
				printf("″");
				color_change(tail_color);
				gotoxy(x - 16, y);
				printf("⒑");
				gotoxy(x - 16, y + 1);
				printf("⒑");
				gotoxy(x - 16, y + 2);
				printf("⒑");
				gotoxy(x - 18, y - 1);
				printf("⒑");
				gotoxy(x - 18, y);
				printf("♂");
				gotoxy(x - 18, y + 1);
				printf("♂");
				gotoxy(x - 18, y + 2);
				printf("♂");
				gotoxy(x - 18, y + 3);
				printf("⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxy(x - 2, y);
				printf("⒏");
				gotoxy(x - 2, y + 1);
				printf(" |");
				gotoxy(x - 2, y + 2);
				printf("⒏");
				color_change(body_color);
				gotoxy(x + 2, y - 1);
				printf("♂♂♂♂♂♂");
				gotoxy(x, y);
				printf("♂♂  ♂♂♂♂♂");
				gotoxy(x, y + 1);
				printf("♂♂♂♂♂♂♂♂");
				gotoxy(x, y + 2);
				printf("♂♂♂♂♂♂♂♂");
				gotoxy(x + 2, y + 3);
				printf("♂♂♂♂♂♂");// 个 何盒
				color_change(eye_color);
				gotoxy(x + 4, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x + 4, y - 2);
				printf("°°°°°");
				gotoxy(x + 4, y + 4);
				printf("″″″″″");
				gotoxy(x + 14, y - 1);
				printf("°");
				gotoxy(x + 14, y + 3);
				printf("″");
				color_change(tail_color);
				gotoxy(x + 16, y);
				printf("⒏");
				gotoxy(x + 16, y + 1);
				printf("⒏");
				gotoxy(x + 16, y + 2);
				printf("⒏");
				gotoxy(x + 18, y - 1);
				printf("⒏");
				gotoxy(x + 18, y);
				printf("♂");
				gotoxy(x + 18, y + 1);
				printf("♂");
				gotoxy(x + 18, y + 2);
				printf("♂");
				gotoxy(x + 18, y + 3);
				printf("⒏");
			}
		}
		if (size == 18) {	//size 12x7
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxy(x + 2, y);
				printf("⒑");
				gotoxy(x + 2, y + 1);
				printf("| ");
				gotoxy(x + 2, y + 2);
				printf("⒑");
				color_change(body_color);
				gotoxy(x - 12, y - 1);
				printf("♂♂♂♂♂♂");
				gotoxy(x - 14, y);
				printf("♂♂♂♂♂  ♂♂");
				gotoxy(x - 14, y + 1);
				printf("♂♂♂♂♂♂♂♂");
				gotoxy(x - 14, y + 2);
				printf("♂♂♂♂♂♂♂♂");
				gotoxy(x - 12, y + 3);
				printf("♂♂♂♂♂♂");	// 个 何盒
				color_change(eye_color);
				gotoxy(x - 4, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x - 12, y - 2);
				printf("°°°°°");
				gotoxy(x - 12, y + 4);
				printf("″″″″″");
				gotoxy(x - 14, y - 1);
				printf("°");
				gotoxy(x - 14, y + 3);
				printf("″");
				color_change(tail_color);
				gotoxy(x - 16, y);
				printf("⒑");
				gotoxy(x - 16, y + 1);
				printf("⒑");
				gotoxy(x - 16, y + 2);
				printf("⒑");
				gotoxy(x - 18, y - 1);
				printf("⒑");
				gotoxy(x - 18, y);
				printf("⒏");
				gotoxy(x - 18, y + 1);
				printf("⒑");
				gotoxy(x - 18, y + 2);
				printf("⒏");
				gotoxy(x - 18, y + 3);
				printf("⒑");
				gotoxy(x - 20, y - 2);
				printf("⒑");
				gotoxy(x - 20, y - 1);
				printf("″");
				gotoxy(x - 20, y + 3);
				printf("°");
				gotoxy(x - 20, y + 4);
				printf("⒑");
				
			}
			else
			{
				color_change(mouth_color);
				gotoxy(x - 2, y);
				printf("⒏");
				gotoxy(x - 2, y + 1);
				printf(" |");
				gotoxy(x - 2, y + 2);
				printf("⒏");
				color_change(body_color);
				gotoxy(x + 2, y - 1);
				printf("♂♂♂♂♂♂");
				gotoxy(x, y);
				printf("♂♂  ♂♂♂♂♂");
				gotoxy(x, y + 1);
				printf("♂♂♂♂♂♂♂♂");
				gotoxy(x, y + 2);
				printf("♂♂♂♂♂♂♂♂");
				gotoxy(x + 2, y + 3);
				printf("♂♂♂♂♂♂");// 个 何盒
				color_change(eye_color);
				gotoxy(x + 4, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x + 4, y - 2);
				printf("°°°°°");
				gotoxy(x + 4, y + 4);
				printf("″″″″″");
				gotoxy(x + 14, y - 1);
				printf("°");
				gotoxy(x + 14, y + 3);
				printf("″");
				color_change(tail_color);
				gotoxy(x + 16, y);
				printf("⒏");
				gotoxy(x + 16, y + 1);
				printf("⒏");
				gotoxy(x + 16, y + 2);
				printf("⒏");
				gotoxy(x + 18, y - 1);
				printf("⒏");
				gotoxy(x + 18, y);
				printf("⒑");
				gotoxy(x + 18, y + 1);
				printf("⒏");
				gotoxy(x + 18, y + 2);
				printf("⒑");
				gotoxy(x + 18, y + 3);
				printf("⒏");
				gotoxy(x + 20, y - 2);
				printf("⒏");
				gotoxy(x + 20, y - 1);
				printf("″");
				gotoxy(x + 20, y + 3);
				printf("°");
				gotoxy(x + 20, y + 4);
				printf("⒏");
			}
		}
		if (size == 19) {	//size 12x8
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxy(x + 2, y);
				printf("⒑");
				gotoxy(x + 2, y + 1);
				printf("| ");
				gotoxy(x + 2, y + 2);
				printf("⒑");
				color_change(body_color);
				gotoxy(x - 12, y - 1);
				printf("♂♂♂♂♂♂");
				gotoxy(x - 14, y);
				printf("♂♂♂♂♂  ♂♂");
				gotoxy(x - 14, y + 1);
				printf("♂♂♂♂♂♂♂♂");
				gotoxy(x - 14, y + 2);
				printf("♂♂♂♂♂♂♂♂");
				gotoxy(x - 12, y + 3);
				printf("♂♂♂♂♂♂");	// 个 何盒
				color_change(eye_color);
				gotoxy(x - 4, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x - 12, y - 2);
				printf("°°°°°");
				gotoxy(x - 12, y + 4);
				printf("″″″″″");
				gotoxy(x - 14, y - 1);
				printf("°");
				gotoxy(x - 14, y + 3);
				printf("″");
				color_change(tail_color);
				gotoxy(x - 16, y);
				printf("⒑");
				gotoxy(x - 16, y + 1);
				printf("⒑");
				gotoxy(x - 16, y + 2);
				printf("⒑");
				gotoxy(x - 18, y - 1);
				printf("⒑");
				gotoxy(x - 18, y);
				printf("⒏");
				gotoxy(x - 18, y + 1);
				printf("⒑");
				gotoxy(x - 18, y + 2);
				printf("⒏");
				gotoxy(x - 18, y + 3);
				printf("⒑");
				gotoxy(x - 20, y - 2);
				printf("⒑");
				gotoxy(x - 20, y - 1);
				printf("″");
				gotoxy(x - 20, y + 3);
				printf("°");
				gotoxy(x - 20, y + 4);
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
		if (size == 20) {	//size 10x7
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
		if (size == 21) {	//size 10x7
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
		if (size == 22) {	//size 10x7
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
		if (size == 23) {	//size 10x7
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
		if (size == 24) {	//size 10x7
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