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
	//���ݴ洢-��ά����
	char board[ROW][COL];

	//��ʼ������-��ʼ��Ϊ�ո�
	InitBoard(board,ROW,COL);




}







int main()
{
	int input = 0;
	do
	{
		
		menu();
		printf("��ѡ��\n");
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