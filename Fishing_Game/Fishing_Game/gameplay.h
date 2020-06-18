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

void gamestart() {
	int temp;
	hideCursor();
	system("mode con:cols=150 lines=45");
	cursor_location mainmenu_cursor;
	mainmenu_cursor.xPos = 0;
	mainmenu_cursor.yPos = 0;


	//int i = 1;
	//int z = 1;

	while (true) {
		system("cls");

		main_interface_write();
		main_interface_cursor_write(mainmenu_cursor, 12);
		main_interface_cursor(&mainmenu_cursor);
		if (enter_key == 13 && mainmenu_cursor.yPos == 0) {

		}
		else if (enter_key == 13 && mainmenu_cursor.yPos == 1) {

		}
		else if (enter_key == 13 && mainmenu_cursor.yPos == 2) {

		}
	}
}

void main_interface_cursor(cursor_location* loc) {
	vertical_cursor_reverse(loc, 0, 2, 1, 1, 0);
}

void main_interface_cursor_write(cursor_location loc, int color) {
	char temp_str[3][MAX_MAIN_INTERFACE_NAME_LEN + 1];
	strcpy_s(temp_str[0], sizeof(char) * MAX_MAIN_INTERFACE_NAME_LEN + 1, "새로하기");
	strcpy_s(temp_str[1], sizeof(char) * MAX_MAIN_INTERFACE_NAME_LEN + 1, "이어하기");
	strcpy_s(temp_str[2], sizeof(char) * MAX_MAIN_INTERFACE_NAME_LEN + 1, "종료하기");
	color_change(color);
	gotoxy(mid_pos(MAX_MAIN_INTERFACE_NAME_LEN, 150), 0 + 1 * loc.yPos);
	printf("%s", temp_str[loc.yPos]);
	color_change(7);
}