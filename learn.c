#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <string.h>
#include < stdlib.h >
#include <time.h>


//��������Ϸ
//1.���Ի��Զ�����һ�������
//2.������

void menu()
{
	printf("#####################################\n");
	printf("########1.play    0.exit   ##########\n");
	printf("#####################################\n");
}

void game()
{
	//1.����һ�������
	int ret = 0;
	int guess= 0;
	ret=rand()%100;//����1-100֮�����
	//printf("%d\n", ret); 
	//2.������
	printf("�������:>\n");
	while (1)
	{
		
		scanf("%d", &guess);
		if (guess< ret)
		{
			
			printf("С��\n");
			printf("����������\n");
		}
		else if (guess > ret)
		{
			printf("����\n");
			printf("����������\n");
		}
		else
		{
			printf("��ϲ�㣬����ˣ�\n");
			break;
		}
			
	}
}


//
int main()
{

	srand((unsigned int)time(NULL));	//��ʱ��������������������ʼ��
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} 
	while (input);
	return 0;
}









//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//int main()
//{
//	int i = 1;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j,i*j);	//%-2d ������룬�����Ͳ��ո�		
//		}
//		printf("\n");
//	}
//	return 0;
//}





//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}










//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*1.0 / i;
//		flag = (-flag);
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}




//һ����%10�õ����ĸ�λ��/10�õ�����ʮλ
//int main()
//{
//
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%10==9)
//		{
//			count++;
//		}
//		if(i / 10 == 9)//ֻ�������if��ִ�У��Ż�ִ��else if,�������Ľ������ͳ��һ������elseȥ������ȷ��
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}