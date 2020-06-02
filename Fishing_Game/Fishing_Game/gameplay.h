#pragma once

#include "main_interface.h"
#include "cursor_status.h"
#include <conio.h>
#include "interface_design_tool.h"

void gamestart();

void gamestart() {
	int temp;
	hideCursor();
	system("mode con:cols=150 lines=45");
	while (true) {
		main_interface_write();
	}
}