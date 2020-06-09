#pragma once

#include "interface_design_tool.h"
#include <cstdio>

void player_fish_image(int size, bool to_right, int x, int y, int mouth_color, int fin_color, int tail_color, int body_color, int eye_color);

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
			gotoxylimit(x - 4, y, "♂");
			gotoxylimit(x - 2, y, "♂"); // 个 何盒
			color_change(fin_color);
			gotoxylimit(x - 4, y - 1, "°");
			gotoxylimit(x - 2, y - 1, "°");
			gotoxylimit(x - 4, y + 1, "″");
			gotoxylimit (x - 2, y + 1, "″");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			color_change(body_color);
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 4, y, "♂");
			gotoxylimit(x + 6, y, "<<"); // 个 何盒
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "°");
			gotoxylimit(x + 4, y - 1, "°");
			gotoxylimit(x + 2, y + 1, "″");
			gotoxylimit(x + 4, y + 1, "″");
		}
	}
	if (size == 7) {	//size 5x3
		if (to_right == 0) {
			color_change(mouth_color);
			gotoxylimit(x, y, "⒑");
			color_change(body_color);
			gotoxylimit(x - 6, y, "♂");
			gotoxylimit(x - 4, y, "♂");
			gotoxylimit(x - 2, y, "♂");// 个 何盒
			color_change(fin_color);
			gotoxylimit(x - 6, y - 1, "°");
			gotoxylimit(x - 4, y - 1, "°");
			gotoxylimit(x - 2, y - 1, "°");
			gotoxylimit(x - 6, y + 1, "″");
			gotoxylimit(x - 4, y + 1, "″");
			gotoxylimit(x - 2, y + 1, "″");
			color_change(tail_color);
			gotoxylimit(x - 8, y, ">>");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			color_change(body_color);
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 4, y, "♂");
			gotoxylimit(x + 6, y, "♂"); // 个 何盒
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "°");
			gotoxylimit(x + 4, y - 1, "°");
			gotoxylimit(x + 6, y - 1, "°");
			gotoxylimit(x + 2, y + 1, "″");
			gotoxylimit(x + 4, y + 1, "″");
			gotoxylimit(x + 6, y + 1, "″");
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
			gotoxylimit(x - 6, y, "♂");
			gotoxylimit(x - 4, y, "♂");
			gotoxylimit(x - 2, y, "♂");
			gotoxylimit(x - 6, y + 1, "♂");
			gotoxylimit(x - 4, y + 1, "♂");
			gotoxylimit(x - 2, y + 1, "♂");// 个 何盒
			color_change(fin_color);
			gotoxylimit(x - 6, y - 1, "°");
			gotoxylimit(x - 4, y - 1, "°");
			gotoxylimit(x - 2, y - 1, "°");
			gotoxylimit(x - 6, y + 2, "″");
			gotoxylimit(x - 4, y + 2, "″");
			gotoxylimit(x - 2, y + 2, "″");
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
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 4, y, "♂");
			gotoxylimit(x + 6, y, "♂");
			gotoxylimit(x + 2, y + 1, "♂");
			gotoxylimit(x + 4, y + 1, "♂");
			gotoxylimit(x + 6, y + 1, "♂"); // 个 何盒
			color_change(fin_color);
			gotoxylimit(x + 2, y - 1, "°");
			gotoxylimit(x + 4, y - 1, "°");
			gotoxylimit(x + 6, y - 1, "°");
			gotoxylimit(x + 2, y + 2, "″");
			gotoxylimit(x + 4, y + 2, "″");
			gotoxylimit(x + 6, y + 2, "″");
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
			gotoxylimit(x - 8, y, "♂");
			gotoxylimit(x - 6, y, "♂");
			gotoxylimit(x - 4, y, "♂");
			gotoxylimit(x - 2, y, "♂");
			gotoxylimit(x - 8, y + 1, "♂");
			gotoxylimit(x - 6, y + 1, "♂");
			gotoxylimit(x - 4, y + 1, "♂");
			gotoxylimit(x - 2, y + 1, "♂"); // 个 何盒
			color_change(fin_color);
			gotoxylimit(x - 8, y - 1, "°");
			gotoxylimit(x - 6, y - 1, "°");
			gotoxylimit(x - 4, y - 1, "°");
			gotoxylimit(x - 8, y + 2, "″");
			gotoxylimit(x - 6, y + 2, "″");
			gotoxylimit(x - 4, y + 2, "″");
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
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 4, y, "♂");
			gotoxylimit(x + 6, y, "♂");
			gotoxylimit(x + 8, y, "♂");
			gotoxylimit(x + 2, y + 1, "♂");
			gotoxylimit(x + 4, y + 1, "♂");
			gotoxylimit(x + 6, y + 1, "♂");
			gotoxylimit(x + 8, y + 1, "♂"); // 个 何盒
			color_change(fin_color);
			gotoxylimit(x + 4, y - 1, "°");
			gotoxylimit(x + 6, y - 1, "°");
			gotoxylimit(x + 8, y - 1, "°");
			gotoxylimit(x + 4, y + 2, "″");
			gotoxylimit(x + 6, y + 2, "″");
			gotoxylimit(x + 8, y + 2, "″");
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
			gotoxylimit(x - 8, y - 1, "♂");
			gotoxylimit(x - 6, y - 1, "♂");
			gotoxylimit(x - 4, y - 1, "♂");
			gotoxylimit(x - 2, y - 1, "♂");
			gotoxylimit(x - 8, y, "♂");
			gotoxylimit(x - 6, y, "♂");
			gotoxylimit(x - 4, y, "♂");
			gotoxylimit(x - 2, y, "♂");
			gotoxylimit(x - 8, y + 1, "♂");
			gotoxylimit(x - 6, y + 1, "♂");
			gotoxylimit(x - 4, y + 1, "♂");
			gotoxylimit(x - 2, y + 1, "♂"); // 个 何盒
			color_change(fin_color);
			gotoxylimit(x - 8, y - 2, "°");
			gotoxylimit(x - 6, y - 2, "°");
			gotoxylimit(x - 4, y - 2, "°");
			gotoxylimit(x - 8, y + 2, "″");
			gotoxylimit(x - 6, y + 2, "″");
			gotoxylimit(x - 4, y + 2, "″");
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
			gotoxylimit(x + 2, y - 1, "♂");
			gotoxylimit(x + 4, y - 1, "♂");
			gotoxylimit(x + 6, y - 1, "♂");
			gotoxylimit(x + 8, y - 1, "♂");
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 4, y, "♂");
			gotoxylimit(x + 6, y, "♂");
			gotoxylimit(x + 8, y, "♂");
			gotoxylimit(x + 2, y + 1, "♂");
			gotoxylimit(x + 4, y + 1, "♂");
			gotoxylimit(x + 6, y + 1, "♂");
			gotoxylimit(x + 8, y + 1, "♂"); // 个 何盒
			color_change(fin_color);
			gotoxylimit(x + 4, y - 2, "°");
			gotoxylimit(x + 6, y - 2, "°");
			gotoxylimit(x + 8, y - 2, "°");
			gotoxylimit(x + 4, y + 2, "″");
			gotoxylimit(x + 6, y + 2, "″");
			gotoxylimit(x + 8, y + 2, "″");
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
			gotoxylimit(x - 8, y - 1, "♂");
			gotoxylimit(x - 6, y - 1, "♂");
			gotoxylimit(x - 4, y - 1, "♂");
			gotoxylimit(x - 2, y - 1, "♂");
			gotoxylimit(x - 8, y, "♂");
			gotoxylimit(x - 6, y, "♂");
			gotoxylimit(x - 4, y, "♂");
			gotoxylimit(x - 2, y, "♂");
			gotoxylimit(x - 8, y + 1, "♂");
			gotoxylimit(x - 6, y + 1, "♂");
			gotoxylimit(x - 4, y + 1, "♂");
			gotoxylimit(x - 2, y + 1, "♂");
			gotoxylimit(x - 10, y, "♂");	// 个 何盒
			color_change(fin_color);
			gotoxylimit(x - 8, y - 2, "°");
			gotoxylimit(x - 6, y - 2, "°");
			gotoxylimit(x - 4, y - 2, "°");
			gotoxylimit(x - 8, y + 2, "″");
			gotoxylimit(x - 6, y + 2, "″");
			gotoxylimit(x - 4, y + 2, "″");
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
			gotoxylimit(x + 2, y - 1, "♂");
			gotoxylimit(x + 4, y - 1, "♂");
			gotoxylimit(x + 6, y - 1, "♂");
			gotoxylimit(x + 8, y - 1, "♂");
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 4, y, "♂");
			gotoxylimit(x + 6, y, "♂");
			gotoxylimit(x + 8, y, "♂");
			gotoxylimit(x + 2, y + 1, "♂");
			gotoxylimit(x + 4, y + 1, "♂");
			gotoxylimit(x + 6, y + 1, "♂");
			gotoxylimit(x + 8, y + 1, "♂");
			gotoxylimit(x + 10, y, "♂");	// 个 何盒
			color_change(fin_color);
			gotoxylimit(x + 4, y - 2, "°");
			gotoxylimit(x + 6, y - 2, "°");
			gotoxylimit(x + 8, y - 2, "°");
			gotoxylimit(x + 4, y + 2, "″");
			gotoxylimit(x + 6, y + 2, "″");
			gotoxylimit(x + 8, y + 2, "″");
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
			gotoxylimit(x - 8, y - 1, "♂");
			gotoxylimit(x - 6, y - 1, "♂");
			gotoxylimit(x - 4, y - 1, "♂");
			gotoxylimit(x - 2, y - 1, "♂");
			gotoxylimit(x - 8, y, "♂");
			gotoxylimit(x - 6, y, "♂");
			gotoxylimit(x - 4, y, "♂");
			gotoxylimit(x - 2, y, "♂");
			gotoxylimit(x - 8, y + 1, "♂");
			gotoxylimit(x - 6, y + 1, "♂");
			gotoxylimit(x - 4, y + 1, "♂");
			gotoxylimit(x - 2, y + 1, "♂");
			gotoxylimit(x - 10, y, "♂");	// 个 何盒
			color_change(fin_color);
			gotoxylimit(x - 8, y - 2, "°");
			gotoxylimit(x - 6, y - 2, "°");
			gotoxylimit(x - 4, y - 2, "°");
			gotoxylimit(x - 8, y + 2, "″");
			gotoxylimit(x - 6, y + 2, "″");
			gotoxylimit(x - 4, y + 2, "″");
			gotoxylimit(x - 10, y - 1, "°");
			gotoxylimit(x - 10, y + 1, "″");
			color_change(tail_color);
			gotoxylimit(x - 14, y, "♂");
			gotoxylimit(x - 12, y, "⒑");
			gotoxylimit(x - 14, y - 1, "⒑");
			gotoxylimit(x - 14, y + 1, "⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y - 1, "⒏");
			gotoxylimit(x, y, " |");
			gotoxylimit(x, y + 1, "⒏");
			color_change(body_color);
			gotoxylimit(x + 2, y - 1, "♂");
			gotoxylimit(x + 4, y - 1, "♂");
			gotoxylimit(x + 6, y - 1, "♂");
			gotoxylimit(x + 8, y - 1, "♂");
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 4, y, "♂");
			gotoxylimit(x + 6, y, "♂");
			gotoxylimit(x + 8, y, "♂");
			gotoxylimit(x + 2, y + 1, "♂");
			gotoxylimit(x + 4, y + 1, "♂");
			gotoxylimit(x + 6, y + 1, "♂");
			gotoxylimit(x + 8, y + 1, "♂");
			gotoxylimit(x + 10, y, "♂");	// 个 何盒
			color_change(fin_color);
			gotoxylimit(x + 4, y - 2, "°");
			gotoxylimit(x + 6, y - 2, "°");
			gotoxylimit(x + 8, y - 2, "°");
			gotoxylimit(x + 4, y + 2, "″");
			gotoxylimit(x + 6, y + 2, "″");
			gotoxylimit(x + 8, y + 2, "″");
			gotoxylimit(x + 10, y - 1, "°");
			gotoxylimit(x + 10, y + 1, "″");
			color_change(tail_color);
			gotoxylimit(x + 12, y, "⒏");
			gotoxylimit(x + 14, y, "♂");
			gotoxylimit(x + 14, y - 1, "⒏");
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
			gotoxylimit(x - 10, y - 1, "♂");
			gotoxylimit(x - 8, y - 1, "♂");
			gotoxylimit(x - 6, y - 1, "♂");
			gotoxylimit(x - 4, y - 1, "♂");
			gotoxylimit(x - 2, y - 1, "♂");
			gotoxylimit(x - 12, y, "♂");
			gotoxylimit(x - 10, y, "♂");
			gotoxylimit(x - 8, y, "♂");
			gotoxylimit(x - 6, y, "♂");
			gotoxylimit(x - 4, y, "♂");
			gotoxylimit(x - 2, y, "♂");
			gotoxylimit(x - 10, y + 1, "♂");
			gotoxylimit(x - 8, y + 1, "♂");
			gotoxylimit(x - 6, y + 1, "♂");
			gotoxylimit(x - 4, y + 1, "♂");
			gotoxylimit(x - 2, y + 1, "♂");	// 个 何盒
			color_change(fin_color);
			gotoxylimit(x - 10, y - 2, "°");
			gotoxylimit(x - 8, y - 2, "°");
			gotoxylimit(x - 6, y - 2, "°");
			gotoxylimit(x - 4, y - 2, "°");
			gotoxylimit(x - 10, y + 2, "″");
			gotoxylimit(x - 8, y + 2, "″");
			gotoxylimit(x - 6, y + 2, "″");
			gotoxylimit(x - 4, y + 2, "″");
			gotoxylimit(x - 12, y - 1, "°");
			gotoxylimit(x - 12, y + 1, "″");
			color_change(tail_color);
			gotoxylimit(x - 16, y, "♂");
			gotoxylimit(x - 14, y, "⒑");
			gotoxylimit(x - 16, y - 1, "⒑");
			gotoxylimit(x - 16, y + 1, "⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y - 1, "⒏");
			gotoxylimit(x, y, " |");
			gotoxylimit(x, y + 1, "⒏");
			color_change(body_color);
			gotoxylimit(x + 2, y - 1, "♂");
			gotoxylimit(x + 4, y - 1, "♂");
			gotoxylimit(x + 6, y - 1, "♂");
			gotoxylimit(x + 8, y - 1, "♂");
			gotoxylimit(x + 10, y - 1, "♂");
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 4, y, "♂");
			gotoxylimit(x + 6, y, "♂");
			gotoxylimit(x + 8, y, "♂");
			gotoxylimit(x + 10, y, "♂");
			gotoxylimit(x + 12, y, "♂");
			gotoxylimit(x + 2, y + 1, "♂");
			gotoxylimit(x + 4, y + 1, "♂");
			gotoxylimit(x + 6, y + 1, "♂");
			gotoxylimit(x + 8, y + 1, "♂");
			gotoxylimit(x + 10, y + 1, "♂");
			gotoxylimit(x + 12, y, "♂");	// 个 何盒
			color_change(fin_color);
			gotoxylimit(x + 4, y - 2, "°");
			gotoxylimit(x + 6, y - 2, "°");
			gotoxylimit(x + 8, y - 2, "°");
			gotoxylimit(x + 10, y - 2, "°");
			gotoxylimit(x + 4, y + 2, "″");
			gotoxylimit(x + 6, y + 2, "″");
			gotoxylimit(x + 8, y + 2, "″");
			gotoxylimit(x + 10, y + 2, "″");
			gotoxylimit(x + 12, y - 1, "°");
			gotoxylimit(x + 12, y + 1, "″");
			color_change(tail_color);
			gotoxylimit(x + 14, y, "⒏");
			gotoxylimit(x + 16, y, "♂");
			gotoxylimit(x + 16, y - 1, "⒏");
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
			gotoxylimit(x - 10, y - 1, "♂");
			gotoxylimit(x - 8, y - 1, "♂");
			gotoxylimit(x - 6, y - 1, "♂");
			gotoxylimit(x - 4, y - 1, "♂");
			gotoxylimit(x - 2, y - 1, "♂");
			gotoxylimit(x - 12, y, "♂");
			gotoxylimit(x - 10, y, "♂");
			gotoxylimit(x - 8, y, "♂");
			gotoxylimit(x - 6, y, "♂");
			gotoxylimit(x - 2, y, "♂");
			gotoxylimit(x - 12, y + 1, "♂");
			gotoxylimit(x - 10, y + 1, "♂");
			gotoxylimit(x - 8, y + 1, "♂");
			gotoxylimit(x - 6, y + 1, "♂");
			gotoxylimit(x - 4, y + 1, "♂");
			gotoxylimit(x - 2, y + 1, "♂");
			gotoxylimit(x - 10, y + 2, "♂");
			gotoxylimit(x - 8, y + 2, "♂");
			gotoxylimit(x - 6, y + 2, "♂");
			gotoxylimit(x - 4, y + 2, "♂");
			gotoxylimit(x - 2, y + 2, "♂");	// 个 何盒
			color_change(eye_color);
			gotoxylimit(x - 4, y, "≤");
			color_change(fin_color);
			gotoxylimit(x - 10, y - 2, "°");
			gotoxylimit(x - 8, y - 2, "°");
			gotoxylimit(x - 6, y - 2, "°");
			gotoxylimit(x - 4, y - 2, "°");
			gotoxylimit(x - 10, y + 3, "″");
			gotoxylimit(x - 8, y + 3, "″");
			gotoxylimit(x - 6, y + 3, "″");
			gotoxylimit(x - 4, y + 3, "″");
			gotoxylimit(x - 12, y - 1, "°");
			gotoxylimit(x - 12, y + 2, "″");
			color_change(tail_color);
			gotoxylimit(x - 16, y, "♂");
			gotoxylimit(x - 14, y, "⒑");
			gotoxylimit(x - 16, y + 1, "♂");
			gotoxylimit(x - 14, y + 1, "⒑");
			gotoxylimit(x - 16, y - 1, "⒑");
			gotoxylimit(x - 16, y + 2, "⒑");
		}
		else
		{
			color_change(mouth_color);
			gotoxylimit(x, y, "⒏");
			gotoxylimit(x, y + 1, " |");
			gotoxylimit(x, y + 2, "⒏");
			color_change(body_color);
			gotoxylimit(x + 2, y - 1, "♂");
			gotoxylimit(x + 4, y - 1, "♂");
			gotoxylimit(x + 6, y - 1, "♂");
			gotoxylimit(x + 8, y - 1, "♂");
			gotoxylimit(x + 10, y - 1, "♂");
			gotoxylimit(x + 2, y, "♂");
			gotoxylimit(x + 6, y, "♂");
			gotoxylimit(x + 8, y, "♂");
			gotoxylimit(x + 10, y, "♂");
			gotoxylimit(x + 12, y, "♂");
			gotoxylimit(x + 2, y + 1, "♂");
			gotoxylimit(x + 4, y + 1, "♂");
			gotoxylimit(x + 6, y + 1, "♂");
			gotoxylimit(x + 8, y + 1, "♂");
			gotoxylimit(x + 10, y + 1, "♂");
			gotoxylimit(x + 12, y + 1, "♂");
			gotoxylimit(x + 2, y + 2, "♂");
			gotoxylimit(x + 4, y + 2, "♂");
			gotoxylimit(x + 6, y + 2, "♂");
			gotoxylimit(x + 8, y + 2, "♂");
			gotoxylimit(x + 10, y + 2, "♂");
			gotoxylimit(x + 12, y, "♂");	// 个 何盒
			color_change(eye_color);
			gotoxylimit(x + 4, y, "≤");
			color_change(fin_color);
			gotoxylimit(x + 4, y - 2, "°");
			gotoxylimit(x + 6, y - 2, "°");
			gotoxylimit(x + 8, y - 2, "°");
			gotoxylimit(x + 10, y - 2, "°");
			gotoxylimit(x + 4, y + 3, "″");
			gotoxylimit(x + 6, y + 3, "″");
			gotoxylimit(x + 8, y + 3, "″");
			gotoxylimit(x + 10, y + 3, "″");
			gotoxylimit(x + 12, y - 1, "°");
			gotoxylimit(x + 12, y + 2, "″");
			color_change(tail_color);
			gotoxylimit(x + 14, y, "⒏");
			gotoxylimit(x + 16, y, "♂");
			gotoxylimit(x + 14, y + 1, "⒏");
			gotoxylimit(x + 16, y + 1, "♂");
			gotoxylimit(x + 16, y - 1, "⒏");
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
				gotoxylimit(x - 12, y - 1, "♂");
				gotoxylimit(x - 10, y - 1, "♂");
				gotoxylimit(x - 8, y - 1, "♂");
				gotoxylimit(x - 6, y - 1, "♂");
				gotoxylimit(x - 4, y - 1, "♂");
				gotoxylimit(x - 2, y - 1, "♂");
				gotoxylimit(x - 14, y, "♂");
				gotoxylimit(x - 12, y, "♂");
				gotoxylimit(x - 10, y, "♂");
				gotoxylimit(x - 8, y, "♂");
				gotoxylimit(x - 6, y, "♂");
				gotoxylimit(x - 2, y, "♂");
				gotoxylimit(x - 14, y + 1, "♂");
				gotoxylimit(x - 12, y + 1, "♂");
				gotoxylimit(x - 10, y + 1, "♂");
				gotoxylimit(x - 8, y + 1, "♂");
				gotoxylimit(x - 6, y + 1, "♂");
				gotoxylimit(x - 4, y + 1, "♂");
				gotoxylimit(x - 2, y + 1, "♂");
				gotoxylimit(x - 12, y + 2, "♂");
				gotoxylimit(x - 10, y + 2, "♂");
				gotoxylimit(x - 8, y + 2, "♂");
				gotoxylimit(x - 6, y + 2, "♂");
				gotoxylimit(x - 4, y + 2, "♂");
				gotoxylimit(x - 2, y + 2, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 4, y, "≤");
				color_change(fin_color);
				gotoxylimit(x - 12, y - 2, "°");
				gotoxylimit(x - 10, y - 2, "°");
				gotoxylimit(x - 8, y - 2, "°");
				gotoxylimit(x - 6, y - 2, "°");
				gotoxylimit(x - 4, y - 2, "°");
				gotoxylimit(x - 12, y + 3, "″");
				gotoxylimit(x - 10, y + 3, "″");
				gotoxylimit(x - 8, y + 3, "″");
				gotoxylimit(x - 6, y + 3, "″");
				gotoxylimit(x - 4, y + 3, "″");
				gotoxylimit(x - 14, y - 1, "°");
				gotoxylimit(x - 14, y + 2, "″");
				color_change(tail_color);
				gotoxylimit(x - 18, y, "♂");
				gotoxylimit(x - 16, y, "⒑");
				gotoxylimit(x - 18, y + 1, "♂");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 18, y + 2, "⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxylimit(x, y, "⒏");
				gotoxylimit(x, y + 1, " |");
				gotoxylimit(x, y + 2, "⒏");
				color_change(body_color);
				gotoxylimit(x + 2, y - 1, "♂");
				gotoxylimit(x + 4, y - 1, "♂");
				gotoxylimit(x + 6, y - 1, "♂");
				gotoxylimit(x + 8, y - 1, "♂");
				gotoxylimit(x + 10, y - 1, "♂");
				gotoxylimit(x + 12, y - 1, "♂");
				gotoxylimit(x + 2, y, "♂");
				gotoxylimit(x + 6, y, "♂");
				gotoxylimit(x + 8, y, "♂");
				gotoxylimit(x + 10, y, "♂");
				gotoxylimit(x + 12, y, "♂");
				gotoxylimit(x + 14, y, "♂");
				gotoxylimit(x + 2, y + 1, "♂");
				gotoxylimit(x + 4, y + 1, "♂");
				gotoxylimit(x + 6, y + 1, "♂");
				gotoxylimit(x + 8, y + 1, "♂");
				gotoxylimit(x + 10, y + 1, "♂");
				gotoxylimit(x + 12, y + 1, "♂");
				gotoxylimit(x + 14, y + 1, "♂");
				gotoxylimit(x + 2, y + 2, "♂");
				gotoxylimit(x + 4, y + 2, "♂");
				gotoxylimit(x + 6, y + 2, "♂");
				gotoxylimit(x + 8, y + 2, "♂");
				gotoxylimit(x + 10, y + 2, "♂");
				gotoxylimit(x + 12, y + 2, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 4, y, "≤");
				color_change(fin_color);
				gotoxylimit(x + 4, y - 2, "°");
				gotoxylimit(x + 6, y - 2, "°");
				gotoxylimit(x + 8, y - 2, "°");
				gotoxylimit(x + 10, y - 2, "°");
				gotoxylimit(x + 12, y - 2, "°");
				gotoxylimit(x + 4, y + 3, "″");
				gotoxylimit(x + 6, y + 3, "″");
				gotoxylimit(x + 8, y + 3, "″");
				gotoxylimit(x + 10, y + 3, "″");
				gotoxylimit(x + 12, y + 3, "″");
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 2, "″");
				color_change(tail_color);
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "♂");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "♂");
				gotoxylimit(x + 18, y - 1, "⒏");
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
				gotoxylimit(x - 12, y - 1, "♂");
				gotoxylimit(x - 10, y - 1, "♂");
				gotoxylimit(x - 8, y - 1, "♂");
				gotoxylimit(x - 6, y - 1, "♂");
				gotoxylimit(x - 4, y - 1, "♂");
				gotoxylimit(x - 2, y - 1, "♂");
				gotoxylimit(x - 14, y, "♂");
				gotoxylimit(x - 12, y, "♂");
				gotoxylimit(x - 10, y, "♂");
				gotoxylimit(x - 8, y, "♂");
				gotoxylimit(x - 6, y, "♂");
				gotoxylimit(x - 2, y, "♂");
				gotoxylimit(x - 14, y + 1, "♂");
				gotoxylimit(x - 12, y + 1, "♂");
				gotoxylimit(x - 10, y + 1, "♂");
				gotoxylimit(x - 8, y + 1, "♂");
				gotoxylimit(x - 6, y + 1, "♂");
				gotoxylimit(x - 4, y + 1, "♂");
				gotoxylimit(x - 2, y + 1, "♂");
				gotoxylimit(x - 14, y + 2, "♂");
				gotoxylimit(x - 12, y + 2, "♂");
				gotoxylimit(x - 10, y + 2, "♂");
				gotoxylimit(x - 8, y + 2, "♂");
				gotoxylimit(x - 6, y + 2, "♂");
				gotoxylimit(x - 4, y + 2, "♂");
				gotoxylimit(x - 2, y + 2, "♂");
				gotoxylimit(x - 12, y + 3, "♂");
				gotoxylimit(x - 10, y + 3, "♂");
				gotoxylimit(x - 8, y + 3, "♂");
				gotoxylimit(x - 6, y + 3, "♂");
				gotoxylimit(x - 4, y + 3, "♂");
				gotoxylimit(x - 2, y + 3, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 4, y, "≤");
				color_change(fin_color);
				gotoxylimit(x - 12, y - 2, "°");
				gotoxylimit(x - 10, y - 2, "°");
				gotoxylimit(x - 8, y - 2, "°");
				gotoxylimit(x - 6, y - 2, "°");
				gotoxylimit(x - 4, y - 2, "°");
				gotoxylimit(x - 12, y + 4, "″");
				gotoxylimit(x - 10, y + 4, "″");
				gotoxylimit(x - 8, y + 4, "″");
				gotoxylimit(x - 6, y + 4, "″");
				gotoxylimit(x - 4, y + 4, "″");
				gotoxylimit(x - 14, y - 1, "°");
				gotoxylimit(x - 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x - 18, y, "♂");
				gotoxylimit(x - 16, y, "⒑");
				gotoxylimit(x - 18, y + 1, "♂");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 18, y + 2, "♂");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 18, y - 1, "⒑");
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
				gotoxylimit(x + 2, y - 1, "♂");
				gotoxylimit(x + 4, y - 1, "♂");
				gotoxylimit(x + 6, y - 1, "♂");
				gotoxylimit(x + 8, y - 1, "♂");
				gotoxylimit(x + 10, y - 1, "♂");
				gotoxylimit(x + 12, y - 1, "♂");
				gotoxylimit(x + 2, y, "♂");
				gotoxylimit(x + 6, y, "♂");
				gotoxylimit(x + 8, y, "♂");
				gotoxylimit(x + 10, y, "♂");
				gotoxylimit(x + 12, y, "♂");
				gotoxylimit(x + 14, y, "♂");
				gotoxylimit(x + 2, y + 1, "♂");
				gotoxylimit(x + 4, y + 1, "♂");
				gotoxylimit(x + 6, y + 1, "♂");
				gotoxylimit(x + 8, y + 1, "♂");
				gotoxylimit(x + 10, y + 1, "♂");
				gotoxylimit(x + 12, y + 1, "♂");
				gotoxylimit(x + 14, y + 1, "♂");
				gotoxylimit(x + 2, y + 2, "♂");
				gotoxylimit(x + 4, y + 2, "♂");
				gotoxylimit(x + 6, y + 2, "♂");
				gotoxylimit(x + 8, y + 2, "♂");
				gotoxylimit(x + 10, y + 2, "♂");
				gotoxylimit(x + 12, y + 2, "♂"); 
				gotoxylimit(x + 14, y + 2, "♂");
				gotoxylimit(x + 2, y + 3, "♂");
				gotoxylimit(x + 4, y + 3, "♂");
				gotoxylimit(x + 6, y + 3, "♂");
				gotoxylimit(x + 8, y + 3, "♂");
				gotoxylimit(x + 10, y + 3, "♂");
				gotoxylimit(x + 12, y + 3, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 4, y, "≤");
				color_change(fin_color);
				gotoxylimit(x + 4, y - 2, "°");
				gotoxylimit(x + 6, y - 2, "°");
				gotoxylimit(x + 8, y - 2, "°");
				gotoxylimit(x + 10, y - 2, "°");
				gotoxylimit(x + 12, y - 2, "°");
				gotoxylimit(x + 4, y + 4, "″");
				gotoxylimit(x + 6, y + 4, "″");
				gotoxylimit(x + 8, y + 4, "″");
				gotoxylimit(x + 10, y + 4, "″");
				gotoxylimit(x + 12, y + 4, "″");
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "♂");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "♂");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "♂");
				gotoxylimit(x + 18, y - 1, "⒏");
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
				gotoxylimit(x - 12, y - 1, "♂");
				gotoxylimit(x - 10, y - 1, "♂");
				gotoxylimit(x - 8, y - 1, "♂");
				gotoxylimit(x - 6, y - 1, "♂");
				gotoxylimit(x - 4, y - 1, "♂");
				gotoxylimit(x - 2, y - 1, "♂");
				gotoxylimit(x, y - 1, "♂");
				gotoxylimit(x - 14, y, "♂");
				gotoxylimit(x - 12, y, "♂");
				gotoxylimit(x - 10, y, "♂");
				gotoxylimit(x - 8, y, "♂");
				gotoxylimit(x - 6, y, "♂");
				gotoxylimit(x - 4, y, "♂");
				gotoxylimit(x, y, "♂");
				gotoxylimit(x - 14, y + 1, "♂");
				gotoxylimit(x - 12, y + 1, "♂");
				gotoxylimit(x - 10, y + 1, "♂");
				gotoxylimit(x - 8, y + 1, "♂");
				gotoxylimit(x - 6, y + 1, "♂");
				gotoxylimit(x - 4, y + 1, "♂");
				gotoxylimit(x - 2, y + 1, "♂"); 
				gotoxylimit(x, y + 1, "♂");
				gotoxylimit(x - 14, y + 2, "♂");
				gotoxylimit(x - 12, y + 2, "♂");
				gotoxylimit(x - 10, y + 2, "♂");
				gotoxylimit(x - 8, y + 2, "♂");
				gotoxylimit(x - 6, y + 2, "♂");
				gotoxylimit(x - 4, y + 2, "♂");
				gotoxylimit(x - 2, y + 2, "♂");
				gotoxylimit(x, y + 2, "♂");
				gotoxylimit(x - 12, y + 3, "♂");
				gotoxylimit(x - 10, y + 3, "♂");
				gotoxylimit(x - 8, y + 3, "♂");
				gotoxylimit(x - 6, y + 3, "♂");
				gotoxylimit(x - 4, y + 3, "♂");
				gotoxylimit(x - 2, y + 3, "♂");
				gotoxylimit(x, y + 3, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 2, y, "≤");
				color_change(fin_color);
				gotoxylimit(x - 12, y - 2, "°");
				gotoxylimit(x - 10, y - 2, "°");
				gotoxylimit(x - 8, y - 2, "°");
				gotoxylimit(x - 6, y - 2, "°");
				gotoxylimit(x - 4, y - 2, "°");
				gotoxylimit(x - 2, y - 2, "°");
				gotoxylimit(x - 12, y + 4, "″");
				gotoxylimit(x - 10, y + 4, "″");
				gotoxylimit(x - 8, y + 4, "″");
				gotoxylimit(x - 6, y + 4, "″");
				gotoxylimit(x - 4, y + 4, "″");
				gotoxylimit(x - 2, y + 4, "″");
				gotoxylimit(x - 14, y - 1, "°");
				gotoxylimit(x - 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x - 18, y, "♂");
				gotoxylimit(x - 16, y, "⒑");
				gotoxylimit(x - 18, y + 1, "♂");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 18, y + 2, "♂");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 18, y - 1, "⒑");
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
				gotoxylimit(x, y - 1, "♂");
				gotoxylimit(x + 2, y - 1, "♂");
				gotoxylimit(x + 4, y - 1, "♂");
				gotoxylimit(x + 6, y - 1, "♂");
				gotoxylimit(x + 8, y - 1, "♂");
				gotoxylimit(x + 10, y - 1, "♂");
				gotoxylimit(x + 12, y - 1, "♂");
				gotoxylimit(x, y, "♂");
				gotoxylimit(x + 4, y, "♂");
				gotoxylimit(x + 6, y, "♂");
				gotoxylimit(x + 8, y, "♂");
				gotoxylimit(x + 10, y, "♂");
				gotoxylimit(x + 12, y, "♂");
				gotoxylimit(x + 14, y, "♂");
				gotoxylimit(x, y + 1, "♂");
				gotoxylimit(x + 2, y + 1, "♂");
				gotoxylimit(x + 4, y + 1, "♂");
				gotoxylimit(x + 6, y + 1, "♂");
				gotoxylimit(x + 8, y + 1, "♂");
				gotoxylimit(x + 10, y + 1, "♂");
				gotoxylimit(x + 12, y + 1, "♂");
				gotoxylimit(x + 14, y + 1, "♂");
				gotoxylimit(x, y + 2, "♂");
				gotoxylimit(x + 2, y + 2, "♂");
				gotoxylimit(x + 4, y + 2, "♂");
				gotoxylimit(x + 6, y + 2, "♂");
				gotoxylimit(x + 8, y + 2, "♂");
				gotoxylimit(x + 10, y + 2, "♂");
				gotoxylimit(x + 12, y + 2, "♂");
				gotoxylimit(x + 14, y + 2, "♂");
				gotoxylimit(x, y + 3, "♂");
				gotoxylimit(x + 2, y + 3, "♂");
				gotoxylimit(x + 4, y + 3, "♂");
				gotoxylimit(x + 6, y + 3, "♂");
				gotoxylimit(x + 8, y + 3, "♂");
				gotoxylimit(x + 10, y + 3, "♂");
				gotoxylimit(x + 12, y + 3, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 2, y, "≤");
				color_change(fin_color);
				gotoxylimit(x + 2, y - 2, "°");
				gotoxylimit(x + 4, y - 2, "°");
				gotoxylimit(x + 6, y - 2, "°");
				gotoxylimit(x + 8, y - 2, "°");
				gotoxylimit(x + 10, y - 2, "°");
				gotoxylimit(x + 12, y - 2, "°");
				gotoxylimit(x + 2, y + 4, "″");
				gotoxylimit(x + 4, y + 4, "″");
				gotoxylimit(x + 6, y + 4, "″");
				gotoxylimit(x + 8, y + 4, "″");
				gotoxylimit(x + 10, y + 4, "″");
				gotoxylimit(x + 12, y + 4, "″");
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "♂");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "♂");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2, "♂");
				gotoxylimit(x + 18, y - 1, "⒏");
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
				gotoxylimit(x - 12, y - 1, "♂");
				gotoxylimit(x - 10, y - 1, "♂");
				gotoxylimit(x - 8, y - 1, "♂");
				gotoxylimit(x - 6, y - 1, "♂");
				gotoxylimit(x - 4, y - 1, "♂");
				gotoxylimit(x - 2, y - 1, "♂");
				gotoxylimit(x, y - 1, "♂");
				gotoxylimit(x - 14, y, "♂");
				gotoxylimit(x - 12, y, "♂");
				gotoxylimit(x - 10, y, "♂");
				gotoxylimit(x - 8, y, "♂");
				gotoxylimit(x - 6, y, "♂");
				gotoxylimit(x - 4, y, "♂");
				gotoxylimit(x, y, "♂");
				gotoxylimit(x - 14, y + 1, "♂");
				gotoxylimit(x - 12, y + 1, "♂");
				gotoxylimit(x - 10, y + 1, "♂");
				gotoxylimit(x - 8, y + 1, "♂");
				gotoxylimit(x - 6, y + 1, "♂");
				gotoxylimit(x - 4, y + 1, "♂");
				gotoxylimit(x - 2, y + 1, "♂");
				gotoxylimit(x, y + 1, "♂");
				gotoxylimit(x - 14, y + 2, "♂");
				gotoxylimit(x - 12, y + 2, "♂");
				gotoxylimit(x - 10, y + 2, "♂");
				gotoxylimit(x - 8, y + 2, "♂");
				gotoxylimit(x - 6, y + 2, "♂");
				gotoxylimit(x - 4, y + 2, "♂");
				gotoxylimit(x - 2, y + 2, "♂");
				gotoxylimit(x, y + 2, "♂");
				gotoxylimit(x - 12, y + 3, "♂");
				gotoxylimit(x - 10, y + 3, "♂");
				gotoxylimit(x - 8, y + 3, "♂");
				gotoxylimit(x - 6, y + 3, "♂");
				gotoxylimit(x - 4, y + 3, "♂");
				gotoxylimit(x - 2, y + 3, "♂");
				gotoxylimit(x, y + 3, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 2, y, "≤");
				color_change(fin_color);
				gotoxylimit(x - 12, y - 2, "°");
				gotoxylimit(x - 10, y - 2, "°");
				gotoxylimit(x - 8, y - 2, "°");
				gotoxylimit(x - 6, y - 2, "°");
				gotoxylimit(x - 4, y - 2, "°");
				gotoxylimit(x - 2, y - 2, "°");
				gotoxylimit(x - 12, y + 4, "″");
				gotoxylimit(x - 10, y + 4, "″");
				gotoxylimit(x - 8, y + 4, "″");
				gotoxylimit(x - 6, y + 4, "″");
				gotoxylimit(x - 4, y + 4, "″");
				gotoxylimit(x - 2, y + 4, "″");
				gotoxylimit(x - 14, y - 1, "°");
				gotoxylimit(x - 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x - 18, y, "⒏");
				gotoxylimit(x - 16, y, "⒑");
				gotoxylimit(x - 18, y + 1, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 18, y + 2, "⒏");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
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
				gotoxylimit(x, y - 1, "♂");
				gotoxylimit(x + 2, y - 1, "♂");\
				gotoxylimit(x + 4, y - 1, "♂");
				gotoxylimit(x + 6, y - 1, "♂");
				gotoxylimit(x + 8, y - 1, "♂");
				gotoxylimit(x + 10, y - 1, "♂");
				gotoxylimit(x + 12, y - 1, "♂");
				gotoxylimit(x, y, "♂");
				gotoxylimit(x + 4, y, "♂");
				gotoxylimit(x + 6, y, "♂");
				gotoxylimit(x + 8, y, "♂");
				gotoxylimit(x + 10, y, "♂");
				gotoxylimit(x + 12, y, "♂");
				gotoxylimit(x + 14, y, "♂");
				gotoxylimit(x, y + 1, "♂");
				gotoxylimit(x + 2, y + 1, "♂");
				gotoxylimit(x + 4, y + 1, "♂");
				gotoxylimit(x + 6, y + 1, "♂");
				gotoxylimit(x + 8, y + 1, "♂");
				gotoxylimit(x + 10, y + 1, "♂");
				gotoxylimit(x + 12, y + 1, "♂");
				gotoxylimit(x + 14, y + 1, "♂");
				gotoxylimit(x, y + 2, "♂");
				gotoxylimit(x + 2, y + 2, "♂");
				gotoxylimit(x + 4, y + 2, "♂");
				gotoxylimit(x + 6, y + 2, "♂");
				gotoxylimit(x + 8, y + 2, "♂");
				gotoxylimit(x + 10, y + 2, "♂");
				gotoxylimit(x + 12, y + 2, "♂");
				gotoxylimit(x + 14, y + 2, "♂");
				gotoxylimit(x, y + 3, "♂");
				gotoxylimit(x + 2, y + 3, "♂");
				gotoxylimit(x + 4, y + 3, "♂");
				gotoxylimit(x + 6, y + 3, "♂");
				gotoxylimit(x + 8, y + 3, "♂");
				gotoxylimit(x + 10, y + 3, "♂");
				gotoxylimit(x + 12, y + 3, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 2, y, "≤");
				color_change(fin_color);
				gotoxylimit(x + 2, y - 2, "°");
				gotoxylimit(x + 4, y - 2, "°");
				gotoxylimit(x + 6, y - 2, "°");
				gotoxylimit(x + 8, y - 2, "°");
				gotoxylimit(x + 10, y - 2, "°");
				gotoxylimit(x + 12, y - 2, "°");
				gotoxylimit(x + 2, y + 4, "″");
				gotoxylimit(x + 4, y + 4, "″");
				gotoxylimit(x + 6, y + 4, "″");
				gotoxylimit(x + 8, y + 4, "″");
				gotoxylimit(x + 10, y + 4, "″");
				gotoxylimit(x + 12, y + 4, "″");
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 3, "″");
				color_change(tail_color);
				gotoxylimit(x + 16, y, "⒏");
				gotoxylimit(x + 18, y, "⒑");
				gotoxylimit(x + 16, y + 1, "⒏");
				gotoxylimit(x + 18, y + 1, "⒏");
				gotoxylimit(x + 16, y + 2, "⒏");
				gotoxylimit(x + 18, y + 2 ,"⒑");
				gotoxylimit(x + 18, y - 1, "⒏");
				gotoxylimit(x + 20, y - 1, "″");
				gotoxylimit(x + 18, y + 3, "⒏");
				gotoxylimit(x + 20, y + 3, "°");
				gotoxylimit(x + 20, y - 2, "⒏");
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
				gotoxylimit(x - 10, y - 1, "♂");
				gotoxylimit(x - 8, y - 1, "♂");
				gotoxylimit(x - 6, y - 1, "♂");
				gotoxylimit(x - 4, y - 1, "♂");
				gotoxylimit(x - 2, y - 1, "♂");
				gotoxylimit(x, y - 1, "♂");
				gotoxylimit(x + 2, y - 1, "♂");
				gotoxylimit(x - 12, y, "♂");
				gotoxylimit(x - 10, y, "♂");
				gotoxylimit(x - 8, y, "♂");
				gotoxylimit(x - 6, y, "♂");
				gotoxylimit(x - 4, y, "♂");
				gotoxylimit(x - 2, y, "♂");
				gotoxylimit(x + 2, y, "♂");
				gotoxylimit(x - 12, y + 1, "♂");
				gotoxylimit(x - 10, y + 1, "♂");
				gotoxylimit(x - 8, y + 1, "♂");
				gotoxylimit(x - 6, y + 1, "♂");
				gotoxylimit(x - 4, y + 1, "♂");
				gotoxylimit(x - 2, y + 1, "♂");
				gotoxylimit(x, y + 1, "♂");
				gotoxylimit(x + 2, y + 1, "♂");
				gotoxylimit(x - 12, y + 2, "♂");
				gotoxylimit(x - 10, y + 2, "♂");
				gotoxylimit(x - 8, y + 2, "♂");
				gotoxylimit(x - 6, y + 2, "♂");
				gotoxylimit(x - 4, y + 2, "♂");
				gotoxylimit(x - 2, y + 2, "♂");
				gotoxylimit(x , y + 2, "♂");
				gotoxylimit(x + 2, y + 2, "♂");
				gotoxylimit(x - 12, y + 3, "♂");
				gotoxylimit(x - 10, y + 3, "♂");
				gotoxylimit(x - 8, y + 3, "♂");
				gotoxylimit(x - 6, y + 3, "♂");
				gotoxylimit(x - 4, y + 3, "♂");
				gotoxylimit(x - 2, y + 3, "♂");
				gotoxylimit(x , y + 3, "♂");
				gotoxylimit(x + 2, y + 3, "♂");
				gotoxylimit(x - 10, y + 4, "♂");
				gotoxylimit(x - 8, y + 4, "♂");
				gotoxylimit(x - 6, y + 4, "♂");
				gotoxylimit(x - 4, y + 4, "♂");
				gotoxylimit(x - 2, y + 4, "♂");
				gotoxylimit(x , y + 4, "♂");
				gotoxylimit(x + 2, y + 4, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x, y, "≤");
				color_change(fin_color);
				gotoxylimit(x - 10, y - 2, "°");
				gotoxylimit(x - 8, y - 2, "°");
				gotoxylimit(x - 6, y - 2, "°");
				gotoxylimit(x - 4, y - 2, "°");
				gotoxylimit(x - 2, y - 2, "°");
				gotoxylimit(x, y - 2, "°");
				gotoxylimit(x - 10, y + 5, "″");
				gotoxylimit(x - 8, y + 5, "″");
				gotoxylimit(x - 6, y + 5, "″");
				gotoxylimit(x - 4, y + 5, "″");
				gotoxylimit(x - 2, y + 5, "″");
				gotoxylimit(x , y + 5, "″");
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 4, "″");
				color_change(tail_color);
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
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 18, y + 4, "⒑");
				gotoxylimit(x - 16, y + 4, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
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
				gotoxylimit(x, y - 1, "♂");
				gotoxylimit(x + 2, y - 1, "♂");
				gotoxylimit(x + 4, y - 1, "♂");
				gotoxylimit(x + 6, y - 1, "♂");
				gotoxylimit(x + 8, y - 1, "♂");
				gotoxylimit(x + 10, y - 1, "♂");
				gotoxylimit(x + 12, y - 1, "♂");
				gotoxylimit(x, y, "♂");
				gotoxylimit(x + 4, y, "♂");
				gotoxylimit(x + 6, y, "♂");
				gotoxylimit(x + 8, y, "♂");
				gotoxylimit(x + 10, y, "♂");
				gotoxylimit(x + 12, y, "♂");
				gotoxylimit(x + 14, y, "♂");
				gotoxylimit(x, y + 1, "♂");
				gotoxylimit(x + 2, y + 1, "♂");
				gotoxylimit(x + 4, y + 1, "♂");
				gotoxylimit(x + 6, y + 1, "♂");
				gotoxylimit(x + 8, y + 1, "♂");
				gotoxylimit(x + 10, y + 1, "♂");
				gotoxylimit(x + 12, y + 1, "♂");
				gotoxylimit(x + 14, y + 1, "♂");
				gotoxylimit(x, y + 2, "♂");
				gotoxylimit(x + 2, y + 2, "♂");
				gotoxylimit(x + 4, y + 2, "♂");
				gotoxylimit(x + 6, y + 2, "♂");
				gotoxylimit(x + 8, y + 2, "♂");
				gotoxylimit(x + 10, y + 2, "♂");
				gotoxylimit(x + 12, y + 2, "♂");
				gotoxylimit(x + 14, y + 2, "♂");
				gotoxylimit(x, y + 3, "♂");
				gotoxylimit(x + 2, y + 3, "♂");
				gotoxylimit(x + 4, y + 3, "♂");
				gotoxylimit(x + 6, y + 3, "♂");
				gotoxylimit(x + 8, y + 3, "♂");
				gotoxylimit(x + 10, y + 3, "♂");
				gotoxylimit(x + 12, y + 3, "♂");
				gotoxylimit(x + 14, y + 3, "♂");
				gotoxylimit(x, y + 4, "♂");
				gotoxylimit(x + 2, y + 4, "♂");
				gotoxylimit(x + 4, y + 4, "♂");
				gotoxylimit(x + 6, y + 4, "♂");
				gotoxylimit(x + 8, y + 4, "♂");
				gotoxylimit(x + 10, y + 4, "♂");
				gotoxylimit(x + 12, y + 4, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 2, y, "≤");
				color_change(fin_color);
				gotoxylimit(x + 2, y - 2, "°");
				gotoxylimit(x + 4, y - 2, "°");
				gotoxylimit(x + 6, y - 2, "°");
				gotoxylimit(x + 8, y - 2, "°");
				gotoxylimit(x + 10, y - 2, "°");
				gotoxylimit(x + 12, y - 2, "°");
				gotoxylimit(x + 2, y + 5, "″");
				gotoxylimit(x + 4, y + 5, "″");
				gotoxylimit(x + 6, y + 5, "″");
				gotoxylimit(x + 8, y + 5, "″");
				gotoxylimit(x + 10, y + 5, "″");
				gotoxylimit(x + 12, y + 5, "″");
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 4, "″");
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
				gotoxylimit(x + 16, y + 3, "⒏");
				gotoxylimit(x + 18, y + 3, "⒑"); 
				gotoxylimit(x + 20, y + 3, "°");
				gotoxylimit(x + 20, y - 2, "⒏");
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
				gotoxylimit(x - 10, y - 1, "♂");
				gotoxylimit(x - 8, y - 1, "♂");
				gotoxylimit(x - 6, y - 1, "♂");
				gotoxylimit(x - 4, y - 1, "♂");
				gotoxylimit(x - 2, y - 1, "♂");
				gotoxylimit(x , y - 1, "♂");
				gotoxylimit(x - 12, y, "♂");
				gotoxylimit(x - 10, y, "♂");
				gotoxylimit(x - 8, y, "♂");
				gotoxylimit(x - 6, y, "♂");
				gotoxylimit(x - 4, y, "♂");
				gotoxylimit(x, y, "♂");
				gotoxylimit(x + 2, y, "♂");
				gotoxylimit(x - 12, y + 1, "♂");
				gotoxylimit(x - 10, y + 1, "♂");
				gotoxylimit(x - 8, y + 1, "♂");
				gotoxylimit(x - 6, y + 1, "♂");
				gotoxylimit(x - 4, y + 1, "♂");
				gotoxylimit(x - 2, y + 1, "♂");
				gotoxylimit(x, y + 1, "♂");
				gotoxylimit(x + 2, y + 1, "♂");
				gotoxylimit(x - 12, y + 2, "♂");
				gotoxylimit(x - 10, y + 2, "♂");
				gotoxylimit(x - 8, y + 2, "♂");
				gotoxylimit(x - 6, y + 2, "♂");
				gotoxylimit(x - 4, y + 2, "♂");
				gotoxylimit(x - 2, y + 2, "♂");
				gotoxylimit(x , y + 2, "♂"); 
				gotoxylimit(x + 2, y + 2, "♂");
				gotoxylimit(x - 12, y + 3, "♂");
				gotoxylimit(x - 10, y + 3, "♂");
				gotoxylimit(x - 8, y + 3, "♂");
				gotoxylimit(x - 6, y + 3, "♂");
				gotoxylimit(x - 4, y + 3, "♂");
				gotoxylimit(x - 2, y + 3, "♂");
				gotoxylimit(x, y + 3, "♂");
				gotoxylimit(x + 2, y + 3, "♂");
				gotoxylimit(x + 2, y + 2, "♂");
				gotoxylimit(x - 10, y + 4, "♂");
				gotoxylimit(x - 8, y + 4, "♂");
				gotoxylimit(x - 6, y + 4, "♂");
				gotoxylimit(x - 4, y + 4, "♂");
				gotoxylimit(x - 2, y + 4, "♂");
				gotoxylimit(x, y + 4, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x - 2, y, "≤");
				color_change(fin_color);
				gotoxylimit(x - 10, y - 2, "°");
				gotoxylimit(x - 8, y - 2, "°");
				gotoxylimit(x - 6, y - 2, "°");
				gotoxylimit(x - 4, y - 2, "°");
				gotoxylimit(x - 2, y - 2, "°");
				gotoxylimit(x - 10, y + 5, "″");
				gotoxylimit(x - 8, y + 5, "″");
				gotoxylimit(x - 6, y + 5, "″");
				gotoxylimit(x - 4, y + 5, "″");
				gotoxylimit(x - 2, y + 5, "″");
				gotoxylimit(x - 12, y - 1, "°");
				gotoxylimit(x - 12, y + 4, "″");
				color_change(tail_color);
				gotoxylimit(x - 18, y, "″");
				gotoxylimit(x - 16, y, "⒏");
				gotoxylimit(x - 14, y, "⒑");
				gotoxylimit(x - 16, y + 1, "⒑");
				gotoxylimit(x - 14, y + 1, "⒑");
				gotoxylimit(x - 16, y + 2, "⒑");
				gotoxylimit(x - 14, y + 2, "⒑");
				gotoxylimit(x - 20, y - 1, "″");
				gotoxylimit(x - 18, y - 1, "⒑");
				gotoxylimit(x - 16, y - 1, "⒑");
				gotoxylimit(x - 20, y - 2, "⒑");
				gotoxylimit(x - 18, y - 2, "⒑");
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
				gotoxylimit(x - 4, y, "⒏");
				gotoxylimit(x - 4, y + 1, " |");
				gotoxylimit(x - 4, y + 2, " |");
				gotoxylimit(x - 4, y + 3, "⒏");
				color_change(body_color);
				gotoxylimit(x, y - 1, "♂");
				gotoxylimit(x + 2, y - 1, "♂");
				gotoxylimit(x + 4, y - 1, "♂");
				gotoxylimit(x + 6, y - 1, "♂");
				gotoxylimit(x + 8, y - 1, "♂");
				gotoxylimit(x + 10, y - 1, "♂");
				gotoxylimit(x + 12, y - 1, "♂");
				gotoxylimit(x - 2, y, "♂");
				gotoxylimit(x, y, "♂");
				gotoxylimit(x + 4, y, "♂");
				gotoxylimit(x + 6, y, "♂");
				gotoxylimit(x + 8, y, "♂");
				gotoxylimit(x + 10, y, "♂");
				gotoxylimit(x + 12, y, "♂");
				gotoxylimit(x + 14, y, "♂");
				gotoxylimit(x - 2, y + 1, "♂");
				gotoxylimit(x, y + 1, "♂");
				gotoxylimit(x + 2, y + 1, "♂");
				gotoxylimit(x + 4, y + 1, "♂");
				gotoxylimit(x + 6, y + 1, "♂");
				gotoxylimit(x + 8, y + 1, "♂");
				gotoxylimit(x + 10, y + 1, "♂");
				gotoxylimit(x + 12, y + 1, "♂");
				gotoxylimit(x + 14, y + 1, "♂");
				gotoxylimit(x - 2, y + 2, "♂");
				gotoxylimit(x, y + 2, "♂");
				gotoxylimit(x + 2, y + 2, "♂");
				gotoxylimit(x + 4, y + 2, "♂");
				gotoxylimit(x + 6, y + 2, "♂");
				gotoxylimit(x + 8, y + 2, "♂");
				gotoxylimit(x + 10, y + 2, "♂");
				gotoxylimit(x + 12, y + 2, "♂");
				gotoxylimit(x + 14, y + 2, "♂");
				gotoxylimit(x - 2, y + 3, "♂");
				gotoxylimit(x, y + 3, "♂");
				gotoxylimit(x + 2, y + 3, "♂");
				gotoxylimit(x + 4, y + 3, "♂");
				gotoxylimit(x + 6, y + 3, "♂");
				gotoxylimit(x + 8, y + 3, "♂");
				gotoxylimit(x + 10, y + 3, "♂");
				gotoxylimit(x + 12, y + 3, "♂");
				gotoxylimit(x + 14, y + 3, "♂");
				gotoxylimit(x, y + 4, "♂");
				gotoxylimit(x + 2, y + 4, "♂");
				gotoxylimit(x + 4, y + 4, "♂");
				gotoxylimit(x + 6, y + 4, "♂");
				gotoxylimit(x + 8, y + 4, "♂");
				gotoxylimit(x + 10, y + 4, "♂");
				gotoxylimit(x + 12, y + 4, "♂");	// 个 何盒
				color_change(eye_color);
				gotoxylimit(x + 2, y, "≤");
				color_change(fin_color);
				gotoxylimit(x + 2, y - 2, "°");
				gotoxylimit(x + 4, y - 2, "°");
				gotoxylimit(x + 6, y - 2, "°");
				gotoxylimit(x + 8, y - 2, "°");
				gotoxylimit(x + 10, y - 2, "°");
				gotoxylimit(x + 12, y - 2, "°");
				gotoxylimit(x + 2, y + 5, "″");
				gotoxylimit(x + 4, y + 5, "″");
				gotoxylimit(x + 6, y + 5, "″");
				gotoxylimit(x + 8, y + 5, "″");
				gotoxylimit(x + 10, y + 5, "″");
				gotoxylimit(x + 12, y + 5, "″");
				gotoxylimit(x + 14, y - 1, "°");
				gotoxylimit(x + 14, y + 4 ,"″");
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
				gotoxylimit(x + 18, y + 3, "⒑");
				gotoxylimit(x + 20, y + 3, "°");
				gotoxylimit(x + 20, y - 2, "⒏");
				gotoxylimit(x + 22, y - 2 ,"⒏");
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
				gotoxy(x + 6, y + 1);
				printf("⒑");
				gotoxy(x + 6, y + 2);
				printf("| ");
				gotoxy(x + 6, y + 3);
				printf("⒑");
				color_change(body_color);
				gotoxy(x - 8, y - 1);
				printf("♂♂♂♂♂♂");
				gotoxy(x - 12, y);
				printf("♂♂♂♂♂♂  ♂");
				gotoxy(x - 12, y + 1);
				printf("♂♂♂♂♂♂♂♂♂");
				gotoxy(x - 12, y + 2);
				printf("♂♂♂♂♂♂♂♂♂");
				gotoxy(x - 12, y + 3);
				printf("♂♂♂♂♂♂♂♂♂");
				gotoxy(x - 8, y + 4);
				printf("♂♂♂♂♂♂");	// 个 何盒
				color_change(eye_color);
				gotoxy(x, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x - 8, y - 2);
				printf("°°°°°");
				gotoxy(x - 8, y + 5);
				printf("″″″″″");
				gotoxy(x - 12, y - 1);
				printf("°°");
				gotoxy(x - 12, y + 4);
				printf("″″");
				color_change(tail_color);
				gotoxy(x - 18, y);
				printf("″⒏⒑");
				gotoxy(x - 16, y + 1);
				printf("⒑⒑");
				gotoxy(x - 16, y + 2);
				printf("⒑⒑");
				gotoxy(x - 20, y - 1);
				printf("″⒑⒑");
				gotoxy(x - 20, y - 2);
				printf("⒑⒑");
				gotoxy(x - 18, y + 3);
				printf("°⒏⒑");
				gotoxy(x - 20, y + 4);
				printf("°⒑⒑");
				gotoxy(x - 20, y + 5);
				printf("⒑⒑");
			}
			else
			{
				color_change(mouth_color);
				gotoxy(x - 4, y + 1);
				printf("⒏");
				gotoxy(x - 4, y + 2);
				printf(" |");
				gotoxy(x - 4, y + 3);
				printf("⒏");
				color_change(body_color);
				gotoxy(x, y - 1);
				printf("♂♂♂♂♂♂♂");
				gotoxy(x - 2, y);
				printf("♂♂  ♂♂♂♂♂♂♂");
				gotoxy(x - 2, y + 1);
				printf("♂♂♂♂♂♂♂♂♂♂");
				gotoxy(x - 2, y + 2);
				printf("♂♂♂♂♂♂♂♂♂♂");
				gotoxy(x - 2, y + 3);
				printf("♂♂♂♂♂♂♂♂♂♂");
				gotoxy(x, y + 4);
				printf("♂♂♂♂♂♂♂");// 个 何盒
				color_change(eye_color);
				gotoxy(x + 2, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x + 2, y - 2);
				printf("°°°°°°");
				gotoxy(x + 2, y + 5);
				printf("″″″″″″");
				gotoxy(x + 14, y - 1);
				printf("°°");
				gotoxy(x + 14, y + 4);
				printf("″″");
				color_change(tail_color);
				gotoxy(x + 18, y);
				printf("⒏⒑″");
				gotoxy(x + 18, y + 1);
				printf("⒏⒏");
				gotoxy(x + 18, y + 2);
				printf("⒏⒏");
				gotoxy(x + 20, y - 1);
				printf("⒏⒏″");
				gotoxy(x + 18, y + 3);
				printf("⒏⒑°");
				gotoxy(x + 22, y - 2);
				printf("⒏⒏");
				gotoxy(x + 20, y + 4);
				printf("⒏⒏°");
				gotoxy(x + 22, y + 5);
				printf("⒏⒏");
			}
		}
		if (size == 22) {	//size 15X8
			if (to_right == 0) {
				color_change(mouth_color);
				gotoxy(x + 8, y + 1);
				printf("⒑");
				gotoxy(x + 8, y + 2);
				printf("| ");
				gotoxy(x + 8, y + 3);
				printf("⒑");
				color_change(body_color);
				gotoxy(x - 8, y - 1);
				printf("♂♂♂♂♂♂♂");
				gotoxy(x - 12, y);
				printf("♂♂♂♂♂♂  ♂♂");
				gotoxy(x - 12, y + 1);
				printf("♂♂♂♂♂♂♂♂♂♂");
				gotoxy(x - 12, y + 2);
				printf("♂♂♂♂♂♂♂♂♂♂");
				gotoxy(x - 12, y + 3);
				printf("♂♂♂♂♂♂♂♂♂♂");
				gotoxy(x - 8, y + 4);
				printf("♂♂♂♂♂♂♂");	// 个 何盒
				color_change(eye_color);
				gotoxy(x, y);
				printf("≤");
				color_change(fin_color);
				gotoxy(x - 8, y - 2);
				printf("°°°°°°");
				gotoxy(x - 8, y + 5);
				printf("″″″″″″");
				gotoxy(x - 12, y - 1);
				printf("°°");
				gotoxy(x - 12, y + 4);
				printf("″″");
				color_change(tail_color);
				gotoxy(x - 18, y);
				printf("″⒏⒑");
				gotoxy(x - 16, y + 1);
				printf("⒑⒑");
				gotoxy(x - 16, y + 2);
				printf("⒑⒑");
				gotoxy(x - 20, y - 1);
				printf("″⒑⒑");
				gotoxy(x - 20, y - 2);
				printf("⒑⒑");
				gotoxy(x - 18, y + 3);
				printf("°⒏⒑");
				gotoxy(x - 20, y + 4);
				printf("°⒑⒑");
				gotoxy(x - 20, y + 5);
				printf("⒑⒑");
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