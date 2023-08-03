#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//菜单函数
void menu()
{
	printf("*****************************\n");
	printf("********1.开始扫雷***********\n");
	printf("********0.退出扫雷***********\n");
	printf("*****************************\n");
}

//游戏主函数
void game()
{
	char mine[ROWS][COLS];//存放布置雷信息
	char show[ROWS][COLS];//存放排查雷信息
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//雷坐标棋盘
	InitBoard(show, ROWS, COLS, '*');//展示棋盘

	//打印棋盘
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine, show, ROW, COL);
}

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for ( i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for ( i = 1; i <= row; i++)
	{
		//打印行号
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//雷的个数
	while (count)
	{
		//产生随机坐标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row*col - EASY_COUNT)
	{	
		printf("请输入要排查的坐标：");
		scanf_s("%d %d", &x, &y);
		//判断输入坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，踩到地雷，游戏结束！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//没踩到雷，计算改坐标周围雷的个数
				int count = GetMine(mine, x, y);
				show[x][y] = count+'0';
				//显示排查后的棋盘
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入的坐标有误，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你！游戏胜利！\n");
		DisplayBoard(mine, row, col);
	}
}

//统计输入坐标周围雷个数
int GetMine(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for ( i = x-1; i <= x+1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1' && mine[i][j] != mine[x][y])
			{
				count++;
			}
		}
	}
	return count;
	//return mine[x - 1][y - 1] +
	//	mine[x][y - 1] +
	//	mine[x + 1][y - 1] +
	//	mine[x + 1][y] +
	//	mine[x + 1][y + 1] +
	//	mine[x][y + 1] +
	//	mine[x - 1][y + 1] +
	//	mine[x - 1][y] - 8 * '0';
}