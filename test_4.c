#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//&与运算  --除了1&1为1，其余均为0
//|或运算  --除了0|0为0，其余均为1
//^异或运算--相同为0，相异为1

//int main()
//{
//	int a = 13;
//	int i = 0;
//	int count = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//void init(int arr[],int sz)
//{
//	int i = 0;
//	for ( i = 0; i <= sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(arr,sz);
//	reverse(arr,sz);
//	print(arr,sz);
//	init(arr ,sz);
//	print(arr,sz);
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}
//用指针打印数组内的元素
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p<=pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//用指针求字符串长度
//int my_strlen(char* str)
//{
//	char* p = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - p;
//}
//int main()
//{
//	char arr[] = "asdfafad";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//一级指针
//	int** ppa = &pa;//二级指针
//	int*** pppa = &ppa;//三级指针
//	printf("%d %d %d %d\n", a, *pa, **ppa, ***pppa);
//
//}

//指针数组
//int main()
//{
//	int arr[7];//整型数组
//	char ch[2];//字符数组
//	int* parr[1];//指针数组
//	return 0;
//}

//struct S
//{
//	char c;
//	int i;
//};
//
//struct Stu
//{
//	struct S Ss;
//	char name[20];
//	int age;
//	char id[20];
//}S1;//全局结构体变量
//
//int main()
//{
//	//局部结构体成员变量
//	struct Stu S = { {'R',6},"李田所",24,"1145141919810" };
//	//printf("%s",S.id );
//	struct Stu* ps = &S;
//	printf("%c\n", (*ps).Ss.c);//指针访问结构体成员
//	printf("%c\n", ps->Ss.c);
//	
//	return 0;
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* pt)
//{
//	printf("%c %d %lf %s %d %s\n", pt->sb.c, pt->sb.s, pt->sb.d, pt->name, pt->age, pt->id);
//}
//
//int main()
//{
//	struct Stu s = { {'r',77,1.14},"李田所",24,"1145141919810"};
//	//打印s内容的函数
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return  0;
//}

