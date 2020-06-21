#pragma once

#include <cstdio>

void player_body_position_imformation_generate(int*** player_body_position_imformation, int* row_info, int* column_info);

void player_body_position_imformation_generate(int*** player_body_position_imformation, int* row_info, int* column_info) {
	player_body_position_imformation[0][0][0] = 1;
	player_body_position_imformation[0][1][0] = 2;

	player_body_position_imformation[1][0][0] = 1;
	player_body_position_imformation[1][1][0] = 2;

	player_body_position_imformation[2][0][0] = 1;
	player_body_position_imformation[2][1][0] = 1;
	player_body_position_imformation[2][2][0] = 2;

	player_body_position_imformation[3][0][0] = 1;
	player_body_position_imformation[3][1][0] = 1;
	player_body_position_imformation[3][2][0] = 2;
	player_body_position_imformation[3][0][1] = 0;
	player_body_position_imformation[3][1][1] = 1;
	player_body_position_imformation[3][2][1] = 0;

	player_body_position_imformation[4][0][0] = 0;
	player_body_position_imformation[4][1][0] = 1;
	player_body_position_imformation[4][2][0] = 0;
	player_body_position_imformation[4][0][1] = 1;
	player_body_position_imformation[4][1][1] = 1;
	player_body_position_imformation[4][2][1] = 2;
	player_body_position_imformation[4][0][2] = 0;
	player_body_position_imformation[4][1][2] = 1;
	player_body_position_imformation[4][2][2] = 0;

	player_body_position_imformation[5][0][0] = 0;
	player_body_position_imformation[5][1][0] = 1;
	player_body_position_imformation[5][2][0] = 1;
	player_body_position_imformation[5][3][0] = 0;
	player_body_position_imformation[5][0][1] = 1;
	player_body_position_imformation[5][1][1] = 1;
	player_body_position_imformation[5][2][1] = 1;
	player_body_position_imformation[5][3][1] = 2;
	player_body_position_imformation[5][0][2] = 0;
	player_body_position_imformation[5][1][2] = 1;
	player_body_position_imformation[5][2][2] = 1;
	player_body_position_imformation[5][3][2] = 0;

	player_body_position_imformation[6][0][0] = 0;
	player_body_position_imformation[6][1][0] = 1;
	player_body_position_imformation[6][2][0] = 1;
	player_body_position_imformation[6][3][0] = 1;
	player_body_position_imformation[6][4][0] = 0;
	player_body_position_imformation[6][0][1] = 1;
	player_body_position_imformation[6][1][1] = 1;
	player_body_position_imformation[6][2][1] = 1;
	player_body_position_imformation[6][3][1] = 1;
	player_body_position_imformation[6][4][1] = 2;
	player_body_position_imformation[6][0][2] = 0;
	player_body_position_imformation[6][1][2] = 1;
	player_body_position_imformation[6][2][2] = 1;
	player_body_position_imformation[6][3][2] = 1;
	player_body_position_imformation[6][4][2] = 0;

	player_body_position_imformation[7][0][0] = 0;
	player_body_position_imformation[7][1][0] = 1;
	player_body_position_imformation[7][2][0] = 1;
	player_body_position_imformation[7][3][0] = 1;
	player_body_position_imformation[7][4][0] = 0;
	player_body_position_imformation[7][0][1] = 1;
	player_body_position_imformation[7][1][1] = 1;
	player_body_position_imformation[7][2][1] = 1;
	player_body_position_imformation[7][3][1] = 1;
	player_body_position_imformation[7][4][1] = 2;
	player_body_position_imformation[7][0][2] = 1;
	player_body_position_imformation[7][1][2] = 1;
	player_body_position_imformation[7][2][2] = 1;
	player_body_position_imformation[7][3][2] = 1;
	player_body_position_imformation[7][4][2] = 2;
	player_body_position_imformation[7][0][3] = 0;
	player_body_position_imformation[7][1][3] = 1;
	player_body_position_imformation[7][2][3] = 1;
	player_body_position_imformation[7][3][3] = 1;
	player_body_position_imformation[7][4][3] = 0;

	player_body_position_imformation[8][0][0] = 0;
	player_body_position_imformation[8][1][0] = 1;
	player_body_position_imformation[8][2][0] = 1;
	player_body_position_imformation[8][3][0] = 1;
	player_body_position_imformation[8][4][0] = 0;
	player_body_position_imformation[8][5][0] = 0;
	player_body_position_imformation[8][0][1] = 1;
	player_body_position_imformation[8][1][1] = 1;
	player_body_position_imformation[8][2][1] = 1;
	player_body_position_imformation[8][3][1] = 1;
	player_body_position_imformation[8][4][1] = 1;
	player_body_position_imformation[8][5][1] = 2;
	player_body_position_imformation[8][0][2] = 1;
	player_body_position_imformation[8][1][2] = 1;
	player_body_position_imformation[8][2][2] = 1;
	player_body_position_imformation[8][3][2] = 1;
	player_body_position_imformation[8][4][2] = 1;
	player_body_position_imformation[8][5][2] = 2;
	player_body_position_imformation[8][0][3] = 0;
	player_body_position_imformation[8][1][3] = 1;
	player_body_position_imformation[8][2][3] = 1;
	player_body_position_imformation[8][3][3] = 1;
	player_body_position_imformation[8][4][3] = 0;
	player_body_position_imformation[8][5][3] = 0;

	player_body_position_imformation[9][0][0] = 0;
	player_body_position_imformation[9][1][0] = 1;
	player_body_position_imformation[9][2][0] = 1;
	player_body_position_imformation[9][3][0] = 1;
	player_body_position_imformation[9][4][0] = 0;
	player_body_position_imformation[9][5][0] = 0;
	player_body_position_imformation[9][0][1] = 1;
	player_body_position_imformation[9][1][1] = 1;
	player_body_position_imformation[9][2][1] = 1;
	player_body_position_imformation[9][3][1] = 1;
	player_body_position_imformation[9][4][1] = 1;
	player_body_position_imformation[9][5][1] = 2;
	player_body_position_imformation[9][0][2] = 1;
	player_body_position_imformation[9][1][2] = 1;
	player_body_position_imformation[9][2][2] = 1;
	player_body_position_imformation[9][3][2] = 1;
	player_body_position_imformation[9][4][2] = 1;
	player_body_position_imformation[9][5][2] = 2;
	player_body_position_imformation[9][0][3] = 1;
	player_body_position_imformation[9][1][3] = 1;
	player_body_position_imformation[9][2][3] = 1;
	player_body_position_imformation[9][3][3] = 1;
	player_body_position_imformation[9][4][3] = 1;
	player_body_position_imformation[9][5][3] = 2;
	player_body_position_imformation[9][0][4] = 0;
	player_body_position_imformation[9][1][4] = 1;
	player_body_position_imformation[9][2][4] = 1;
	player_body_position_imformation[9][3][4] = 1;
	player_body_position_imformation[9][4][4] = 0;
	player_body_position_imformation[9][5][4] = 0;

	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
	player_body_position_imformation[10][0][0] = 1;
}