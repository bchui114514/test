#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//���˵�
menu()
{
	printf("*********************************\n");
	printf("***********1.��ʼ��Ϸ************\n");
	printf("***********0.�˳���Ϸ************\n");
	printf("*********************************\n");
}

//��Ϸ������
void game()
{
	char board[ROW][COL];//����һ������
	char ret = 0;

	//��ʼ������
	InitBoard(board, ROW, COL);

	//��ӡ����
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//��ӡ������
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);
		//��ӡ������
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'X')
	{
		printf("���Ӯ�ˣ�\n");
	}
	else if (ret == 'O')
	{
		printf("����Ӯ�ˣ�\n");
	}
	else
	{
		printf("ƽ�֣�\n");
	}
}

//��ʼ������
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

//��ӡ����
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

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("���������:>");
		scanf("%d %d", &x, &y);
		//�ж���������Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж����������Ƿ�Ϊ��
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = 'X';
				break;
			}
			else
			{
				printf("�������������ӣ����������룡\n");
			}
		}
		else
		{
			printf("������������겻�Ϸ������������룡\n");
		}
	}
}

//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");

	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		//�ж������Ƿ�ռ��
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}
}

//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж���
	for ( i = 0; i < row ; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	//�ж���
	for ( i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж�ƽ��
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}

	//��Ϸ����
	return 'C';
}

//�ж������Ƿ�����
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