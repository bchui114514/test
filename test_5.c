#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//F5-启动调试
//F9-设置/取消断点
//F10-逐过程
//F11-逐语句

//求n的阶乘和
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for ( j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	 
//	for ( i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("114\n");
//	}
//	return 0; 
//}

//模拟实现strcpy
char* my_strcpy(char* dest, const char* src)
{
	//int len_dest = sizeof(dest) / sizeof(dest[0]);
	//int len_src = sizeof(src) / sizeof(src[0]);
	//int i = 0;
	//for ( i = 0; i <=len_dest; i++)
	//{
	//	dest[i] = src[i];
	//}
	assert(src != NULL);//断言
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;//返回目标空间起始地址
}

int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	printf("%s ", my_strcpy(arr1, arr2));//链式访问

	return 0;
}

//模拟实现strlen(求字符串长度)
size_t my_strlen(const char* str)//size_t - unsigned int
{
	assert(str != NULL);
	size_t count = 0;
	while (*str++ != '\0')	
		count++;
	return count;
}

int main()
{
	char arr[] = "abc";
	printf("%d\n", my_strlen(arr));
	return 0;
}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d,b = %d,c = %d\n", a, b, c);
//	return 0;
//}

////输出给定数字二进制中1的个数
//int function(int n)
//{
//	int count = 0;
//	////while (n)
//	////{
//	////	if (n % 2 == 1)
//	////		count++;
//	////	n /= 2;
//	////}
//	//int i = 0;
//	//for ( i = 0; i < 32; i++)
//	//{
//	//	if (((n >> i) & 1) == 1)
//	//		count++;
//	//}
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int n = -1;
//	printf("有%d个1。", function(n));
//	return 0;
//}

//判断一个数是否为2的n次方
//void function(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	if (count == 1)
//	{
//		printf("是");
//	}
//	else
//	{
//		printf("否");
//	}
//}
//
//
//int main()
//{
//	int num = 16;
//	function(num);
//	return 0;
//}

//输出两个数二进制位不同的个数
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int count = 0;
//	//for (int i = 0; i < 32; i++)
//	//{
//	//	if (((m >> i) & 1) != ((n >> i) & 1))
//	//		count++;
//	//}
//	int ret = m ^ n;//异或 相同为0相异为1
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，并分别打印
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", ((n >> i) & 1));
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", ((n >> i) & 1));
//	}
//	printf("\n");
//	return 0;
//}

//交换两个整型变量（不创建临时变量）
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d %d\n", m, n);
	m = m ^ n;
	n = m ^ n;
	m = m ^ n;
	printf("%d %d\n", m, n);

	return 0;
}