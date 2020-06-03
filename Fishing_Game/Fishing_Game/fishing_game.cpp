#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include "gameplay.h"
#include "monster_fish_image.h"

void test(int size, int x, int y) {
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

int main() {
	int temp;
	scanf_s("%d", &temp);
	test(temp, 0, 0);

	for (int i = 1; i <= temp; i++) {
		test(i, 0, 0);
	}

	gamestart();
	return 0;
}