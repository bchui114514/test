#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{	//��ӡ��ά����
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
//	//��������
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		int flag = 1;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				//����
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
//	int	sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
//
//	bubble_sort(arr,sz);
//
//	return 0;
//}

//��������������Ԫ�صĵ�ַ
//����������
//1.sizeof(��������-��ʾ�������飬������������Ĵ�С��λ���ֽ�
//2.&(������)-��ʾ�������飬ȡ����������ĵ�ַ

