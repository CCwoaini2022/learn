#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <math.h>
#include <stdlib.h>

//求1-100之间的所有素数的优化算法
//一个数i如果不是素数，那么一定可以写成i=a*b的形式，比如16=2*8=4*4
//而且这两个因子至少有一个是<=根号下i的

int main()
{

	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j <=sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (sqrt(i)<j)//程序有两种情况会到达这里（1.执行上面的break，2.j=i）,如果不加一个判断语句，打印的不仅有素数还有不是素数
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount=%d\n", count);
	return 0;
}






//试除法
//int main()
//{
//
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否是素数；用试除法
//		//只能被1和它本身整除的数是素数
//		//用2->i-1 的数去试除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)//程序有两种情况会到达这里（1.执行上面的break，2.j=i）,如果不加一个判断语句，打印的不仅有素数还有不是素数
//		{
//			count++;
//			printf("%d ", i);
//		}
//		
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



////计算两个数的最大公约数
////辗转相除法
//int main()
//{
//
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("最大公约数是：%d\n", n);
//	return 0;
//
//}




//int main()
//{
//	//判断year1000-2000是否为闰年
//	//1.能被四整除并且不能被100整除的是闰年
//	//2.能被400整除的是闰年
//	
//		int i = 0;
//		int count = 0;
//		for (i = 1000; i <= 2000; i++)
//		{
//			if ((i % 4 == 0) && (i % 100 != 0))
//			{
//				printf("%d ", i);
//				count++;
//			}
//			else if (i % 400 == 0)
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//		printf("\ncount=%d\n", count);
//	return  0;
//}








//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if ((i % 3) == 0)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}






//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		 b= c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "730730") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			int a = 3 - (i+1);
//			printf("密码错误\n");
//			if (i < 2)
//			{
//				printf("还有%d次机会\n", a);
//				Sleep(2000);
//				system("cls");
//			}
//			else
//			{
//				system("cls");
//				printf("机会用完了，请联系陈陈重置密码\n");
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	char arr1[] = "chenchen I love you forever!";
//	char arr2[] = "############################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(500);
//		system("cls");
//		left++;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}





//int main()
//{
//	char arr1[] = "chenchen I love you forever!";
//	char arr2[] = "############################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
////	}
//	printf("%s\n", arr2);
//	return 0;
//}





//int main()
//{
//	char arr[] = "welcom to bit!!!!!!";
//	printf("%d\n", strlen(arr));
//	return 0;
//}
////老师写的代码
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (n == 0)
//			return 1;
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}






////自己写的代码
//int Jiecheng(int x)
//{
//
//	int i = 1;
//	int b = 1;
//	while (i <= x)
//	{
//		if (x == 0)
//			return 1;
//		b = b * i;
//		i++;
//	}
//	return b;
//}
//int main()
//{
//	int a = 0;
//	int c = 0;
//	printf("请输入想求的阶乘\n");
//	scanf("%d", &c);
//	a=Jiecheng(c);
//	printf("结果是：%d\n", a);
//	return 0;
//
//}




//
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (j=0; j < 10; j++)
//		{
//			printf("陈陈我爱你\n");
//		}
//	}
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 5,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//采用前闭后开的方式
//	//是对自己的一种提示
//	//10次循环
//	//10次打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






//int main()
//{
//	int i = 0;
//	//   初始化  判断     调整
//	for (i = 1; i <= 100; i++)
//	{
//		if(i==5||i==100)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}







//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}








//int main()
//{
//	
//	//EOF 用法举例
//	int ch;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>\n");
//	scanf("%s", password);//数组的本质是指针，不需要&；
//	//输入密码，并存放在password的数组中；
//	//scanf读取结束标志是空格；
//	//输入密码123456的时候，输入缓冲区是“123456\n”
//	//所以放置一个getchar来把“\n”读走
//	while(ch=getchar()!='\n');//每次只读一个字符；
//	{
//		;
//	}
//	printf("请确认密码:>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//		printf("已确认\n");
//	else
//		printf("未确认\n");
//	return 0;
//
//		
//	
//	
//	
//	
//	
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//getchar putchar是输入输出函数
//	//	//EOF-end of file 文件结束标志
//	//	putchar(ch);
//	//return 0;
//}