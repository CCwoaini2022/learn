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
			printf("������\n");
			break;
		case 6:
		case 7:
			printf("��Ϣ��\n");
			break;
		default:
			printf("������1-7֮�������\n");
			break;
	}
	return 0;

}



//while ifǶ�׵ķ�ʽ���1-100֮�����������
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


////ʹ�ú����������1-100������
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
//	char name[20];//����
//	int price;//��۸�
//};
//int main()
//{
//
//	//���ýṹ�����ʹ���һ���ýṹ�����͵Ľṹ�����
//	struct book b1 = { "�ɹ��ؾ�",180 };
//	struct book* pb = &b1;
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	
//
//	/*printf("�����ǣ�%s\n", b1.name);
//	printf("�۸��ǣ�%d\n", b1.price);
//	b1.price = 2999;
//	printf("�۸��Ϊ�ˣ�%d\n", b1.price);*/
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







////�������ʽ
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//////��ı��ʽ
////#define MAX(x,y)(x>y?x:y)
//
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int max = 0;
//	//�����ķ�ʽʵ��
//	max = Max(a, b);
//	printf("���ֵ=%d\n", max);
//	////��ķ�ʽʵ��
//	//max = MAX(a, b);
//	//printf("���ֵ=%d\n", max);
//	//return 0;
//
//}






//�����ⲿ�ĵĺ���
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
	//printf("arr�����Ԫ�ظ���=%d\n", sz);
	//printf("arr��ռ���ڴ�ռ�=%d\n", sizeof(arr));


	
	
	
	
	/*int a = 1;
	int b = a << 2;
	printf("%d\n", b);*/


	
	//int a = 5 % 2;
	//printf("%d\n", a);
	
	
	
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����Դ��10���������ֵ�����
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
//	printf("ʲôʱ�����Ȣ�³»ؼ���\n");
//	printf("�����Ĵ������1314��ʱ��\n");
//
//	while(line <= 1314)
//	{
//		printf("���Ĵ���:%d\n", line);
//		line++;
//	}
//	if (line >1314)
//		printf("����������Ȣ�³»ؼ���\n");
//	return 0;
//}
//#define max 10
//int main()
//{
//	int input = 0;
//	printf("�㰮���𣿣�1/0����\n");
//	scanf("%d", &input);
//	if(input == 1)
//		printf("��Ҳ����\n");
//	else
//		printf("����Ȼ����\n");
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
//	//printf("%d\n", strlen(arr2));//strlen���Ǽ����ַ����ĳ���Ҳ����˵�����ַ����Ķ��ַ�����
//	
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a','b','c','\0'};//\0���ַ����Ľ�����־
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
//	//�����������ĺ�
//	//int num1 = 0;
//	//int num2 = 0;
//	//��������ʹ�����뺯��scanf
//	//scanf("%d%d", &num1, &num2);
//	//int sum = 0;
//	//sum = num1 + num2;
//	//printf("��=%d\n", sum);
//	
//}