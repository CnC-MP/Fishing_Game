#pragma once

#include "main_interface.h"
#include "cursor_status.h"
#include <conio.h>
#include "interface_design_tool.h"
#include "player_fish_image.h"
#include <cstring>
#include "gotoxy_calc.h"
#include "body_position_imformation_generate.h";

#define MAX_MAIN_INTERFACE_NAME_LEN 8

void gamestart();
void main_interface_cursor(cursor_location* loc);
void main_interface_cursor_write(cursor_location loc, int color);
void difficulty_interface_cursor(cursor_location* loc, int clear_stage);
void difficulty_interface_cursor_write(cursor_location loc, int color);
void difficulty_interface_write(int clear_stage);
void difficulty_interface();
void main_interface_write02();
void stage_lock(int x);
void real_gamestart();

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
		if (enter_key == 13 && mainmenu_cursor.yPos == 0) { //�����ϱ�
			enter_key = 0;
			difficulty_interface();
		}
		else if (enter_key == 13 && mainmenu_cursor.yPos == 1) { //�̾��ϱ�
			enter_key = 0;
		}
		else if (enter_key == 13 && mainmenu_cursor.yPos == 2) { //�����ϱ�
			enter_key = 0;
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
	printf("�����ϱ�");
	gotoxy(71, 34);
	printf("�̾��ϱ�");
	gotoxy(71, 36);
	printf("�����ϱ�");
}

void main_interface_cursor_write(cursor_location loc, int color) {
	char temp_str[3][MAX_MAIN_INTERFACE_NAME_LEN + 1];
	strcpy_s(temp_str[0], sizeof(char) * MAX_MAIN_INTERFACE_NAME_LEN + 1, "�����ϱ�");
	strcpy_s(temp_str[1], sizeof(char) * MAX_MAIN_INTERFACE_NAME_LEN + 1, "�̾��ϱ�");
	strcpy_s(temp_str[2], sizeof(char) * MAX_MAIN_INTERFACE_NAME_LEN + 1, "�����ϱ�");
	color_change(color);
	gotoxy(mid_pos(MAX_MAIN_INTERFACE_NAME_LEN, 150), 32 + 2 * loc.yPos);
	printf("%s", temp_str[loc.yPos]);
	color_change(7);
}

void difficulty_interface_cursor(cursor_location* loc, int clear_stage) {
	if (clear_stage > 2) {
		clear_stage = 2;
	}
	horizontal_cursor(loc, 0, clear_stage, 1, 1, 1);
}

void difficulty_interface_cursor_write(cursor_location loc, int color) {
	char temp_difficult[3][3];
	strcpy_s(temp_difficult[0], sizeof(char) * 3, "��");
	strcpy_s(temp_difficult[1], sizeof(char) * 3, "��");
	strcpy_s(temp_difficult[2], sizeof(char) * 3, "��");
	color_change(color);
	gotoxy(38 + 36 * loc.xPos, 20);
	printf("%s", temp_difficult[loc.xPos]);
	color_change(7);
}

void difficulty_interface_write(int clear_stage) { 
	gotoxy(38, 20);
	printf("��");
	gotoxy(74, 20);
	printf("��");
	gotoxy(110, 20);
	printf("��");
	if (clear_stage < 1) { // yPos�� +-1, xPos�� +-2
		stage_lock(74);
	}
	if (clear_stage < 2) {
		stage_lock(110);
	}
}

void difficulty_interface() {
	cursor_location difficulty_cursor;
	difficulty_cursor.xPos = 0;
	difficulty_cursor.yPos = 0;
	int clear_stage = 0;
	while (true) {
		system("cls");
		difficulty_interface_write(clear_stage);
		difficulty_interface_cursor_write(difficulty_cursor, 12);
		difficulty_interface_cursor(&difficulty_cursor, clear_stage);
		if (enter_key == 13 && difficulty_cursor.xPos == 0) { // ��
			enter_key = 0;
			while (true) {
				system("cls");
				real_gamestart();
				// ���̵� �� ���� �÷���
			}
		}
		else if (enter_key == 13 && difficulty_cursor.xPos == 1) { // ��
			enter_key = 0;
			while (true) {
				system("cls");
				// ���̵� �� ���� �÷���
			}
		}
		else if (enter_key == 13 && difficulty_cursor.xPos == 2) { // ��
			enter_key = 0;
			while (true) {
				system("cls");
				// ���̵� �� ���� �÷���
			}
		}
		else if (close_key == 8) {
			close_key = 0;
			break;
		}
	}
}

void stage_lock(int x) {
	int y = 20;
	color_change(12);
	gotoxy(x - 4, y - 2);
	printf("��");
	gotoxy(x, y - 2);
	printf("��");
	gotoxy(x + 4, y - 2);
	printf("��");
	gotoxy(x - 4, y);
	printf("��");
	gotoxy(x + 4, y);
	printf("��");
	gotoxy(x - 4, y + 2);
	printf("��");
	gotoxy(x, y + 2);
	printf("��");
	gotoxy(x + 4, y + 2);
	printf("��");
	color_change(7);
}

void real_gamestart() {
	int x = 0, y = 0, level = 1, temp;
	bool direction_left = false; // true   false
	int *** player_body_position_imformation;
	int garow;
	int serow;

	int row_info[36] = {2, 2, 3, 3, 3, 4,
						5, 5, 6, 6, 7, 8,
						9, 9, 10, 10, 11, 12,
						12, 13, 14, 15, 16, 17, 
						17, 18, 19, 20, 21, 21,
						22, 22, 23, 24, 25, 26};
	int column_info[36] = {1, 1, 1, 2, 3, 3, 
							3, 4, 4, 5, 5, 5,
							5, 6, 6, 7, 7, 7,
							8, 8, 8, 8, 8, 8,
							9, 9, 9, 9, 9, 10,
							10, 11, 11, 11, 11, 11};

	player_body_position_imformation = new int** [36];
	for (garow = 0; garow < 36; ++garow) {
		player_body_position_imformation[garow] = new int * [row_info[garow]];
		for (serow = 0; serow < row_info[garow]; ++serow) {
			player_body_position_imformation[garow][serow] = new int [column_info[garow]];
		}
	} // player_body_postion_imformation [36][garow][serow]

	while(true){
		player_fish_image(level, direction_left, x, y, 11, 12, 13, 14, 15);
		if (_kbhit()) {
			temp = _getch();
			switch (temp)
			{
			case 'a':
			case 'A': 
				direction_left = true;
				x = x - 2;
				break;

			case 'd':
			case 'D':
				direction_left = false;
				x = x + 2;
				break;

			case 's':
			case 'S': 
				y = y + 1;

				break;

			case 'w':
			case 'W':
				y = y - 1;
				break;

			default:
				break;
			}
		}
	}
	for (garow = 0; garow < 36; ++garow)
	{
		for (serow = 0; serow < row_info[garow]; ++serow)
		{
			delete[] player_body_position_imformation[garow][serow];
		}
	}

	for (garow = 0; garow < 36; ++garow)
	{
		delete[] player_body_position_imformation[garow];
	}
	delete[] player_body_position_imformation;
	// �÷��̾� ��� 3�� ��Ʈǥ��
	// ���� ����� ���� Ÿ��
	// ���� ����� �����̴� �ӵ�
	// ����� �ǰ� ����
	//
}