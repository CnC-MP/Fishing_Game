#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include "gameplay.h"
#include "monster_fish_image.h"
#include "interface_design_tool.h"

void test1(int size, int x, int y) {
	system("cls");
	monster_fish_image_type01(size, true, x, y, 11, 13, 12, 4);
	gotoxy(20, 20);
	printf("%d", size);
	int temp = _getch();
	system("cls");
	monster_fish_image_type01(size, false, x, y, 11, 13, 12, 4);
	gotoxy(20, 20);
	printf("%d", size);
	temp = _getch();
}

void test2(int size, int x, int y) {
	system("cls");
	monster_fish_image_type02(size, true, x, y, 11, 13, 12, 4);
	gotoxy(20, 20);
	printf("%d", size);
	int temp = _getch();
	system("cls");
	monster_fish_image_type02(size, false, x, y, 11, 13, 12, 4);
	gotoxy(20, 20);
	printf("%d", size);
	temp = _getch();
}

int main() {
	int temp;
	system("mode con:cols=150 lines=45");
	xlimit = 148;
	ylimit = 44;
	scanf_s("%d", &temp);
	system("cls");
	test1(temp, 0, 0);
	for (int i = 1; i <= temp; i++) {
		test1(i, 0, 0);
	}
	gamestart();
	return 0;
}