#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//打印菜单
		printf("请输入选项：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("已退出游戏\n");
			break;
		default:
			printf("输入有误，请重新输入!\n");
			break;
		}
	} while (input);

	return 0;
}