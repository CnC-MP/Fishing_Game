#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include "gameplay.h"
#include "monster_fish_image.h"

void test(int size, int x, int y) {
	monster_fish_image_type01(size, true, x, y, 11, 13, 12);
	int temp = _getch();
	system("cls");
	monster_fish_image_type01(size, false, x, y, 11, 13, 12);
	temp = _getch();
}

int main() {
	int temp;
	scanf_s("%d", &temp);
	system("cls");
	test(temp, 0, 0);


	gamestart();
	return 0;
}