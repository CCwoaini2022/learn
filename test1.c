#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <string.h>
#include < stdlib.h >
#include <time.h>
#include "game1.h"



void menu()
{
	printf("********************\n");
	printf("****  1.play   *****\n");
	printf("****  0.exit   *****\n");
	printf("********************\n");
}


void game()
{
	//数据存储-二维数组
	char board[ROW][COL];

	//初始化棋盘-初始化为空格
	InitBoard(board,ROW,COL);




}







int main()
{
	int input = 0;
	do
	{
		
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			break;
		}

	} while (input);
	return 0;
}