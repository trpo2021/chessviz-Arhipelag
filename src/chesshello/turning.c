#include <stdio.h>
#include <stdlib.h>
#include "turning.h"

#define SIZE 9

void turning(char board[SIZE][SIZE])
{
	int first_letter, first_number, second_letter, second_number, figure;
	char turn[6];

	for (int i = 0; i < 9; ++i) {
	    for (int j = 0; j < 9; ++j) {
	        printf("%2c", board[i][j]);
	    }
	    printf("\n");
	}

	scanf("%s", turn);

	if ((turn[0] == 'a' || turn[0] == 'b' || turn[0] == 'c' || turn[0] == 'd' || turn[0] == 'e' || turn[0] == 'f' || turn[0] == 'g' || turn[0] == 'h')
		&& (turn[1] == '1' || turn[1] == '2' || turn[1] == '3' || turn[1] == '4' || turn[1] == '5' || turn[1] == '6' || turn[1] == '7' || turn[1] == '8')
		&& turn[2] == '-'
		&& (turn[3] == 'a' || turn[3] == 'b' || turn[3] == 'c' || turn[3] == 'd' || turn[3] == 'e' || turn[3] == 'f' || turn[3] == 'g' || turn[3] == 'h')
		&& (turn[4] == '1' || turn[4] == '2' || turn[4] == '3' || turn[4] == '4' || turn[4] == '5' || turn[4] == '6' || turn[4] == '7' || turn[4] == '8'))
	{
		if (turn[0] == 'a') first_letter = 1;
		if (turn[0] == 'b') first_letter = 2;
		if (turn[0] == 'c') first_letter = 3;
		if (turn[0] == 'd') first_letter = 4;
		if (turn[0] == 'e') first_letter = 5;
		if (turn[0] == 'f') first_letter = 6;
		if (turn[0] == 'g') first_letter = 7;
		if (turn[0] == 'h') first_letter = 8;

		first_number = abs((int)turn[1] - 48 - 8);

		if (turn[3] == 'a') second_letter = 1;
		if (turn[3] == 'b') second_letter = 2;
		if (turn[3] == 'c') second_letter = 3;
		if (turn[3] == 'd') second_letter = 4;
		if (turn[3] == 'e') second_letter = 5;
		if (turn[3] == 'f') second_letter = 6;
		if (turn[3] == 'g') second_letter = 7;
		if (turn[3] == 'h') second_letter = 8;

		second_number = abs((int)turn[4] - 48 - 8);

		figure = board[first_number][first_letter];
		board[first_number][first_letter] = ' ';
		board[second_number][second_letter] = figure;
	}
}