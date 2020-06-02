#pragma once
#include <stdlib.h>

#include "interface_design_tool.h"

void main_interface_write();
void main_interface_image();

void main_interface_write() {
	system("cls");
	main_interface_image();
	gotoxy(71, 30);
	color_change(14);
	printf("게임  시작\n");
	color_change(7);
	gotoxy(67, 32);
	printf("Enter키를  누르시오\n");
	gotoxy(75, 39);
	printf("나");
}

void main_interface_image() {

}