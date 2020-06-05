#pragma once

#include "interface_design_tool.h"
#include <cstdio>

void monster_fish_image_type01(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color);
void monster_fish_image_type02(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color);

void monster_fish_image_type01(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color) {
	if (size == 1) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("��");
		}
		else {
			printf("��");
		}
	}
	else if (size == 2) {
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("��");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("��");
			color_change(tail_color);
			printf("<<");
		}
	}
	else if (size == 3) {
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("�ᢺ");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("����");
			color_change(tail_color);
			printf("<<");
		}
	}
	else if (size == 4) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("�ᢺ");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("��");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("����");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("��");
		}
	}
	else if (size == 5) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("�ᢺ");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("��");
			gotoxy(x + 2, y + 1);
			printf("��");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("����");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("��");
			gotoxy(x + 2, y + 1);
			printf("��");
		}
	}
	else if (size == 6) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("��ᢺ");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("���");
			gotoxy(x + 2, y + 1);
			printf("���");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("�����");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("���");
			gotoxy(x + 2, y + 1);
			printf("���");
		}
	}
	else if (size == 7){
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("���ᢺ");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("����");
			gotoxy(x + 2, y + 1);
			printf("����");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("������");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("����");
			gotoxy(x + 2, y + 1);
			printf("����");
		}
	}
	else if (size == 8) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 1);
			printf("��");
			color_change(body_color);
			printf("�����");
			gotoxy(x + 2, y);
			printf("�����");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("����");
			gotoxy(x + 2, y + 2);
			printf("����");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("�����");
			gotoxy(x, y + 1);
			printf("�����");
			color_change(tail_color);
			printf("��");
			gotoxy(x + 8, y);
			printf("��");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("����");
			gotoxy(x + 2, y + 2);
			printf("����");
		}
	}
	else if (size == 9) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 1);
			printf("��");
			color_change(body_color);
			printf("������");
			gotoxy(x + 2, y);
			printf("������");
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("�����");
			gotoxy(x + 2, y + 2);
			printf("�����");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("������");
			gotoxy(x, y + 1);
			printf("������");
			color_change(tail_color);
			printf("��");
			gotoxy(x + 10, y);
			printf("��");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("�����");
			gotoxy(x + 2, y + 2);
			printf("�����");
		}
	}
	else if (size == 10) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 2);
			printf("��");
			gotoxy(x, y + 1);
			printf("��");
			color_change(body_color);
			printf("������");
			gotoxy(x + 4, y);
			printf("�����");
			gotoxy(x + 4, y + 2);
			printf("�����");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("����");
			gotoxy(x + 2, y);
			printf("��");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 4, y + 3);
			printf("����");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("�����");
			gotoxy(x, y + 1);
			printf("������");
			gotoxy(x, y + 2);
			printf("�����");
			color_change(fin_color);
			printf("��");
			gotoxy(x + 2, y - 1);
			printf("����");
			gotoxy(x + 2, y + 3);
			printf("����");
			gotoxy(x + 8, y);
			printf("��");
			color_change(tail_color);
			printf("��");
			gotoxy(x + 10, y + 1);
			printf("��");
			gotoxy(x + 10, y + 2);
			printf("��");
		}
	}
	else if (size == 11) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 2);
			printf("��");
			gotoxy(x, y + 1);
			printf("��");
			color_change(body_color);
			printf("�������");
			gotoxy(x + 4, y);
			printf("�����");
			gotoxy(x + 4, y + 2);
			printf("�����");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("����");
			gotoxy(x + 2, y);
			printf("��");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 4, y + 3);
			printf("����");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("�����");
			gotoxy(x - 2, y + 1);
			printf("�������");
			gotoxy(x, y + 2);
			printf("�����");
			color_change(fin_color);
			printf("��");
			gotoxy(x + 2, y - 1);
			printf("����");
			gotoxy(x + 2, y + 3);
			printf("����");
			gotoxy(x + 8, y);
			printf("��");
			color_change(tail_color);
			printf("��");
			gotoxy(x + 10, y + 1);
			printf("��");
			gotoxy(x + 10, y + 2);
			printf("��");
		}
	}
	else if (size == 12) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 2);
			printf("��");
			gotoxy(x, y + 1);
			printf("���");
			color_change(body_color);
			printf("�������");
			gotoxy(x + 6, y);
			printf("�����");
			gotoxy(x + 6, y + 2);
			printf("�����");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("����");
			gotoxy(x + 4, y);
			printf("��");
			gotoxy(x + 4, y + 2);
			printf("��");
			gotoxy(x + 6, y + 3);
			printf("����");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("�����");
			gotoxy(x - 2, y + 1);
			printf("�������");
			gotoxy(x, y + 2);
			printf("�����");
			color_change(fin_color);
			printf("��");
			gotoxy(x + 2, y - 1);
			printf("����");
			gotoxy(x + 2, y + 3);
			printf("����");
			gotoxy(x + 8, y);
			printf("��");
			color_change(tail_color);
			gotoxy(x + 12, y);
			printf("��");
			gotoxy(x + 10, y + 1);
			printf("���");
			gotoxy(x + 12, y + 2);
			printf("��");
		}
	}
	else if (size == 13) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 2);
			printf("��");
			gotoxy(x, y + 1);
			printf("���");
			color_change(body_color);
			printf("��������");
			gotoxy(x + 6, y);
			printf("������");
			gotoxy(x + 6, y + 2);
			printf("������");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("�����");
			gotoxy(x + 4, y);
			printf("��");
			gotoxy(x + 4, y + 2);
			printf("��");
			gotoxy(x + 6, y + 3);
			printf("�����");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("������");
			gotoxy(x - 2, y + 1);
			printf("��������");
			gotoxy(x, y + 2);
			printf("������");
			color_change(fin_color);
			printf("��");
			gotoxy(x + 2, y - 1);
			printf("�����");
			gotoxy(x + 2, y + 3);
			printf("�����");
			gotoxy(x + 10, y);
			printf("��");
			color_change(tail_color);
			gotoxy(x + 14, y);
			printf("��");
			gotoxy(x + 12, y + 1);
			printf("���");
			gotoxy(x + 14, y + 2);
			printf("��");
		}
	}
	else if (size == 14) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 3);
			printf("��");
			gotoxy(x, y + 1);
			printf("���");
			gotoxy(x, y + 2);
			printf("���");
			color_change(body_color);
			printf("��������");
			gotoxy(x + 4, y + 1);
			printf("��������");
			gotoxy(x + 6, y);
			printf("������");
			gotoxy(x + 6, y + 3);
			printf("������");
			color_change(eye_color);
			gotoxy(x + 14, y + 1);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("�����");
			gotoxy(x + 4, y);
			printf("��");
			gotoxy(x + 4, y + 3);
			printf("��");
			gotoxy(x + 6, y + 4);
			printf("�����");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("������");
			gotoxy(x - 2, y + 1);
			printf("��������");
			gotoxy(x - 2, y + 2);
			printf("��������");
			gotoxy(x, y + 3);
			printf("������");
			color_change(eye_color);
			gotoxy(x, y + 1);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 10, y + 3);
			printf("��");
			gotoxy(x + 2, y - 1);
			printf("�����");
			gotoxy(x + 2, y + 4);
			printf("�����");
			gotoxy(x + 10, y);
			printf("��");
			color_change(tail_color);
			gotoxy(x + 14, y);
			printf("��");
			gotoxy(x + 12, y + 1);
			printf("���");
			gotoxy(x + 12, y + 2);
			printf("���");
			gotoxy(x + 14, y + 3);
			printf("��");
		}
	}
	else if (size == 15) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 3);
			printf("��");
			gotoxy(x, y + 1);
			printf("���");
			gotoxy(x, y + 2);
			printf("���");
			color_change(body_color);
			printf("���������");
			gotoxy(x + 4, y + 1);
			printf("���������");
			gotoxy(x + 6, y);
			printf("�������");
			gotoxy(x + 6, y + 3);
			printf("�������");
			color_change(eye_color);
			gotoxy(x + 16, y + 1);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("������");
			gotoxy(x + 4, y);
			printf("��");
			gotoxy(x + 4, y + 3);
			printf("��");
			gotoxy(x + 6, y + 4);
			printf("������");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("�������");
			gotoxy(x - 2, y + 1);
			printf("���������");
			gotoxy(x - 2, y + 2);
			printf("���������");
			gotoxy(x, y + 3);
			printf("�������");
			color_change(eye_color);
			gotoxy(x, y + 1);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 12, y + 3);
			printf("��");
			gotoxy(x + 2, y - 1);
			printf("������");
			gotoxy(x + 2, y + 4);
			printf("������");
			gotoxy(x + 12, y);
			printf("��");
			color_change(tail_color);
			gotoxy(x + 16, y);
			printf("��");
			gotoxy(x + 14, y + 1);
			printf("���");
			gotoxy(x + 14, y + 2);
			printf("���");
			gotoxy(x + 16, y + 3);
			printf("��");
		}
	}
	else if (size == 16) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 4);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x, y + 3);
			printf("�㢺");
			color_change(body_color);
			printf("���������");
			gotoxy(x + 4, y + 1);
			printf("���������");
			gotoxy(x + 4, y + 2);
			printf("���������");
			gotoxy(x + 6, y);
			printf("�������");
			gotoxy(x + 6, y + 4);
			printf("�������");
			color_change(eye_color);
			gotoxy(x + 16, y + 1);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("������");
			gotoxy(x + 4, y);
			printf("��");
			gotoxy(x + 4, y + 4);
			printf("��");
			gotoxy(x + 6, y + 5);
			printf("������");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("�������");
			gotoxy(x - 2, y + 1);
			printf("���������");
			gotoxy(x - 2, y + 2);
			printf("���������");
			gotoxy(x - 2, y + 3);
			printf("���������");
			gotoxy(x, y + 4);
			printf("�������");
			color_change(eye_color);
			gotoxy(x, y + 1);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 12, y + 4);
			printf("��");
			gotoxy(x + 2, y - 1);
			printf("������");
			gotoxy(x + 2, y + 5);
			printf("������");
			gotoxy(x + 12, y);
			printf("��");
			color_change(tail_color);
			gotoxy(x + 16, y);
			printf("��");
			gotoxy(x + 14, y + 1);
			printf("����");
			gotoxy(x + 14, y + 2);
			printf("��");
			gotoxy(x + 14, y + 3);
			printf("����");
			gotoxy(x + 16, y + 4);
			printf("��");
		}
	}
	else if (size == 17) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 4);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x, y + 3);
			printf("�㢺");
			color_change(body_color);
			printf("����������");
			gotoxy(x + 4, y + 1);
			printf("����������");
			gotoxy(x + 4, y + 2);
			printf("����������");
			gotoxy(x + 6, y);
			printf("��������");
			gotoxy(x + 6, y + 4);
			printf("��������");
			color_change(eye_color);
			gotoxy(x + 16, y + 1);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("�������");
			gotoxy(x + 4, y);
			printf("��");
			gotoxy(x + 4, y + 4);
			printf("��");
			gotoxy(x + 6, y + 5);
			printf("�������");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("��������");
			gotoxy(x - 2, y + 1);
			printf("����������");
			gotoxy(x - 2, y + 2);
			printf("����������");
			gotoxy(x - 2, y + 3);
			printf("����������");
			gotoxy(x, y + 4);
			printf("��������");
			color_change(eye_color);
			gotoxy(x + 2, y + 1);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 14, y + 4);
			printf("��");
			gotoxy(x + 2, y - 1);
			printf("�������");
			gotoxy(x + 2, y + 5);
			printf("�������");
			gotoxy(x + 14, y);
			printf("��");
			color_change(tail_color);
			gotoxy(x + 18, y);
			printf("��");
			gotoxy(x + 16, y + 1);
			printf("����");
			gotoxy(x + 16, y + 2);
			printf("��");
			gotoxy(x + 16, y + 3);
			printf("����");
			gotoxy(x + 18, y + 4);
			printf("��");
		}
	}
	else if (size == 18) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 4);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x, y + 3);
			printf("�㢺");
			color_change(body_color);
			printf("�����������");
			gotoxy(x + 4, y + 1);
			printf("�����������");
			gotoxy(x + 4, y + 2);
			printf("�����������");
			gotoxy(x + 6, y);
			printf("���������");
			gotoxy(x + 6, y + 4);
			printf("���������");
			color_change(eye_color);
			gotoxy(x + 18, y + 1);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("��������");
			gotoxy(x + 4, y);
			printf("��");
			gotoxy(x + 4, y + 4);
			printf("��");
			gotoxy(x + 6, y + 5);
			printf("��������");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("���������");
			gotoxy(x - 2, y + 1);
			printf("�����������");
			gotoxy(x - 2, y + 2);
			printf("�����������");
			gotoxy(x - 2, y + 3);
			printf("�����������");
			gotoxy(x, y + 4);
			printf("���������");
			color_change(eye_color);
			gotoxy(x + 2, y + 1);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 16, y + 4);
			printf("��");
			gotoxy(x + 2, y - 1);
			printf("��������");
			gotoxy(x + 2, y + 5);
			printf("��������");
			gotoxy(x + 16, y);
			printf("��");
			color_change(tail_color);
			gotoxy(x + 20, y);
			printf("��");
			gotoxy(x + 18, y + 1);
			printf("����");
			gotoxy(x + 18, y + 2);
			printf("��");
			gotoxy(x + 18, y + 3);
			printf("����");
			gotoxy(x + 20, y + 4);
			printf("��");
		}
	}
	else if (size == 19) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 5);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 2, y + 3);
			printf("��");
			gotoxy(x, y + 4);
			printf("�㢺");
			color_change(body_color);
			printf("�����������");
			gotoxy(x + 4, y + 1);
			printf("�����������");
			gotoxy(x + 4, y + 2);
			printf("�����������");
			gotoxy(x + 4, y + 3);
			printf("�����������");
			gotoxy(x + 6, y);
			printf("���������");
			gotoxy(x + 6, y + 5);
			printf("���������");
			color_change(eye_color);
			gotoxy(x + 18, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("��������");
			gotoxy(x + 4, y);
			printf("��");
			gotoxy(x + 4, y + 5);
			printf("��");
			gotoxy(x + 6, y + 6);
			printf("��������");
		}
		else {
			x += 2;
			gotoxy(x, y);
			color_change(body_color);
			printf("���������");
			gotoxy(x - 2, y + 1);
			printf("�����������");
			gotoxy(x - 2, y + 2);
			printf("�����������");
			gotoxy(x - 2, y + 3);
			printf("�����������");
			gotoxy(x - 2, y + 4);
			printf("�����������");
			gotoxy(x, y + 5);
			printf("���������");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 16, y + 5);
			printf("��");
			gotoxy(x + 2, y - 1);
			printf("��������");
			gotoxy(x + 2, y + 6);
			printf("��������");
			gotoxy(x + 16, y);
			printf("��");
			color_change(tail_color);
			gotoxy(x + 20, y);
			printf("��");
			gotoxy(x + 18, y + 1);
			printf("����");
			gotoxy(x + 18, y + 2);
			printf("��");
			gotoxy(x + 18, y + 3);
			printf("��");
			gotoxy(x + 18, y + 4);
			printf("����");
			gotoxy(x + 20, y + 5);
			printf("��");
		}
	}
	else if (size == 20) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 5);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 2, y + 3);
			printf("��");
			gotoxy(x , y + 4);
			printf("�㢺");
			color_change(body_color);
			printf("�����������");
			gotoxy(x + 4, y + 1);
			printf("�����������");
			gotoxy(x + 4, y + 2);
			printf("������������");
			gotoxy(x + 4, y + 3);
			printf("������������");
			gotoxy(x + 6, y);
			printf("���������");
			gotoxy(x + 6, y + 5);
			printf("���������");
			color_change(eye_color);
			gotoxy(x + 18, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("��������");
			gotoxy(x + 4, y);
			printf("��");
			gotoxy(x + 4, y + 5);
			printf("��");
			gotoxy(x + 6, y + 6);
			printf("��������");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("���������");
			gotoxy(x - 2, y + 1);
			printf("�����������");
			gotoxy(x - 4, y + 2);
			printf("������������");
			gotoxy(x - 4, y + 3);
			printf("������������");
			gotoxy(x - 2, y + 4);
			printf("�����������");
			gotoxy(x, y + 5);
			printf("���������");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 16, y + 5);
			printf("��");
			gotoxy(x + 2, y - 1);
			printf("��������");
			gotoxy(x + 2, y + 6);
			printf("��������");
			gotoxy(x + 16, y);
			printf("��");
			color_change(tail_color);
			gotoxy(x + 20, y);
			printf("��");
			gotoxy(x + 18, y + 1);
			printf("����");
			gotoxy(x + 18, y + 2);
			printf("��");
			gotoxy(x + 18, y + 3);
			printf("��");
			gotoxy(x + 18, y + 4);
			printf("����");
			gotoxy(x + 20, y + 5);
			printf("��");
		}
	}
	else if (size == 21) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 5);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 2, y + 3);
			printf("��");
			gotoxy(x, y + 4);
			printf("�㢺");
			color_change(body_color);
			printf("������������");
			gotoxy(x + 4, y + 1);
			printf("������������");
			gotoxy(x + 4, y + 2);
			printf("�������������");
			gotoxy(x + 4, y + 3);
			printf("�������������");
			gotoxy(x + 6, y);
			printf("����������");
			gotoxy(x + 6, y + 5);
			printf("����������");
			color_change(eye_color);
			gotoxy(x + 20, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("���������");
			gotoxy(x + 6, y + 6);
			printf("���������");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("����������");
			gotoxy(x - 2, y + 1);
			printf("������������");
			gotoxy(x - 4, y + 2);
			printf("�������������");
			gotoxy(x - 4, y + 3);
			printf("�������������");
			gotoxy(x - 2, y + 4);
			printf("������������");
			gotoxy(x, y + 5);
			printf("����������");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 2, y - 1);
			printf("���������");
			gotoxy(x + 2, y + 6);
			printf("���������");
			color_change(tail_color);
			gotoxy(x + 22, y);
			printf("��");
			gotoxy(x + 20, y + 1);
			printf("����");
			gotoxy(x + 20, y + 2);
			printf("��");
			gotoxy(x + 20, y + 3);
			printf("��");
			gotoxy(x + 20, y + 4);
			printf("����");
			gotoxy(x + 22, y + 5);
			printf("��");
		}
	}
	else if (size == 22) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 5);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 2, y + 3);
			printf("��");
			gotoxy(x, y + 4);
			printf("�㢺");
			color_change(body_color);
			printf("�������������");
			gotoxy(x + 4, y + 1);
			printf("�������������");
			gotoxy(x + 4, y + 2);
			printf("��������������");
			gotoxy(x + 4, y + 3);
			printf("��������������");
			gotoxy(x + 6, y);
			printf("�����������");
			gotoxy(x + 6, y + 5);
			printf("�����������");
			color_change(eye_color);
			gotoxy(x + 22, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("���������");
			gotoxy(x + 6, y + 6);
			printf("���������");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("�����������");
			gotoxy(x - 2, y + 1);
			printf("�������������");
			gotoxy(x - 4, y + 2);
			printf("��������������");
			gotoxy(x - 4, y + 3);
			printf("��������������");
			gotoxy(x - 2, y + 4);
			printf("�������������");
			gotoxy(x, y + 5);
			printf("�����������");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("���������");
			gotoxy(x + 4, y + 6);
			printf("���������");
			color_change(tail_color);
			gotoxy(x + 24, y);
			printf("��");
			gotoxy(x + 22, y + 1);
			printf("����");
			gotoxy(x + 22, y + 2);
			printf("��");
			gotoxy(x + 22, y + 3);
			printf("��");
			gotoxy(x + 22, y + 4);
			printf("����");
			gotoxy(x + 24, y + 5);
			printf("��");
		}
	}
	else if (size == 23) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 5);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 2, y + 3);
			printf("��");
			gotoxy(x, y + 4);
			printf("�㢺");
			color_change(body_color);
			printf("��������������");
			gotoxy(x + 4, y + 1);
			printf("��������������");
			gotoxy(x + 4, y + 2);
			printf("���������������");
			gotoxy(x + 4, y + 3);
			printf("���������������");
			gotoxy(x + 6, y);
			printf("������������");
			gotoxy(x + 6, y + 5);
			printf("������������");
			color_change(eye_color);
			gotoxy(x + 24, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("���������");
			gotoxy(x + 8, y + 6);
			printf("���������");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("������������");
			gotoxy(x - 2, y + 1);
			printf("��������������");
			gotoxy(x - 4, y + 2);
			printf("���������������");
			gotoxy(x - 4, y + 3);
			printf("���������������");
			gotoxy(x - 2, y + 4);
			printf("��������������");
			gotoxy(x, y + 5);
			printf("������������");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("���������");
			gotoxy(x + 4, y + 6);
			printf("���������");
			color_change(tail_color);
			gotoxy(x + 26, y);
			printf("��");
			gotoxy(x + 24, y + 1);
			printf("����");
			gotoxy(x + 24, y + 2);
			printf("��");
			gotoxy(x + 24, y + 3);
			printf("��");
			gotoxy(x + 24, y + 4);
			printf("����");
			gotoxy(x + 26, y + 5);
			printf("��");
		}
	}
	else if (size == 24) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 5);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 2, y + 3);
			printf("��");
			gotoxy(x, y + 4);
			printf("�㢺");
			color_change(body_color);
			printf("���������������");
			gotoxy(x + 4, y + 1);
			printf("���������������");
			gotoxy(x + 4, y + 2);
			printf("����������������");
			gotoxy(x + 4, y + 3);
			printf("����������������");
			gotoxy(x + 6, y);
			printf("�������������");
			gotoxy(x + 6, y + 5);
			printf("�������������");
			color_change(eye_color);
			gotoxy(x + 26, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("����������");
			gotoxy(x + 8, y + 6);
			printf("����������");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("�������������");
			gotoxy(x - 2, y + 1);
			printf("���������������");
			gotoxy(x - 4, y + 2);
			printf("����������������");
			gotoxy(x - 4, y + 3);
			printf("����������������");
			gotoxy(x - 2, y + 4);
			printf("���������������");
			gotoxy(x, y + 5);
			printf("�������������");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("����������");
			gotoxy(x + 4, y + 6);
			printf("����������");
			color_change(tail_color);
			gotoxy(x + 28, y);
			printf("��");
			gotoxy(x + 26, y + 1);
			printf("����");
			gotoxy(x + 26, y + 2);
			printf("��");
			gotoxy(x + 26, y + 3);
			printf("��");
			gotoxy(x + 26, y + 4);
			printf("����");
			gotoxy(x + 28, y + 5);
			printf("��");
		}
	}
	else if (size == 25) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 6);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 2, y + 3);
			printf("��");
			gotoxy(x + 2, y + 4);
			printf("��");
			gotoxy(x, y + 5);
			printf("�㢺");
			color_change(body_color);
			printf("���������������");
			gotoxy(x + 4, y + 1);
			printf("���������������");
			gotoxy(x + 4, y + 2);
			printf("����������������");
			gotoxy(x + 4, y + 3);
			printf("����������������");
			gotoxy(x + 4, y + 4);
			printf("����������������");
			gotoxy(x + 6, y);
			printf("�������������");
			gotoxy(x + 6, y + 6);
			printf("�������������");
			color_change(eye_color);
			gotoxy(x + 26, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("����������");
			gotoxy(x + 8, y + 7);
			printf("����������");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("�������������");
			gotoxy(x - 2, y + 1);
			printf("���������������");
			gotoxy(x - 4, y + 2);
			printf("����������������");
			gotoxy(x - 4, y + 3);
			printf("����������������");
			gotoxy(x - 4, y + 4);
			printf("����������������");
			gotoxy(x - 2, y + 5);
			printf("���������������");
			gotoxy(x, y + 6);
			printf("�������������");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("����������");
			gotoxy(x + 4, y + 7);
			printf("����������");
			color_change(tail_color);
			gotoxy(x + 28, y);
			printf("��");
			gotoxy(x + 26, y + 1);
			printf("����");
			gotoxy(x + 26, y + 2);
			printf("��");
			gotoxy(x + 26, y + 3);
			printf("��");
			gotoxy(x + 26, y + 4);
			printf("��");
			gotoxy(x + 26, y + 5);
			printf("����");
			gotoxy(x + 28, y + 6);
			printf("��");
		}
	}
	else if (size == 26) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 6);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 2, y + 3);
			printf("��");
			gotoxy(x + 2, y + 4);
			printf("��");
			gotoxy(x, y + 5);
			printf("�㢺");
			color_change(body_color);
			printf("����������������");
			gotoxy(x + 4, y + 1);
			printf("����������������");
			gotoxy(x + 4, y + 2);
			printf("�����������������");
			gotoxy(x + 4, y + 3);
			printf("�����������������");
			gotoxy(x + 4, y + 4);
			printf("�����������������");
			gotoxy(x + 6, y);
			printf("��������������");
			gotoxy(x + 6, y + 6);
			printf("��������������");
			color_change(eye_color);
			gotoxy(x + 26, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("�����������");
			gotoxy(x + 8, y + 7);
			printf("�����������");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("��������������");
			gotoxy(x - 2, y + 1);
			printf("����������������");
			gotoxy(x - 4, y + 2);
			printf("�����������������");
			gotoxy(x - 4, y + 3);
			printf("�����������������");
			gotoxy(x - 4, y + 4);
			printf("�����������������");
			gotoxy(x - 2, y + 5);
			printf("����������������");
			gotoxy(x, y + 6);
			printf("��������������");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("�����������");
			gotoxy(x + 4, y + 7);
			printf("�����������");
			color_change(tail_color);
			gotoxy(x + 30, y);
			printf("��");
			gotoxy(x + 28, y + 1);
			printf("����");
			gotoxy(x + 28, y + 2);
			printf("��");
			gotoxy(x + 28, y + 3);
			printf("��");
			gotoxy(x + 28, y + 4);
			printf("��");
			gotoxy(x + 28, y + 5);
			printf("����");
			gotoxy(x + 30, y + 6);
			printf("��");
		}
	}
	else if (size == 27) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 6);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 2, y + 3);
			printf("��");
			gotoxy(x + 2, y + 4);
			printf("��");
			gotoxy(x, y + 5);
			printf("�㢺");
			color_change(body_color);
			printf("�����������������");
			gotoxy(x + 4, y + 1);
			printf("�����������������");
			gotoxy(x + 4, y + 2);
			printf("������������������");
			gotoxy(x + 4, y + 3);
			printf("������������������");
			gotoxy(x + 4, y + 4);
			printf("������������������");
			gotoxy(x + 6, y);
			printf("���������������");
			gotoxy(x + 6, y + 6);
			printf("���������������");
			color_change(eye_color);
			gotoxy(x + 28, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("������������");
			gotoxy(x + 8, y + 7);
			printf("������������");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("���������������");
			gotoxy(x - 2, y + 1);
			printf("�����������������");
			gotoxy(x - 4, y + 2);
			printf("������������������");
			gotoxy(x - 4, y + 3);
			printf("������������������");
			gotoxy(x - 4, y + 4);
			printf("������������������");
			gotoxy(x - 2, y + 5);
			printf("�����������������");
			gotoxy(x, y + 6);
			printf("���������������");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("������������");
			gotoxy(x + 4, y + 7);
			printf("������������");
			color_change(tail_color);
			gotoxy(x + 32, y);
			printf("��");
			gotoxy(x + 30, y + 1);
			printf("����");
			gotoxy(x + 30, y + 2);
			printf("��");
			gotoxy(x + 30, y + 3);
			printf("��");
			gotoxy(x + 30, y + 4);
			printf("��");
			gotoxy(x + 30, y + 5);
			printf("����");
			gotoxy(x + 32, y + 6);
			printf("��");
		}
	}
	else if (size == 28) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 6);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("��");
			gotoxy(x + 2, y + 3);
			printf("��");
			gotoxy(x + 2, y + 4);
			printf("��");
			gotoxy(x, y + 5);
			printf("�㢺");
			color_change(body_color);
			printf("������������������");
			gotoxy(x + 4, y + 1);
			printf("������������������");
			gotoxy(x + 4, y + 2);
			printf("�������������������");
			gotoxy(x + 4, y + 3);
			printf("�������������������");
			gotoxy(x + 4, y + 4);
			printf("�������������������");
			gotoxy(x + 6, y);
			printf("����������������");
			gotoxy(x + 6, y + 6);
			printf("����������������");
			color_change(eye_color);
			gotoxy(x + 30, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 8, y - 1);
			printf("�������������");
			gotoxy(x + 8, y + 7);
			printf("�������������");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("����������������");
			gotoxy(x - 2, y + 1);
			printf("������������������");
			gotoxy(x - 4, y + 2);
			printf("�������������������");
			gotoxy(x - 4, y + 3);
			printf("�������������������");
			gotoxy(x - 4, y + 4);
			printf("�������������������");
			gotoxy(x - 2, y + 5);
			printf("������������������");
			gotoxy(x, y + 6);
			printf("����������������");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("�������������");
			gotoxy(x + 4, y + 7);
			printf("�������������");
			color_change(tail_color);
			gotoxy(x + 34, y);
			printf("��");
			gotoxy(x + 32, y + 1);
			printf("����");
			gotoxy(x + 32, y + 2);
			printf("��");
			gotoxy(x + 32, y + 3);
			printf("��");
			gotoxy(x + 32, y + 4);
			printf("��");
			gotoxy(x + 32, y + 5);
			printf("����");
			gotoxy(x + 34, y + 6);
			printf("��");
		}
	}
	else if (size == 29) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 6);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("�墺");
			gotoxy(x + 4, y + 3);
			printf("��");
			gotoxy(x, y + 5);
			printf("�㢺");
			gotoxy(x + 2, y + 4);
			printf("�㢺");
			color_change(body_color);
			printf("�������������������");
			gotoxy(x + 6, y + 5);
			printf("������������������");
			gotoxy(x + 6, y + 1);
			printf("������������������");
			gotoxy(x + 6, y + 2);
			printf("�������������������");
			gotoxy(x + 6, y + 3);
			printf("�������������������");
			gotoxy(x + 8, y);
			printf("����������������");
			gotoxy(x + 8, y + 6);
			printf("����������������");
			color_change(eye_color);
			gotoxy(x + 32, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("�������������");
			gotoxy(x + 10, y + 7);
			printf("�������������");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("����������������");
			gotoxy(x - 2, y + 1);
			printf("������������������");
			gotoxy(x - 4, y + 2);
			printf("�������������������");
			gotoxy(x - 4, y + 3);
			printf("�������������������");
			gotoxy(x - 4, y + 4);
			printf("�������������������");
			gotoxy(x - 2, y + 5);
			printf("������������������");
			gotoxy(x, y + 6);
			printf("����������������");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("�������������");
			gotoxy(x + 4, y + 7);
			printf("�������������");
			color_change(tail_color);
			gotoxy(x + 36, y);
			printf("��");
			gotoxy(x + 34, y + 1);
			printf("����");
			gotoxy(x + 32, y + 2);
			printf("����");
			gotoxy(x + 32, y + 3);
			printf("��");
			gotoxy(x + 32, y + 4);
			printf("����");
			gotoxy(x + 34, y + 5);
			printf("����");
			gotoxy(x + 36, y + 6);
			printf("��");
		}
	}
	else if (size == 30) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("��");
			gotoxy(x, y + 1);
			printf("�墺");
			gotoxy(x + 2, y + 2);
			printf("�墺");
			gotoxy(x + 4, y + 3);
			printf("��");
			gotoxy(x + 4, y + 4);
			printf("��");
			gotoxy(x, y + 6);
			printf("�㢺");
			gotoxy(x, y + 7);
			printf("��");
			gotoxy(x + 2, y + 5);
			printf("�㢺");
			color_change(body_color);
			printf("�������������������");
			gotoxy(x + 8, y);
			printf("����������������");
			gotoxy(x + 6, y + 1);
			printf("������������������");
			gotoxy(x + 6, y + 2);
			printf("�������������������");
			gotoxy(x + 6, y + 3);
			printf("�������������������");
			gotoxy(x + 6, y + 4);
			printf("�������������������");
			gotoxy(x + 6, y + 6);
			printf("������������������");
			gotoxy(x + 8, y + 7);
			printf("����������������");
			color_change(eye_color);
			gotoxy(x + 32, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("�������������");
			gotoxy(x + 10, y + 8);
			printf("�������������");
		}
		else {
			x += 4;
			gotoxy(x, y);
			color_change(body_color);
			printf("����������������");
			gotoxy(x - 2, y + 1);
			printf("������������������");
			gotoxy(x - 4, y + 2);
			printf("�������������������");
			gotoxy(x - 4, y + 3);
			printf("�������������������");
			gotoxy(x - 4, y + 4);
			printf("�������������������");
			gotoxy(x - 4, y + 5);
			printf("�������������������");
			gotoxy(x - 2, y + 6);
			printf("������������������");
			gotoxy(x, y + 7);
			printf("����������������");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("�������������");
			gotoxy(x + 4, y + 8);
			printf("�������������");
			color_change(tail_color);
			gotoxy(x + 36, y);
			printf("��");
			gotoxy(x + 34, y + 1);
			printf("����");
			gotoxy(x + 32, y + 2);
			printf("����");
			gotoxy(x + 32, y + 3);
			printf("��");
			gotoxy(x + 32, y + 4);
			printf("��");
			gotoxy(x + 32, y + 5);
			printf("����");
			gotoxy(x + 34, y + 6);
			printf("����");
			gotoxy(x + 36, y + 7);
			printf("��");
		}
	}
	else if (size == 31) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("��");
			gotoxy(x, y + 1);
			printf("�ᢺ");
			gotoxy(x, y + 2);
			printf("��ᢺ");
			gotoxy(x + 2, y + 3);
			printf("���");
			gotoxy(x + 2, y + 4);
			printf("���");
			gotoxy(x, y + 6);
			printf("�ᢺ");
			gotoxy(x, y + 7);
			printf("��");
			gotoxy(x, y + 5);
			printf("��ᢺ");
			color_change(body_color);
			printf("�������������������");
			gotoxy(x + 8, y);
			printf("����������������");
			gotoxy(x + 6, y + 1);
			printf("������������������");
			gotoxy(x + 6, y + 2);
			printf("�������������������");
			gotoxy(x + 6, y + 3);
			printf("��������������������");
			gotoxy(x + 6, y + 4);
			printf("��������������������");
			gotoxy(x + 6, y + 6);
			printf("������������������");
			gotoxy(x + 8, y + 7);
			printf("����������������");
			color_change(eye_color);
			gotoxy(x + 34, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("�������������");
			gotoxy(x + 10, y + 8);
			printf("�������������");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("����������������");
			gotoxy(x - 2, y + 1);
			printf("������������������");
			gotoxy(x - 4, y + 2);
			printf("�������������������");
			gotoxy(x - 6, y + 3);
			printf("��������������������");
			gotoxy(x - 6, y + 4);
			printf("��������������������");
			gotoxy(x - 4, y + 5);
			printf("�������������������");
			gotoxy(x - 2, y + 6);
			printf("������������������");
			gotoxy(x, y + 7);
			printf("����������������");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("�������������");
			gotoxy(x + 4, y + 8);
			printf("�������������");
			color_change(tail_color);
			gotoxy(x + 36, y);
			printf("��");
			gotoxy(x + 34, y + 1);
			printf("����");
			gotoxy(x + 32, y + 2);
			printf("�����");
			gotoxy(x + 32, y + 3);
			printf("���");
			gotoxy(x + 32, y + 4);
			printf("���");
			gotoxy(x + 32, y + 5);
			printf("�����");
			gotoxy(x + 34, y + 6);
			printf("����");
			gotoxy(x + 36, y + 7);
			printf("��");
		}
	}
	else if (size == 32) {  // 22 X 11
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("��");
			gotoxy(x, y + 1);
			printf("�ᢺ");
			gotoxy(x, y + 2);
			printf("��ᢺ");
			gotoxy(x + 2, y + 3);
			printf("���");
			gotoxy(x + 4, y + 4);
			printf("��");
			gotoxy(x + 2, y + 5);
			printf("���");
			gotoxy(x, y + 7);
			printf("�ᢺ");
			gotoxy(x, y + 8);
			printf("��");
			gotoxy(x, y + 6);
			printf("��ᢺ");
			color_change(body_color);
			printf("�������������������");
			gotoxy(x + 8, y);
			printf("����������������");
			gotoxy(x + 6, y + 1);
			printf("������������������");
			gotoxy(x + 6, y + 2);
			printf("�������������������");
			gotoxy(x + 6, y + 3);
			printf("��������������������");
			gotoxy(x + 6, y + 4);
			printf("��������������������");
			gotoxy(x + 6, y + 5);
			printf("��������������������");
			gotoxy(x + 6, y + 7);
			printf("������������������");
			gotoxy(x + 8, y + 8);
			printf("����������������");
			color_change(eye_color);
			gotoxy(x + 34, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("�������������");
			gotoxy(x + 10, y + 9);
			printf("�������������");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("����������������");
			gotoxy(x - 2, y + 1);
			printf("������������������");
			gotoxy(x - 4, y + 2);
			printf("�������������������");
			gotoxy(x - 6, y + 3);
			printf("��������������������");
			gotoxy(x - 6, y + 4);
			printf("��������������������");
			gotoxy(x - 6, y + 5);
			printf("��������������������");
			gotoxy(x - 4, y + 6);
			printf("�������������������");
			gotoxy(x - 2, y + 7);
			printf("������������������");
			gotoxy(x, y + 8);
			printf("����������������");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("�������������");
			gotoxy(x + 4, y + 9);
			printf("�������������");
			color_change(tail_color);
			gotoxy(x + 36, y);
			printf("��");
			gotoxy(x + 34, y + 1);
			printf("����");
			gotoxy(x + 32, y + 2);
			printf("�����");
			gotoxy(x + 32, y + 3);
			printf("���");
			gotoxy(x + 32, y + 4);
			printf("��");
			gotoxy(x + 32, y + 5);
			printf("���");
			gotoxy(x + 32, y + 6);
			printf("�����");
			gotoxy(x + 34, y + 7);
			printf("����");
			gotoxy(x + 36, y + 8);
			printf("��");
		}
	}
	else if (size == 33) {
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("��");
			gotoxy(x, y + 1);
			printf("�ᢺ");
			gotoxy(x, y + 2);
			printf("��ᢺ");
			gotoxy(x + 2, y + 3);
			printf("���");
			gotoxy(x + 4, y + 4);
			printf("��");
			gotoxy(x + 2, y + 5);
			printf("���");
			gotoxy(x, y + 7);
			printf("�ᢺ");
			gotoxy(x, y + 8);
			printf("��");
			gotoxy(x, y + 6);
			printf("��ᢺ");
			color_change(body_color);
			printf("��������������������");
			gotoxy(x + 8, y);
			printf("�����������������");
			gotoxy(x + 6, y + 1);
			printf("�������������������");
			gotoxy(x + 6, y + 2);
			printf("��������������������");
			gotoxy(x + 6, y + 3);
			printf("���������������������");
			gotoxy(x + 6, y + 4);
			printf("���������������������");
			gotoxy(x + 6, y + 5);
			printf("���������������������");
			gotoxy(x + 6, y + 7);
			printf("�������������������");
			gotoxy(x + 8, y + 8);
			printf("�����������������");
			color_change(eye_color);
			gotoxy(x + 36, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("��������������");
			gotoxy(x + 10, y + 9);
			printf("��������������");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("�����������������");
			gotoxy(x - 2, y + 1);
			printf("�������������������");
			gotoxy(x - 4, y + 2);
			printf("��������������������");
			gotoxy(x - 6, y + 3);
			printf("���������������������");
			gotoxy(x - 6, y + 4);
			printf("���������������������");
			gotoxy(x - 6, y + 5);
			printf("���������������������");
			gotoxy(x - 4, y + 6);
			printf("��������������������");
			gotoxy(x - 2, y + 7);
			printf("�������������������");
			gotoxy(x, y + 8);
			printf("�����������������");
			color_change(eye_color);
			gotoxy(x + 2, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("��������������");
			gotoxy(x + 4, y + 9);
			printf("��������������");
			color_change(tail_color);
			gotoxy(x + 38, y);
			printf("��");
			gotoxy(x + 36, y + 1);
			printf("����");
			gotoxy(x + 34, y + 2);
			printf("�����");
			gotoxy(x + 34, y + 3);
			printf("���");
			gotoxy(x + 34, y + 4);
			printf("��");
			gotoxy(x + 34, y + 5);
			printf("���");
			gotoxy(x + 34, y + 6);
			printf("�����");
			gotoxy(x + 36, y + 7);
			printf("����");
			gotoxy(x + 38, y + 8);
			printf("��");
		}
	}
	else if (size == 34) { //24
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("��");
			gotoxy(x, y + 1);
			printf("�ᢺ");
			gotoxy(x, y + 2);
			printf("��ᢺ");
			gotoxy(x + 2, y + 3);
			printf("���");
			gotoxy(x + 4, y + 4);
			printf("��");
			gotoxy(x + 2, y + 5);
			printf("���");
			gotoxy(x, y + 7);
			printf("�ᢺ");
			gotoxy(x, y + 8);
			printf("��");
			gotoxy(x, y + 6);
			printf("��ᢺ");
			color_change(body_color);
			printf("���������������������");
			gotoxy(x + 8, y);
			printf("������������������");
			gotoxy(x + 6, y + 1);
			printf("��������������������");
			gotoxy(x + 6, y + 2);
			printf("���������������������");
			gotoxy(x + 6, y + 3);
			printf("����������������������");
			gotoxy(x + 6, y + 4);
			printf("����������������������");
			gotoxy(x + 6, y + 5);
			printf("����������������������");
			gotoxy(x + 6, y + 7);
			printf("��������������������");
			gotoxy(x + 8, y + 8);
			printf("������������������");
			color_change(eye_color);
			gotoxy(x + 36, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 10, y - 1);
			printf("���������������");
			gotoxy(x + 10, y + 9);
			printf("���������������");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("������������������");
			gotoxy(x - 2, y + 1);
			printf("��������������������");
			gotoxy(x - 4, y + 2);
			printf("���������������������");
			gotoxy(x - 6, y + 3);
			printf("����������������������");
			gotoxy(x - 6, y + 4);
			printf("����������������������");
			gotoxy(x - 6, y + 5);
			printf("����������������������");
			gotoxy(x - 4, y + 6);
			printf("���������������������");
			gotoxy(x - 2, y + 7);
			printf("��������������������");
			gotoxy(x, y + 8);
			printf("������������������");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("���������������");
			gotoxy(x + 4, y + 9);
			printf("���������������");
			color_change(tail_color);
			gotoxy(x + 40, y);
			printf("��");
			gotoxy(x + 38, y + 1);
			printf("����");
			gotoxy(x + 36, y + 2);
			printf("�����");
			gotoxy(x + 36, y + 3);
			printf("���");
			gotoxy(x + 36, y + 4);
			printf("��");
			gotoxy(x + 36, y + 5);
			printf("���");
			gotoxy(x + 36, y + 6);
			printf("�����");
			gotoxy(x + 38, y + 7);
			printf("����");
			gotoxy(x + 40, y + 8);
			printf("��");
		}
	}
	else if (size == 35) { //25
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("�ᢺ");
			gotoxy(x, y + 1);
			printf("��ᢺ");
			gotoxy(x, y + 2);
			printf("���ᢺ");
			gotoxy(x + 2, y + 3);
			printf("����");
			gotoxy(x + 4, y + 4);
			printf("���");
			gotoxy(x + 2, y + 5);
			printf("����");
			gotoxy(x, y + 7);
			printf("��ᢺ");
			gotoxy(x, y + 8);
			printf("�ᢺ");
			gotoxy(x, y + 6);
			printf("���ᢺ");
			color_change(body_color);
			printf("���������������������");
			gotoxy(x + 10, y);
			printf("������������������");
			gotoxy(x + 8, y + 1);
			printf("��������������������");
			gotoxy(x + 8, y + 2);
			printf("���������������������");
			gotoxy(x + 8, y + 3);
			printf("����������������������");
			gotoxy(x + 8, y + 4);
			printf("����������������������");
			gotoxy(x + 8, y + 5);
			printf("����������������������");
			gotoxy(x + 8, y + 7);
			printf("��������������������");
			gotoxy(x + 10, y + 8);
			printf("������������������");
			color_change(eye_color);
			gotoxy(x + 38, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 12, y - 1);
			printf("���������������");
			gotoxy(x + 12, y + 9);
			printf("���������������");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("������������������");
			gotoxy(x - 2, y + 1);
			printf("��������������������");
			gotoxy(x - 4, y + 2);
			printf("���������������������");
			gotoxy(x - 6, y + 3);
			printf("����������������������");
			gotoxy(x - 6, y + 4);
			printf("����������������������");
			gotoxy(x - 6, y + 5);
			printf("����������������������");
			gotoxy(x - 4, y + 6);
			printf("���������������������");
			gotoxy(x - 2, y + 7);
			printf("��������������������");
			gotoxy(x, y + 8);
			printf("������������������");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 4, y - 1);
			printf("���������������");
			gotoxy(x + 4, y + 9);
			printf("���������������");
			color_change(tail_color);
			gotoxy(x + 40, y);
			printf("����");
			gotoxy(x + 38, y + 1);
			printf("�����");
			gotoxy(x + 36, y + 2);
			printf("������");
			gotoxy(x + 36, y + 3);
			printf("����");
			gotoxy(x + 36, y + 4);
			printf("���");
			gotoxy(x + 36, y + 5);
			printf("����");
			gotoxy(x + 36, y + 6);
			printf("������");
			gotoxy(x + 38, y + 7);
			printf("�����");
			gotoxy(x + 40, y + 8);
			printf("����");
		}
	}
	else if (size == 36) { //26 X 11
		y++;
		if (to_right) {
			color_change(tail_color);
			gotoxy(x, y);
			printf("�ᢺ");
			gotoxy(x, y + 1);
			printf("��ᢺ");
			gotoxy(x, y + 2);
			printf("���ᢺ");
			gotoxy(x + 2, y + 3);
			printf("����");
			gotoxy(x + 4, y + 4);
			printf("���");
			gotoxy(x + 2, y + 5);
			printf("����");
			gotoxy(x, y + 7);
			printf("��ᢺ");
			gotoxy(x, y + 8);
			printf("�ᢺ");
			gotoxy(x, y + 6);
			printf("���ᢺ");
			color_change(body_color);
			printf("����������������������");
			gotoxy(x + 10, y);
			printf("�������������������");
			gotoxy(x + 8, y + 1);
			printf("���������������������");
			gotoxy(x + 8, y + 2);
			printf("����������������������");
			gotoxy(x + 8, y + 3);
			printf("�����������������������");
			gotoxy(x + 8, y + 4);
			printf("�����������������������");
			gotoxy(x + 8, y + 5);
			printf("�����������������������");
			gotoxy(x + 8, y + 7);
			printf("���������������������");
			gotoxy(x + 10, y + 8);
			printf("�������������������");
			color_change(eye_color);
			gotoxy(x + 40, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 12, y - 1);
			printf("���������������");
			gotoxy(x + 12, y + 9);
			printf("���������������");
		}
		else {
			x += 6;
			gotoxy(x, y);
			color_change(body_color);
			printf("�������������������");
			gotoxy(x - 2, y + 1);
			printf("���������������������");
			gotoxy(x - 4, y + 2);
			printf("����������������������");
			gotoxy(x - 6, y + 3);
			printf("�����������������������");
			gotoxy(x - 6, y + 4);
			printf("�����������������������");
			gotoxy(x - 6, y + 5);
			printf("�����������������������");
			gotoxy(x - 4, y + 6);
			printf("����������������������");
			gotoxy(x - 2, y + 7);
			printf("���������������������");
			gotoxy(x, y + 8);
			printf("�������������������");
			color_change(eye_color);
			gotoxy(x + 4, y + 2);
			printf("��");
			color_change(fin_color);
			gotoxy(x + 6, y - 1);
			printf("���������������");
			gotoxy(x + 6, y + 9);
			printf("���������������");
			color_change(tail_color);
			gotoxy(x + 42, y);
			printf("����");
			gotoxy(x + 40, y + 1);
			printf("�����");
			gotoxy(x + 38, y + 2);
			printf("������");
			gotoxy(x + 38, y + 3);
			printf("����");
			gotoxy(x + 38, y + 4);
			printf("���");
			gotoxy(x + 38, y + 5);
			printf("����");
			gotoxy(x + 38, y + 6);
			printf("������");
			gotoxy(x + 40, y + 7);
			printf("�����");
			gotoxy(x + 42, y + 8);
			printf("����");
		}
	}
	color_change(7);
}


