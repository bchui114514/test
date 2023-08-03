#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//主菜单
menu()
{
	printf("*********************************\n");
	printf("***********1.开始游戏************\n");
	printf("***********0.退出游戏************\n");
	printf("*********************************\n");
}

//游戏主函数
void game()
{
	char board[ROW][COL];//定义一个棋盘
	char ret = 0;

	//初始化棋盘
	InitBoard(board, ROW, COL);

	//打印棋盘
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		//打印新棋盘
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);
		//打印新棋盘
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'X')
	{
		printf("玩家赢了！\n");
	}
	else if (ret == 'O')
	{
		printf("电脑赢了！\n");
	}
	else
	{
		printf("平局！\n");
	}
}

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		int j = 0;
		for ( j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i<row-1)
		{
			int k = 0;
			for ( k = 0; k < col; k++)
			{
				printf("---");
				if (k<col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("请玩家下子:>");
		scanf("%d %d", &x, &y);
		//判断棋子坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断棋子坐标是否为空
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = 'X';
				break;
			}
			else
			{
				printf("该坐标已有棋子，请重新输入！\n");
			}
		}
		else
		{
			printf("输入的棋子坐标不合法，请重新输入！\n");
		}
	}
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下子\n");

	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		//判断坐标是否占用
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}
}

//判断输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断行
	for ( i = 0; i < row ; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	//判断列
	for ( i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}

	//游戏继续
	return 'C';
}

//判断棋盘是否满了
int IsFull(char board[ROW][COL], int row, int col)
{
	int	i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}