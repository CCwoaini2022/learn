#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <string.h>
#include < stdlib.h >
#include <time.h>









//��������ʲô��
//����������Ԫ�صĵ�ַ����������������
//1.sizeof������������������������������������飬�ñ��ʽ�������������Ĵ�С����λ���ֽڡ�
//2.&�����������������������������Ԫ�ص����飬�ñ��ʽ�������������ĵ�ַ��

//ð������

void bubble_sort(int arr[],int sz)
{
	
	int i = 0;
	for (i = 0; i < sz - 1; i++)//ð�����������
	{
		int j = 0;
		int flag = 1;

		for (j = 0; j <sz-1-i ; j++)//һ��ð�������ִ�й���
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];     //
				arr[j] = arr[j + 1];  //����
				arr[j + 1] = tmp;     //
				flag = 0;             //
			}
		}
		if (flag == 1)
			break; 
	}
}

int main()
{
	
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
	bubble_sort(arr,sz);
	int a = 0;
	for (a = 0; a < 10; a++)
	{
		printf("%d ", arr[a]);
	}
	return 0;

}






//int main()
//{
//	/*int arr[3][4];
//	char ch[3][4];*/
//	//��ʼ��-������ͬʱ����ֵ
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr[][4] = { {1,2},{2,3} ,{3,4} };
//	int i = 0;
//	//int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i, j, &arr[i][j]);
//		}
//	}*/
//	return 0;
//}




//int Ycdy(int n)
//{
//	if (n > 9)
//	{
//		Ycdy(n / 10);
//	}
//	
//	printf("%d ",n%10);
//	return 0;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	printf("��������Ҫ��ӡ������\n");
//	scanf("%d", &num);
//	Ycdy(num);//���δ�ӡÿһλ����
//	return 0;
//}




//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}




//int main()
//{
//
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}