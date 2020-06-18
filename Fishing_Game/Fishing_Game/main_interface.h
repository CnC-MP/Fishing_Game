#pragma once
#include <cstdlib>
#include "player_fish_image.h"
#include "interface_design_tool.h"
#include "gameplay.h"

void main_interface_write01();
void main_interface_image(int color1, int color2, int color3, int color4, int color5);

void main_interface_write01() {
	main_interface_image(11, 12, 13, 14, 15);
}
void main_interface_image(int color1, int color2, int color3, int color4, int color5) {
	color_change(color1);  //4: 빨간색 6: 노란색 0: 검은색 12: 연한 빨간색
	int x = 50, y = 0;
	y += 17;
	gotoxylimit_line(x + 10, y - 4, "■", 9);
	gotoxylimit_line(x + 6, y - 3, "■", 2);
	gotoxylimit(x + 16, y - 3, "■");
	gotoxylimit_line(x + 28, y - 3, "■", 4);
	gotoxylimit_line(x + 2, y - 2, "■", 2);
	gotoxylimit(x + 18, y - 2, "■");
	gotoxylimit(x + 22, y - 2, "■");
	gotoxylimit(x + 30, y - 2, "■");
	gotoxylimit_line(x + 36, y - 2, "■", 2);
	gotoxylimit(x, y - 1, "■");
	gotoxylimit(x + 16, y - 1, "■");
	gotoxylimit(x + 18, y - 1, "■");
	gotoxylimit(x + 22, y - 1, "■");
	gotoxylimit(x + 26, y - 1, "■");
	gotoxylimit(x + 30, y - 1, "■");
	gotoxylimit(x + 40, y - 1, "■");
	gotoxylimit(x, y, "■");
	gotoxylimit(x + 18, y, "■");
	gotoxylimit(x + 22, y, "■");
	gotoxylimit(x + 26, y, "■");
	gotoxylimit(x + 34, y, "■");
	gotoxylimit(x + 42, y, "■");
	gotoxylimit(x, y + 1, "■");
	gotoxylimit(x + 18, y + 1, "■");
	gotoxylimit(x + 34, y + 1, "■");
	gotoxylimit(x + 42, y + 1, "■");
	gotoxylimit(x + 2, y + 2, "■");
	gotoxylimit(x + 18, y + 2, "■");
	gotoxylimit(x + 22, y + 2, "■");
	gotoxylimit(x + 30, y + 2, "■");
	gotoxylimit(x + 34, y + 2, "■");
	gotoxylimit(x + 40, y + 2, "■");
	gotoxylimit(x + 4, y + 3, "■");
	gotoxylimit(x + 6, y + 3, "■");
	gotoxylimit(x + 18, y + 3, "■");
	gotoxylimit(x + 22, y + 3, "■");
	gotoxylimit(x + 26, y + 3, "■");
	gotoxylimit(x + 30, y + 3, "■");
	gotoxylimit(x + 38, y + 3, "■");
	gotoxylimit_line(x + 8, y + 4, "■", 3);
	gotoxylimit(x + 16, y + 4, "■");
	gotoxylimit(x + 26, y + 4, "■");
	gotoxylimit(x + 36, y + 4, "■");
	gotoxylimit(x + 34, y + 4, "■");
	gotoxylimit_line(x + 14, y + 5, "■", 10);  // 6 8 7: 가운데 비움, 테두리

	color_change(color2);
	gotoxylimit_line(x + 10, y - 3, "■", 3);
	gotoxylimit_line(x + 18, y - 3, "■", 5);
	gotoxylimit_line(x + 6, y - 2, "■", 6);
	gotoxylimit(x + 20, y - 2, "■");
	gotoxylimit_line(x + 24, y - 2, "■", 3);
	gotoxylimit_line(x + 32, y - 2, "■", 2);
	gotoxylimit_line(x + 2, y - 1, "■", 7);
	gotoxylimit(x + 20, y - 1, "■");
	gotoxylimit(x + 24, y - 1, "■");
	gotoxylimit(x + 28, y - 1, "■");
	gotoxylimit_line(x + 32, y - 1, "■", 4);
	gotoxylimit_line(x + 2, y, "■", 8);
	gotoxylimit(x + 20, y, "■");
	gotoxylimit(x + 24, y, "■");
	gotoxylimit_line(x + 28, y, "■", 3);
	gotoxylimit_line(x + 36, y, "■", 3);
	gotoxylimit_line(x + 2, y + 1, "■", 8);
	gotoxylimit_line(x + 20, y + 1, "■", 7);
	gotoxylimit_line(x + 36, y + 1, "■", 3);
	gotoxylimit_line(x + 4, y + 2, "■", 7);
	gotoxylimit(x + 20, y + 2, "■");
	gotoxylimit_line(x + 24, y + 2, "■", 3);
	gotoxylimit(x + 32, y + 2, "■");
	gotoxylimit_line(x + 36, y + 2, "■", 2);
	gotoxylimit_line(x + 8, y + 3, "■", 5);
	gotoxylimit(x + 20, y + 3, "■");
	gotoxylimit(x + 24, y + 3, "■");
	gotoxylimit(x + 28, y + 3, "■");
	gotoxylimit_line(x + 32, y + 3, "■", 3);
	gotoxylimit(x + 14, y + 4, "■");
	gotoxylimit_line(x + 18, y + 4, "■", 4);
	gotoxylimit_line(x + 28, y + 4, "■", 3);

	color_change(color3);
	gotoxylimit(x + 10, y - 1, "★");

	color_change(color4);
	gotoxylimit_line(x + 48, y - 4, "■", 3);
	gotoxylimit_line(x + 44, y - 3, "■", 4);
	gotoxylimit_line(x + 42, y - 2, "■", 4);
	gotoxylimit_line(x + 42, y - 1, "■", 3);
	gotoxylimit(x + 44, y, "■");
	gotoxylimit(x + 44, y + 1, "■");
	gotoxylimit_line(x + 42, y + 2, "■", 3);
	gotoxylimit_line(x + 42, y + 3, "■", 4);
	gotoxylimit_line(x + 44, y + 4, "■", 4);
	gotoxylimit_line(x + 48, y + 5, "■", 3);
	color_change(color5);
	gotoxylimit_line(x + 12, y - 5, "▲", 8);
	gotoxylimit_line(x + 28, y - 4, "▲", 2);
	gotoxylimit_line(x + 12, y + 5, "▼", 1);
	gotoxylimit_line(x + 14, y + 6, "▼", 9);
}