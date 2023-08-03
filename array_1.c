#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{	//打印二维数组
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	//计算趟数
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		int flag = 1;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int	sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//
//	bubble_sort(arr,sz);
//
//	return 0;
//}

//数组名是数组首元素的地址
//有两个特例
//1.sizeof(数组名）-表示整个数组，计算整个数组的大小单位是字节
//2.&(数组名)-表示整个数组，取出整个数组的地址

