#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>


int main()
{
	int day = 0;

	scanf("%d", &day);

	switch(day)
	{
		case 1:
		case 2:			
		case 3:
		case 4:
		case 5:
			printf("工作日\n");
			break;
		case 6:
		case 7:
			printf("休息日\n");
			break;
		default:
			printf("请输入1-7之间的数字\n");
			break;
	}
	return 0;

}



//while if嵌套的方式输出1-100之间的所有奇数
//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


////使用函数来输出从1-100的奇数
//int Odd(int x)
//{
//	
//	int b = x % 2;
//	if (1 == b)
//		printf("%d ", x);
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		Odd(i);
//		i++;
//	}
//	return 0;
//}







//struct book
//{
//	char name[20];//书名
//	int price;//书价格
//};
//int main()
//{
//
//	//利用结构体类型创建一个该结构体类型的结构体变量
//	struct book b1 = { "成功秘诀",180 };
//	struct book* pb = &b1;
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	
//
//	/*printf("书名是：%s\n", b1.name);
//	printf("价格是：%d\n", b1.price);
//	b1.price = 2999;
//	printf("价格改为了：%d\n", b1.price);*/
//	return 0;
//}




//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;
//
//	printf("%d\n", a);
//	return 0;
//}







////函数表达式
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//////宏的表达式
////#define MAX(x,y)(x>y?x:y)
//
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int max = 0;
//	//函数的方式实现
//	max = Max(a, b);
//	printf("最大值=%d\n", max);
//	////宏的方式实现
//	//max = MAX(a, b);
//	//printf("最大值=%d\n", max);
//	//return 0;
//
//}






//声明外部的的函数
//extern int ADD(int, int);
//
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int sum = 0;
//	sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}







//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}





//int main()
//{
//
//	int a = 10;
//	int b = a++;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}








//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}



//int main()
//{
//	int num1 = 20;
//	int num2 = 30;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}
	
	//
	//int sz = 0;
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//sz = sizeof(arr) / sizeof(arr[0]);
	//printf("arr数组的元素个数=%d\n", sz);
	//printf("arr所占的内存空间=%d\n", sizeof(arr));


	
	
	
	
	/*int a = 1;
	int b = a << 2;
	printf("%d\n", b);*/


	
	//int a = 5 % 2;
	//printf("%d\n", a);
	
	
	
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个可以存放10个整数数字的数组
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d ", arr[i]);
	//	i++;
	//}
	//	
	
	//printf("%d\n", arr[7]);
	

//int main()
//{
//	int line = 0;
//	printf("什么时候可以娶陈陈回家呢\n");
//	printf("当爱的次数变成1314的时候\n");
//
//	while(line <= 1314)
//	{
//		printf("爱的次数:%d\n", line);
//		line++;
//	}
//	if (line >1314)
//		printf("完成任务可以娶陈陈回家了\n");
//	return 0;
//}
//#define max 10
//int main()
//{
//	int input = 0;
//	printf("你爱我吗？（1/0）：\n");
//	scanf("%d", &input);
//	if(input == 1)
//		printf("我也爱你\n");
//	else
//		printf("我仍然爱你\n");
//	return 0;
//
//
//
//
//	/*printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("c:\test\32\test.c\n");
//	printf("\32\n");
//	printf("\x32\n");
//	printf("\132\n");*/
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a','b','c',};
//	//printf("%d\n", strlen(arr1));
//	//printf("%d\n", strlen(arr2));//strlen就是计算字符串的长度也就是说计算字符串的额字符个数
//	
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a','b','c','\0'};//\0是字符串的结束标志
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	
//}

//int main()
//{
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	return 0;
//	//计算两个数的和
//	//int num1 = 0;
//	//int num2 = 0;
//	//输入数据使用输入函数scanf
//	//scanf("%d%d", &num1, &num2);
//	//int sum = 0;
//	//sum = num1 + num2;
//	//printf("和=%d\n", sum);
//	
//}