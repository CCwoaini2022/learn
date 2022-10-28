#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <string.h>
#include < stdlib.h >
#include <time.h>


//猜数字游戏
//1.电脑会自动生成一个随机数
//2.猜数字

void menu()
{
	printf("#####################################\n");
	printf("########1.play    0.exit   ##########\n");
	printf("#####################################\n");
}

void game()
{
	//1.生成一个随机数
	int ret = 0;
	int guess= 0;
	ret=rand()%100;//生成1-100之间的数
	//printf("%d\n", ret); 
	//2.猜数字
	printf("请猜数字:>\n");
	while (1)
	{
		
		scanf("%d", &guess);
		if (guess< ret)
		{
			
			printf("小了\n");
			printf("请重新输入\n");
		}
		else if (guess > ret)
		{
			printf("大了\n");
			printf("请重新输入\n");
		}
		else
		{
			printf("恭喜你，答对了！\n");
			break;
		}
			
	}
}


//
int main()
{

	srand((unsigned int)time(NULL));	//拿时间戳设置随机数的生成起始点
	int input = 0;
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
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
//			printf("%d*%d=%-2d ", i, j,i*j);	//%-2d 向左对齐，不够就补空格		
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




//一个数%10得到它的个位，/10得到他的十位
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
//		if(i / 10 == 9)//只有上面的if不执行，才会执行else if,所以最后的结果会少统计一个，把else去掉就正确了
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}