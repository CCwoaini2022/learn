#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <math.h>
#include <stdlib.h>

//��1-100֮��������������Ż��㷨
//һ����i���������������ôһ������д��i=a*b����ʽ������16=2*8=4*4
//��������������������һ����<=������i��

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
		if (sqrt(i)<j)//��������������ᵽ�����1.ִ�������break��2.j=i��,�������һ���ж���䣬��ӡ�Ĳ������������в�������
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount=%d\n", count);
	return 0;
}






//�Գ���
//int main()
//{
//
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ������������Գ���
//		//ֻ�ܱ�1����������������������
//		//��2->i-1 ����ȥ�Գ�
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)//��������������ᵽ�����1.ִ�������break��2.j=i��,�������һ���ж���䣬��ӡ�Ĳ������������в�������
//		{
//			count++;
//			printf("%d ", i);
//		}
//		
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



////���������������Լ��
////շת�����
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
//	printf("���Լ���ǣ�%d\n", n);
//	return 0;
//
//}




//int main()
//{
//	//�ж�year1000-2000�Ƿ�Ϊ����
//	//1.�ܱ����������Ҳ��ܱ�100������������
//	//2.�ܱ�400������������
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "730730") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			int a = 3 - (i+1);
//			printf("�������\n");
//			if (i < 2)
//			{
//				printf("����%d�λ���\n", a);
//				Sleep(2000);
//				system("cls");
//			}
//			else
//			{
//				system("cls");
//				printf("���������ˣ�����ϵ�³���������\n");
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
//		//��Ϣһ��
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
//		//��Ϣһ��
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
////��ʦд�Ĵ���
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






////�Լ�д�Ĵ���
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
//	printf("����������Ľ׳�\n");
//	scanf("%d", &c);
//	a=Jiecheng(c);
//	printf("����ǣ�%d\n", a);
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
//			printf("�³��Ұ���\n");
//		}
//	}
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 5,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//����ǰ�պ󿪵ķ�ʽ
//	//�Ƕ��Լ���һ����ʾ
//	//10��ѭ��
//	//10�δ�ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






//int main()
//{
//	int i = 0;
//	//   ��ʼ��  �ж�     ����
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
//	//EOF �÷�����
//	int ch;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>\n");
//	scanf("%s", password);//����ı�����ָ�룬����Ҫ&��
//	//�������룬�������password�������У�
//	//scanf��ȡ������־�ǿո�
//	//��������123456��ʱ�����뻺�����ǡ�123456\n��
//	//���Է���һ��getchar���ѡ�\n������
//	while(ch=getchar()!='\n');//ÿ��ֻ��һ���ַ���
//	{
//		;
//	}
//	printf("��ȷ������:>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//		printf("��ȷ��\n");
//	else
//		printf("δȷ��\n");
//	return 0;
//
//		
//	
//	
//	
//	
//	
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//getchar putchar�������������
//	//	//EOF-end of file �ļ�������־
//	//	putchar(ch);
//	//return 0;
//}