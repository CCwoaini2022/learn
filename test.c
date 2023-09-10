#include <stdio.h>

//int main()
//{
//
//	
//	char* ps = "asdfghj";
//	char arr[] = "adsgm";
//
//	printf("%s\n", ps);
//	printf("%s\n", arr);
//
//	
//
//	return 0;
//}

//int main()
//{
//	char str1[] = "wangbo";
//	char str2[] = "wangbo";
//	char *str3 = "wangbo";
//	char *str4 = "wangbo";
//
//	if (str1[]== str2[])
//		printf("Í¬");
//	else
//		printf("²»Í¬");
//
//
//
//	return 0;
//
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 0,2,3,4,5 };
//	int c[] = { 3,2,3,4,5 };
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));		
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	double* d[5];
	double* (*pd)[5] = &d;

	int arr[10];
	int(*parr)[10] = &(arr);


	
	return 0;
}