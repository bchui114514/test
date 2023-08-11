#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
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

//int main() 
//{
//    char p1[15] = "abcd", * p2 = "ABCD", str[50] = "xyz";
//    //strcpy(str + 2, strcat(p1 + 2, p2 + 1));
//    //printf("%s", str);
//    printf("%s", str + 2);
//    //printf("%s", p1 + 2);
//    //printf("%s", p2 + 1);
//    return 0;
//}

//int main()
//{
//	int x = 3, y;
//	int* px = &x;
//	y = *px++;
//	printf("%d %d",x, y);
//	return 0;
//}

//int foo(int x, int y) 
//{
//    if (x <= 0 || y <= 0) {
//        return 1;
//    }
//    if (y % 2 == 0) {
//        return 2 * foo(x - 3, y / 3);
//    }
//    else {
//        return 3 * foo(x - 2, y / 2);
//    }
//}
//
//int main()
//{
//    printf("%d\n", foo(9, 12));
//    return 0;
//}

//int f(int n) {
//    int i = 0;
//    for (int k = 1; k <= n; k *= 2)
//        ++i;
//    for (int j = i / 2; j > 0; --j) {
//        int v1 = (1 << (j - 1));
//        int v2 = (1 << (i - j));
//        bool flag1 = ((n & v1) != 0);
//        bool flag2 = ((n & v2) != 0);
//        if (flag1 != flag2) {
//            n ^= v1;
//            n ^= v2;
//        }
//    }
//    return n;
//}
//
//int main(int argc, char* argv[])
//{
//    printf("%d", f(3456));
//    return 0;
//}

//int f(int n) 
//{
//    static int i = 1;
//    if (n >= 5)
//        return n;
//    n = n + i;
//    i++;
//    return f(n);
//}
//
//int main()
//{
//    printf("%d", f(1));
//    return 0;
//}

//int fun(int x) {
//    static int a = 3;
//    x += a++;
//    return x;
//}
//void main() 
//{
//    int x = 2, sum;
//    sum = fun(x);
//    sum = sum + fun(x);
//    printf("%d\n", sum);
//}

//int f1(int x) 
//{ 
//    return x + 5; 
//}
//int f2(int x) 
//{ 
//    return 2 * x - 1; 
//}
//int main() 
//{
//    int (*p1)(int), (*p2)(int), (*t)(int), y1, y2;
//    p1 = f1;
//    p2 = f2;
//    y1 = p2(p1(1));
//    t = p1;
//    p1 = p2;
//    p2 = t;
//    y2 = p2(p1(2));
//    printf("%d, %d\n", y1, y2);
//}

//int main()
//{
//	int a = 12;
//	a += a -= a * a;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	//int x;
//	//int a = ((x = 4 * 5, x * 5), x + 25);
//	int a = 4 << 2 | 3;
//	printf("%d", a);
//	return 0;
//}

//int f(unsigned int n) 
//{
//    unsigned int m = 0;
//    for (m = 0; n; ++m) {
//        n &= (n - 1);
//    }
//    return m;
//}
//
//int main() 
//{
//   /* printf("%d\n", 2486 & 2485);*/
//    printf("%d\n", f(2486));
//    return 0;
//}

//int func(int x) 
//{
//    int countx = 0;
//    while (x) {
//        countx++;
//        x = x & (x - 1);
//    }
//    return countx;
//}
//int main() 
//{
//    int a = func(256);
//    printf("%d", a);
//    return 0;
//}