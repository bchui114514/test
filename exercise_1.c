#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
//n!
//int main()
//{	
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("n�Ľ׳˵���%d\n", ret);
//	return 0;
//}

//n!�ĺ�
//int main()
//{
//	int i = 0, j = 1, n = 0, sum = 0;
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		j *= i;
//		sum += j;
//	}
//	printf("%d�׳˵ĺ�Ϊ%d", n, sum);
//	return 0;
//}

//int main()
//{
//
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��1s
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//
//int main()
//{
//	int password = 123456;
//	int pw;
//	int i;
//
//	for ( i = 2; i >= 0; i--)
//	{
//		printf("���������룺");
//		scanf_s("%d", &pw);
//		if (password == pw)//�ַ����Ƚϣ���strcmp����strcmp(password,"123456") == 0
//		{
//			printf("��½�ɹ���");
//			break;
//		}
//		else
//			printf("��¼ʧ�ܣ�ʣ��%d�λ���",i);
//	}
//
//	return 0;
//}


//������Ϸ
#include<stdlib.h>
#include<time.h>
//
//void menu()
//{
//	printf("**************************\n");
//	printf("*********1.��ʼ***********\n");
//	printf("*********2.�˳�***********\n");
//	printf("**************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("���������µ����֣�");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С�ˣ��������");
//		}
//		else if (guess > ret)
//		{
//			printf("�´��ˣ��������");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//	
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();//�򿪲˵�
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������������\n");
//			break;
//		}
//
//	} while (1);
//
//	return 0;
//}


//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("ע�⣡���ĵ��Խ���60���ػ���������������ɶb��ȡ���ػ���\n");
//	scanf("%s", input);
//	if (strcmp(input, "����ɶb") == 0)
//	{
//		system("shutdown -a");
//	}
//	else 
//	{
//		goto again;
//	}
//	return 0;
//}

