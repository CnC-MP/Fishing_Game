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
	printf("����  ����\n");
	color_change(7);
	gotoxy(67, 32);
	printf("EnterŰ��  �����ÿ�\n");
	gotoxy(75, 39);
	printf("��");
}

void main_interface_image() {

}