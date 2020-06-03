#pragma once

#include "interface_design_tool.h"
#include <cstdio>

void monster_fish_image_type01(int size, bool to_right, int x, int y, int body_color, int tail_color, int fin_color, int eye_color);
void monster_fish_image_type02(int size, bool to_right, int x, int y, int body_color, int tail_color);

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
			printf(" >");
			color_change(body_color);
			printf("��");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("��");
			color_change(tail_color);
			printf("< ");
		}
	}
	else if (size == 3) {
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
	else if (size == 4) {
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
		}
	}
	else if (size == 7) {
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
			gotoxy(x + 4, y + 1);
			printf("��");
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
			printf("��");
		}
	}
	else if (size == 8) {
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
	else if (size == 9) {
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
	else if (size == 10) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf(">>");
			color_change(body_color);
			printf("�����");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("����");
			gotoxy(x + 2, y + 1);
			printf("����");
		}
		else {
			gotoxy(x, y);
			color_change(body_color);
			printf("�����");
			color_change(tail_color);
			printf("<<");
			gotoxy(x + 2, y - 1);
			color_change(fin_color);
			printf("����");
			gotoxy(x + 2, y + 1);
			printf("����");
		}
	}
	else if (size == 11) {
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
	else if (size == 12) {
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
	else if (size == 13) {
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
	else if (size == 14) {
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
	else if (size == 15) {
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
	else if (size == 16) {
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
	else if (size == 17) {
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
			color_change(fin_color);
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
	else if (size == 18) {
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
	else if (size == 19) {
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
	else if (size == 20) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 4);
			printf("��");
			gotoxy(x, y + 1);
			printf("�ᢺ");
			gotoxy(x, y + 2);
			printf("���");
			gotoxy(x, y + 3);
			printf("�ᢺ");
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
			printf("���");
			gotoxy(x + 14, y + 3);
			printf("����");
			gotoxy(x + 16, y + 4);
			printf("��");
		}
	}
	else if (size == 21) {
		y++;
		if (to_right) {
			gotoxy(x, y);
			color_change(tail_color);
			printf("��");
			gotoxy(x, y + 4);
			printf("��");
			gotoxy(x, y + 1);
			printf("�ᢺ");
			gotoxy(x, y + 2);
			printf("���");
			gotoxy(x, y + 3);
			printf("�ᢺ");
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
			gotoxy(x, y + 1);
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
			printf("���");
			gotoxy(x + 16, y + 3);
			printf("����");
			gotoxy(x + 18, y + 4);
			printf("��");
		}
	}
	color_change(7);
}