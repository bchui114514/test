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
//	printf("n的阶乘等于%d\n", ret);
//	return 0;
//}

//n!的和
//int main()
//{
//	int i = 0, j = 1, n = 0, sum = 0;
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		j *= i;
//		sum += j;
//	}
//	printf("%d阶乘的和为%d", n, sum);
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
//		Sleep(1000);//睡眠1s
//		system("cls");//清空屏幕
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
//		printf("请输入密码：");
//		scanf_s("%d", &pw);
//		if (password == pw)//字符串比较，用strcmp函数strcmp(password,"123456") == 0
//		{
//			printf("登陆成功！");
//			break;
//		}
//		else
//			printf("登录失败！剩余%d次机会",i);
//	}
//
//	return 0;
//}


//猜数游戏
#include<stdlib.h>
#include<time.h>
//
//void menu()
//{
//	printf("**************************\n");
//	printf("*********1.开始***********\n");
//	printf("*********2.退出***********\n");
//	printf("**************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入您猜的数字：");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了，请继续猜");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了，请继续猜");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
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
//		menu();//打开菜单
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入有误，重新输入\n");
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
//	printf("注意！您的电脑将在60秒后关机！，请输入我是啥b以取消关机！\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是啥b") == 0)
//	{
//		system("shutdown -a");
//	}
//	else 
//	{
//		goto again;
//	}
//	return 0;
//}

