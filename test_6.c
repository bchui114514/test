#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.��������ʲô
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return 2;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//void main()
//{
//	fib(8);
//	printf("%d ", cnt);
//	return 0;
//}//���67

//2.������
//int main()
//{
//	int x = 1;
//	do
//		printf("%2d\n", x++);//1 
//	while (x--);
//}//���1ѭ��

//3.ִ�к�i��j��ֵ��ʲô
//int main()
//{
//	int i = 1;
//	int j;
//	j = i++;
//	printf("%d %d\n", i, j);
//	return 0;
//}//i = 2,j = 1

//4.��k������ֵ
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;//k = k *(i+j)
//	printf("%d\n", k);
//	return 0;
//}//k=90

//5.�����´���Ľ��
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}//������Ϊ1

//10.c��ֵΪ����
//int main()
//{
//	int a = 0, c = 0;
//	do
//	{
//		--c;
//		a = a - 1;
//	} 
//	while (a > 0);
//	printf("%d\n", c);
//	return 0;
//}//-1

//11��y��ֵ
//int main()
//{
//	double x = 2, y = x + 3 / 2;
//	printf("%d\n", y);
//	return 0;
//}//3.00000000

//12����ѭ������
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int count = 0;
//	for (x = 0, y = 0; (y = 123) && (x < 4);x++)
//	{
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}//4

