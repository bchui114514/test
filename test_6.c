#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.输出结果是什么
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
//}//输出67

//2.输出结果
//int main()
//{
//	int x = 1;
//	do
//		printf("%2d\n", x++);//1 
//	while (x--);
//}//结果1循环

//3.执行后i和j的值是什么
//int main()
//{
//	int i = 1;
//	int j;
//	j = i++;
//	printf("%d %d\n", i, j);
//	return 0;
//}//i = 2,j = 1

//4.求k的最终值
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;//k = k *(i+j)
//	printf("%d\n", k);
//	return 0;
//}//k=90

//5.求以下代码的结果
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
//}//输出结果为1

//10.c的值为多少
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

//11求y的值
//int main()
//{
//	double x = 2, y = x + 3 / 2;
//	printf("%d\n", y);
//	return 0;
//}//3.00000000

//12求函数循环次数
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

//求两个数之间的最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//int m = a>b?a:b;
//	int i = 1;
//	while (1)
//	{
//		if (a * i % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//		i++;
//	}
//	return 0;
//}

//int fun(int n) 
//{
//    int x = 1, k;
//    if (n == 1) return x;
//    for (k = 1; k < n; ++k)
//        x = x + fun(k) * fun(n - k);
//    return x;
//}
//int main()
//{
//    printf("%d\n", fun(5));
//    return 0;
//}


//int main()
//{
//	int x = 1.0;
//	float y = 2.0;
//
//	return 0;
//}