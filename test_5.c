#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//F5-��������
//F9-����/ȡ���ϵ�
//F10-�����
//F11-�����

//��n�Ľ׳˺�
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

//ģ��ʵ��strcpy
char* my_strcpy(char* dest, const char* src)
{
	//int len_dest = sizeof(dest) / sizeof(dest[0]);
	//int len_src = sizeof(src) / sizeof(src[0]);
	//int i = 0;
	//for ( i = 0; i <=len_dest; i++)
	//{
	//	dest[i] = src[i];
	//}
	assert(src != NULL);//����
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;//����Ŀ��ռ���ʼ��ַ
}

int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	printf("%s ", my_strcpy(arr1, arr2));//��ʽ����

	return 0;
}