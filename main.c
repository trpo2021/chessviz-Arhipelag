#include <ctype.h>
#include <stdio.h>

#define SIZE 9

int main()
{
    char board[SIZE][SIZE];
    char turn[6];
    char figure;
    int i, j, ch;

    for (i = 1; i < 9; ++i)
        board[1][i] = 'p';

    for (i = 1; i < 9; ++i)
        board[6][i] = 'P';

    for (i = 1; i < 9; ++i)
        board[8][i] = 96 + i;

    for (i = 0; i < 8; ++i)
        board[i][0] = 48 + (8 - i);

    for (i = 2; i < 6; ++i)
        for (j = 1; j < 9; ++j)
            board[i][j] = ' ';

    board[0][1] = 'r';
    board[0][2] = 'n';
    board[0][3] = 'b';
    board[0][4] = 'q';
    board[0][5] = 'k';
    board[0][6] = 'b';
    board[0][7] = 'n';
    board[0][8] = 'r';
    board[8][0] = ' ';

    for (i = 1; i < 9; ++i)
        board[7][i] = toupper(board[0][i]);

    printf("Введите что-нибудь, если хотите начать игру\n");

    while ((ch = getchar()) != EOF){

	   	scanf("%s", turn);

	    if (turn[0] == 'a')
	    {
	    	if (turn[1] == '1')
	    	{
	    		figure = board[7][1];
	    		board[7][1] = ' ';
	    	}
	    	if (turn[1] == '2')
	    	{
	    		figure = board[6][1];
	    		board[6][1] = ' ';
	    	}
	    	if (turn[1] == '3')
	    	{
	    		figure = board[5][1];
	    		board[5][1] = ' ';
	    	}
	    	if (turn[1] == '4')
	    	{
	    		figure = board[4][1];
	    		board[4][1] = ' ';
	    	}
	    	if (turn[1] == '5')
	    	{
	    		figure = board[3][1];
	    		board[3][1] = ' ';
	    	}
	    	if (turn[1] == '6')
	    	{
	    		figure = board[2][1];
	    		board[2][1] = ' ';
	    	}
	    	if (turn[1] == '7')
	    	{
	    		figure = board[1][1];
	    		board[1][1] = ' ';
	    	}
	    	if (turn[1] == '8')
	    	{
	    		figure = board[0][1];
	    		board[0][1] = ' ';
	    	}
	    }

	    if (turn[0] == 'b')
	    {
	    	if (turn[1] == '1')
	    	{
	    		figure = board[7][2];
	    		board[7][2] = ' ';
	    	}
	    	if (turn[1] == '2')
	    	{
	    		figure = board[6][2];
	    		board[6][2] = ' ';
	    	}
	    	if (turn[1] == '3')
	    	{
	    		figure = board[5][2];
	    		board[5][2] = ' ';
	    	}
	    	if (turn[1] == '4')
	    	{
	    		figure = board[4][2];
	    		board[4][2] = ' ';
	    	}
	    	if (turn[1] == '5')
	    	{
	    		figure = board[3][2];
	    		board[3][2] = ' ';
	    	}
	    	if (turn[1] == '6')
	    	{
	    		figure = board[2][2];
	    		board[2][2] = ' ';
	    	}
	    	if (turn[1] == '7')
	    	{
	    		figure = board[1][2];
	    		board[1][2] = ' ';
	    	}
	    	if (turn[1] == '8')
	    	{
	    		figure = board[0][2];
	    		board[0][2] = ' ';
	    	}
	    }

	    if (turn[0] == 'c')
	    {
	    	if (turn[1] == '1')
	    	{
	    		figure = board[7][3];
	    		board[7][3] = ' ';
	    	}
	    	if (turn[1] == '2')
	    	{
	    		figure = board[6][3];
	    		board[6][3] = ' ';
	    	}
	    	if (turn[1] == '3')
	    	{
	    		figure = board[5][3];
	    		board[5][3] = ' ';
	    	}
	    	if (turn[1] == '4')
	    	{
	    		figure = board[4][3];
	    		board[4][3] = ' ';
	    	}
	    	if (turn[1] == '5')
	    	{
	    		figure = board[3][3];
	    		board[3][3] = ' ';
	    	}
	    	if (turn[1] == '6')
	    	{
	    		figure = board[2][3];
	    		board[2][3] = ' ';
	    	}
	    	if (turn[1] == '7')
	    	{
	    		figure = board[1][3];
	    		board[1][3] = ' ';
	    	}
	    	if (turn[1] == '8')
	    	{
	    		figure = board[0][3];
	    		board[0][3] = ' ';
	    	}
	    }

	    if (turn[0] == 'd')
	    {
	    	if (turn[1] == '1')
	    	{
	    		figure = board[7][4];
	    		board[7][4] = ' ';
	    	}
	    	if (turn[1] == '2')
	    	{
	    		figure = board[6][4];
	    		board[6][4] = ' ';
	    	}
	    	if (turn[1] == '3')
	    	{
	    		figure = board[5][4];
	    		board[5][4] = ' ';
	    	}
	    	if (turn[1] == '4')
	    	{
	    		figure = board[4][4];
	    		board[4][4] = ' ';
	    	}
	    	if (turn[1] == '5')
	    	{
	    		figure = board[3][4];
	    		board[3][4] = ' ';
	    	}
	    	if (turn[1] == '6')
	    	{
	    		figure = board[2][4];
	    		board[2][4] = ' ';
	    	}
	    	if (turn[1] == '7')
	    	{
	    		figure = board[1][4];
	    		board[1][4] = ' ';
	    	}
	    	if (turn[1] == '8')
	    	{
	    		figure = board[0][4];
	    		board[0][4] = ' ';
	    	}
	    }

	    if (turn[0] == 'e')
	    {
	    	if (turn[1] == '1')
	    	{
	    		figure = board[7][5];
	    		board[7][5] = ' ';
	    	}
	    	if (turn[1] == '2')
	    	{
	    		figure = board[6][5];
	    		board[6][5] = ' ';
	    	}
	    	if (turn[1] == '3')
	    	{
	    		figure = board[5][5];
	    		board[5][5] = ' ';
	    	}
	    	if (turn[1] == '4')
	    	{
	    		figure = board[4][5];
	    		board[4][5] = ' ';
	    	}
	    	if (turn[1] == '5')
	    	{
	    		figure = board[3][5];
	    		board[3][5] = ' ';
	    	}
	    	if (turn[1] == '6')
	    	{
	    		figure = board[2][5];
	    		board[2][5] = ' ';
	    	}
	    	if (turn[1] == '7')
	    	{
	    		figure = board[1][5];
	    		board[1][5] = ' ';
	    	}
	    	if (turn[1] == '8')
	    	{
	    		figure = board[0][5];
	    		board[0][5] = ' ';
	    	}
	    }

	    if (turn[0] == 'f')
	    {
	    	if (turn[1] == '1')
	    	{
	    		figure = board[7][6];
	    		board[7][6] = ' ';
	    	}
	    	if (turn[1] == '2')
	    	{
	    		figure = board[6][6];
	    		board[6][6] = ' ';
	    	}
	    	if (turn[1] == '3')
	    	{
	    		figure = board[5][6];
	    		board[5][6] = ' ';
	    	}
	    	if (turn[1] == '4')
	    	{
	    		figure = board[4][6];
	    		board[4][6] = ' ';
	    	}
	    	if (turn[1] == '5')
	    	{
	    		figure = board[3][6];
	    		board[3][6] = ' ';
	    	}
	    	if (turn[1] == '6')
	    	{
	    		figure = board[2][6];
	    		board[2][6] = ' ';
	    	}
	    	if (turn[1] == '7')
	    	{
	    		figure = board[1][6];
	    		board[1][6] = ' ';
	    	}
	    	if (turn[1] == '8')
	    	{
	    		figure = board[0][6];
	    		board[0][6] = ' ';
	    	}
	    }

	    if (turn[0] == 'g')
	    {
	    	if (turn[1] == '1')
	    	{
	    		figure = board[7][7];
	    		board[7][7] = ' ';
	    	}
	    	if (turn[1] == '2')
	    	{
	    		figure = board[6][7];
	    		board[6][7] = ' ';
	    	}
	    	if (turn[1] == '3')
	    	{
	    		figure = board[5][7];
	    		board[5][7] = ' ';
	    	}
	    	if (turn[1] == '4')
	    	{
	    		figure = board[4][7];
	    		board[4][7] = ' ';
	    	}
	    	if (turn[1] == '5')
	    	{
	    		figure = board[3][7];
	    		board[3][7] = ' ';
	    	}
	    	if (turn[1] == '6')
	    	{
	    		figure = board[2][7];
	    		board[2][7] = ' ';
	    	}
	    	if (turn[1] == '7')
	    	{
	    		figure = board[1][7];
	    		board[1][7] = ' ';
	    	}
	    	if (turn[1] == '8')
	    	{
	    		figure = board[0][7];
	    		board[0][7] = ' ';
	    	}
	    }

	    if (turn[0] == 'h')
	    {
	    	if (turn[1] == '1')
	    	{
	    		figure = board[7][8];
	    		board[7][8] = ' ';
	    	}
	    	if (turn[1] == '2')
	    	{
	    		figure = board[6][8];
	    		board[6][8] = ' ';
	    	}
	    	if (turn[1] == '3')
	    	{
	    		figure = board[5][8];
	    		board[5][8] = ' ';
	    	}
	    	if (turn[1] == '4')
	    	{
	    		figure = board[4][8];
	    		board[4][8] = ' ';
	    	}
	    	if (turn[1] == '5')
	    	{
	    		figure = board[3][8];
	    		board[3][8] = ' ';
	    	}
	    	if (turn[1] == '6')
	    	{
	    		figure = board[2][8];
	    		board[2][8] = ' ';
	    	}
	    	if (turn[1] == '7')
	    	{
	    		figure = board[1][8];
	    		board[1][8] = ' ';
	    	}
	    	if (turn[1] == '8')
	    	{
	    		figure = board[0][8];
	    		board[0][8] = ' ';
	    	}
	    }



	    if (turn[3] == 'a')
	    {
	    	if (turn[4] == '1')
	    		board[7][1] = figure;
	    	if (turn[4] == '2')
	    		board[6][1] = figure;
	    	if (turn[4] == '3')
	    		board[5][1] = figure;
	    	if (turn[4] == '4')
	    		board[4][1] = figure;
	    	if (turn[4] == '5')
	    		board[3][1] = figure;
	    	if (turn[4] == '6')
	    		board[2][1] = figure;
	    	if (turn[4] == '7')
	    		board[1][1] = figure;
	    	if (turn[4] == '8')
	    		board[0][1] = figure;
	    }

	    if (turn[3] == 'b')
	    {
	    	if (turn[4] == '1')
	    		board[7][2] = figure;
	    	if (turn[4] == '2')
	    		board[6][2] = figure;
	    	if (turn[4] == '3')
	    		board[5][2] = figure;
	    	if (turn[4] == '4')
	    		board[4][2] = figure;
	    	if (turn[4] == '5')
	    		board[3][2] = figure;
	    	if (turn[4] == '6')
	    		board[2][2] = figure;
	    	if (turn[4] == '7')
	    		board[1][2] = figure;
	    	if (turn[4] == '8')
	    		board[0][2] = figure;
	    }

	    if (turn[3] == 'c')
	    {
	    	if (turn[4] == '1')
	    		board[7][3] = figure;
	    	if (turn[4] == '2')
	    		board[6][3] = figure;
	    	if (turn[4] == '3')
	    		board[5][3] = figure;
	    	if (turn[4] == '4')
	    		board[4][3] = figure;
	    	if (turn[4] == '5')
	    		board[3][3] = figure;
	    	if (turn[4] == '6')
	    		board[2][3] = figure;
	    	if (turn[4] == '7')
	    		board[1][3] = figure;
	    	if (turn[4] == '8')
	    		board[0][3] = figure;
	    }

	    if (turn[3] == 'd')
	    {
	    	if (turn[4] == '1')
	    		board[7][4] = figure;
	    	if (turn[4] == '2')
	    		board[6][4] = figure;
	    	if (turn[4] == '3')
	    		board[5][4] = figure;
	    	if (turn[4] == '4')
	    		board[4][4] = figure;
	    	if (turn[4] == '5')
	    		board[3][4] = figure;
	    	if (turn[4] == '6')
	    		board[2][4] = figure;
	    	if (turn[4] == '7')
	    		board[1][4] = figure;
	    	if (turn[4] == '8')
	    		board[0][4] = figure;
	    }

	    if (turn[3] == 'e')
	    {
	    	if (turn[4] == '1')
	    		board[7][5] = figure;
	    	if (turn[4] == '2')
	    		board[6][5] = figure;
	    	if (turn[4] == '3')
	    		board[5][5] = figure;
	    	if (turn[4] == '4')
	    		board[4][5] = figure;
	    	if (turn[4] == '5')
	    		board[3][5] = figure;
	    	if (turn[4] == '6')
	    		board[2][5] = figure;
	    	if (turn[4] == '7')
	    		board[1][5] = figure;
	    	if (turn[4] == '8')
	    		board[0][5] = figure;
	    }

	    if (turn[3] == 'f')
	    {
	    	if (turn[4] == '1')
	    		board[7][6] = figure;
	    	if (turn[4] == '2')
	    		board[6][6] = figure;
	    	if (turn[4] == '3')
	    		board[5][6] = figure;
	    	if (turn[4] == '4')
	    		board[4][6] = figure;
	    	if (turn[4] == '5')
	    		board[3][6] = figure;
	    	if (turn[4] == '6')
	    		board[2][6] = figure;
	    	if (turn[4] == '7')
	    		board[1][6] = figure;
	    	if (turn[4] == '8')
	    		board[0][6] = figure;
	    }

	    if (turn[3] == 'g')
	    {
	    	if (turn[4] == '1')
	    		board[7][7] = figure;
	    	if (turn[4] == '2')
	    		board[6][7] = figure;
	    	if (turn[4] == '3')
	    		board[5][7] = figure;
	    	if (turn[4] == '4')
	    		board[4][7] = figure;
	    	if (turn[4] == '5')
	    		board[3][7] = figure;
	    	if (turn[4] == '6')
	    		board[2][7] = figure;
	    	if (turn[4] == '7')
	    		board[1][7] = figure;
	    	if (turn[4] == '8')
	    		board[0][7] = figure;
	    }

	    if (turn[3] == 'h')
	    {
	    	if (turn[4] == '1')
	    		board[7][8] = figure;
	    	if (turn[4] == '2')
	    		board[6][8] = figure;
	    	if (turn[4] == '3')
	    		board[5][8] = figure;
	    	if (turn[4] == '4')
	    		board[4][8] = figure;
	    	if (turn[4] == '5')
	    		board[3][8] = figure;
	    	if (turn[4] == '6')
	    		board[2][8] = figure;
	    	if (turn[4] == '7')
	    		board[1][8] = figure;
	    	if (turn[4] == '8')
	    		board[0][8] = figure;
	    }

	    for (int i = 0; i < 9; ++i) {
	        for (int j = 0; j < 9; ++j) {
	            printf("%2c", board[i][j]);
	        }
	        printf("\n");
	    }
	}
}