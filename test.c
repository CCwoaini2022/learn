#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <string.h>
#include < stdlib.h >
#include <time.h>
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("*******    1.play    ********\n");
	printf("*******    0.go      ********\n");
	printf("*****************************\n");
}
void game()
{
	//存储数据-二维数组
	char board[ROW][COL];
	//初始化棋盘-初始化为空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;	
		}
	} while (input);
	return 0;
}