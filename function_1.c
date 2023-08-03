#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello mathor fuck!\n";
//	strcpy(arr1, arr2);
//	printf("%s",arr1);//%s是以字符串的格式来打印
//
//}

//自定义函数
//int get_max(int x,int y)
//{
//	int z;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}

//int main()
//{
//	int a,b;
//	scanf_s("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//void Swap(int* pa,int* pb)
//{
//	int z;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("交换位置前：a = %d，b = %d", a, b);
//	Swap(&a, &b);
//	printf("交换位置后：a = %d，b = %d", a, b);
//
//	return 0;
//}
//int is_prime(int n)
//{
//	int j;
//	for ( j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i;
//	int count = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d \n", i);
//		count++;
//	}
//
//	printf("count = %d\n", count);
//	return 0;
//}

//int	is_leap_year(int year)
//	{
//	if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
//		{
//		return 1;
//		}
//	else
//		{
//		return 0;
//		}
//	}
//
//
//int main()
//{
//	int y = 0;
//	for ( y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid]  <k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到就返回位置的下标
//	//没找到返回-1
//	int ret = binary_search(arr,key,sz);
//	if (-1 == ret) 
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d", ret);
//	}
//	return 0;
//}

//void Add(int*p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//函数递归
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);
//	print(num);
//	return 0;
//
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return (1 + my_strlen(str + 1));
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "home";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return (n * Fac(n - 1));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	if (n<= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

//int Fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//
//	return 0;
//}
//
//求1到100中9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//求1-1/2+1/3-1/4+1/5....-1/100的和
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求十个整数中的最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int max = arr[0];
//	int i = 0;
//	for ( i = 0; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//乘法表
//int main()
//{
//	int i = 0;
//
//	for ( i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//逆向输出数组
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
// }


//各位相加
//int DigitSum(int n)
//{
//	if (n>9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num;
//	scanf_s("%d", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}


//n的k次方
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double num = Pow(n, k);
//	printf("%lf", num);
//	return 0;
//}