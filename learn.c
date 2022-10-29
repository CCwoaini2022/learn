#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <string.h>
#include < stdlib.h >
#include <time.h>

int Zs(int arr[],int k,int sz)
{
	int left = 0;
	int mid = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right)/2;
		if (k < arr[mid])
			right = mid - 1;
		else if (k > arr[mid])
			left = mid + 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int ret = Zs(arr, k,sz);
	if (ret == -1)
		printf("没找到数字的下标\n");
	else
		printf("找到了，下标是：%d\n", ret);
	return 0;
}





//int Pdrn(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0)
//		return 1;//是闰年
//	else if (x % 400 == 0)
//		return 1;//是闰年
//	else
//		return 0;//不是闰年
//}
//
//
//int main()
//{
//	int year = 0;
//	printf("请输入年份\n");
//	scanf("%d", &year);
//	if (Pdrn(year) == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//
//}





//int Pdss(int x)//
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	if (i > sqrt(x))
//	{		
//		return 1;
//	}
//}
//
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (Pdss(num) == 1)
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//}


//void Change_num(int* pa, int* pb )
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	printf("num1=%d num2=%d\n", num1, num2);
//	Change_num(&num1, &num2);
//	printf("num1=%d num2=%d\n", num1, num2);
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else if (x < y)
//	{
//		return y;
//	}
//	else
//	{
//		return x;
//	}
//}
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int ret = 0;
//	scanf("%d%d", &num1, &num2);
//	ret=Max(num1, num2);
//	printf("max=%d\n", ret);
//	return 0;
//
//}



//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 2);
//	printf("%s\n", arr);
//	return 0;
//
//}






//int main()
//{
//
//	char arr1[] = "bit";
//	char arr2[20] = "######";
//	strcpy(arr2, arr1);//字符串的复制
//	printf("%s\n", arr2);
//	return 0;
//}




//goto 语句
//int main()
//{
//again:
//	printf("chenchenwoaini\n");
//	goto again;
//	return 0;
//}