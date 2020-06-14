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
		player_fish_image(i, false, 40, 8, 11, 12, 13, 14, 3);
		//main_interface_write();
		_getch();
		if (i > 36) {
			break;
		}
		else {
			gotoxy(30, 30);
			printf("%d", z);
			i++;
			z++;
		}
		
	}
}