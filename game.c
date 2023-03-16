#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <string.h>
#include < stdlib.h >
#include <time.h>
#include "game.h"

//≥ı ºªØ∆Â≈Ã

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//¥Ú”°∆Â≈Ã
void DisplayBoard(char board[ROW][COL], int row, int col)
{

	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)	
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int a = 0;

			for (a = 0; a < col; a++)
			{
				printf("---");
				if (a < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
			
	}
}
