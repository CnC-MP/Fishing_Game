#pragma once

#include "main_interface.h"
#include "cursor_status.h"
#include <conio.h>
#include "interface_design_tool.h"
#include "player_fish_image.h"

void gamestart();

void gamestart() {
	int temp;
	hideCursor();
	system("mode con:cols=150 lines=45");
	int i = 1;
	int z = 1; 
	while (true) {
		system("cls");
		main_interface_write();
		int temp = _getch();
		while (true) {
			system("cls");
			if (temp == 13) {
				gotoxy(51, 10);
				printf("»ó                   Áß                   ÇÏ");
			}
		}
		/*if (i > 37) {
			break;
		}
		else {
			gotoxy(30, 30);
			printf("%d", z);
			i++;
			z++;
		}
		*/
	}
}