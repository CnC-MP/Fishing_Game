#pragma once

#include "main_interface.h"
#include "cursor_status.h"
#include <conio.h>
#include "interface_design_tool.h"
#include "player_fish_image.h"
#include <cstring>
#include "gotoxy_calc.h"

#define MAX_MAIN_INTERFACE_NAME_LEN 8

void gamestart();
void main_interface_cursor(cursor_location* loc);
void main_interface_cursor_write(cursor_location loc, int color);
void difficulty_interface_cursor(cursor_location* loc);
void difficulty_interface_cursor_write(cursor_location loc, int color);
void difficulty_interface();
void main_interface_write02();

void gamestart() {
	xlimit = 148;
	ylimit = 44;
	hideCursor();
	system("mode con:cols=150 lines=45");
	cursor_location mainmenu_cursor;
	mainmenu_cursor.xPos = 0;
	mainmenu_cursor.yPos = 0;
	while (true) {
		system("cls");
		main_interface_write01();
		main_interface_write02();
		main_interface_cursor_write(mainmenu_cursor, 12);
		main_interface_cursor(&mainmenu_cursor);
		if (enter_key == 13 && mainmenu_cursor.yPos == 0) { //새로하기
			difficulty_interface();
		}
		else if (enter_key == 13 && mainmenu_cursor.yPos == 1) { //이어하기
			
		}
		else if (enter_key == 13 && mainmenu_cursor.yPos == 2) { //종료하기
			system("cls");
			exit(1);
		}
	}
}

void main_interface_cursor(cursor_location* loc) {
	vertical_cursor_reverse(loc, 0, 2, 1, 1, 0);
}

void main_interface_write02() {
	gotoxy(71, 32);
	printf("새로하기");
	gotoxy(71, 34);
	printf("이어하기");
	gotoxy(71, 36);
	printf("종료하기");
}

void main_interface_cursor_write(cursor_location loc, int color) {
	char temp_str[3][MAX_MAIN_INTERFACE_NAME_LEN + 1];
	strcpy_s(temp_str[0], sizeof(char) * MAX_MAIN_INTERFACE_NAME_LEN + 1, "새로하기");
	strcpy_s(temp_str[1], sizeof(char) * MAX_MAIN_INTERFACE_NAME_LEN + 1, "이어하기");
	strcpy_s(temp_str[2], sizeof(char) * MAX_MAIN_INTERFACE_NAME_LEN + 1, "종료하기");
	color_change(color);
	gotoxy(mid_pos(MAX_MAIN_INTERFACE_NAME_LEN, 150), 32 + 2 * loc.yPos);
	printf("%s", temp_str[loc.yPos]);
	color_change(7);
}

void difficulty_interface_cursor(cursor_location* loc) {
	horizontal_cursor(loc, 0, 2, 1, 1, 1);
}

void difficulty_interface_cursor_write(cursor_location loc, int color) {
	char temp_difficult[3][3];
	strcpy_s(temp_difficult[0], sizeof(char) * 3, "하");
	strcpy_s(temp_difficult[1], sizeof(char) * 3, "중");
	strcpy_s(temp_difficult[2], sizeof(char) * 3, "상");
	color_change(color);
	gotoxy(38 + 36 * loc.xPos, 20);
	printf("%s", temp_difficult[loc.xPos]);
	color_change(7);
}

void difficulty_interface_write() {
	gotoxy(38, 20);
	printf("하");
	gotoxy(74, 20);
	printf("중");
	gotoxy(110, 20);
	printf("상");
}

void difficulty_interface() {
	cursor_location difficulty_cursor;
	difficulty_cursor.xPos = 0;
	difficulty_cursor.yPos = 0;
	while (true) {
		system("cls");
		difficulty_interface_write();
		difficulty_interface_cursor_write(difficulty_cursor, 12);
		difficulty_interface_cursor(&difficulty_cursor);
	}
}