void monster_fish_image_type02(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color) {
	if (size == 1) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("��");
		}
		else {
			printf("��");
		}
	}
	else if (size == 2) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("�ᢺ");
		}
		else {
			printf("����");
		}
	}
	else if (size == 3) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("��ᢺ");
		}
		else {
			printf("�����");
		}
	}
	else if (size == 4) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("���ᢺ");
		}
		else {
			printf("������");
		}
	}
	else if (size == 5) {
		gotoxy(x, y);
		color_change(body_color);
		if (to_right) {
			printf("����ᢺ");
		}
		else {
			printf("�������");
		}
	}
	else if (size == 6) {
		gotoxy(x + 2, y);
		color_change(fin_color);
		printf("����");
		gotoxy(x, y + 1);
		color_change(body_color);
		if (to_right) {
			printf("����ᢺ");
		}
		else {
			printf("�������");
		}
	}
	else if (size == 7) {
		if (to_right) {
			gotoxy(x + 4, y);
			color_change(fin_color);
			printf("����");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("������ᢺ");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("����");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("������ᢺ");
		}
	}
	else if (size == 8) {
		if (to_right) {
			gotoxy(x + 6, y);
			color_change(fin_color);
			printf("����");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("�������ᢺ");
		}
		else {
			gotoxy(x + 2, y);
			color_change(fin_color);
			printf("����");
			color_change(body_color);
			gotoxy(x, y + 1);
			printf("�������ᢺ");
		}
	}
	color_change(7);
}