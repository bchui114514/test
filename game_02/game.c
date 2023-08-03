#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//�˵�����
void menu()
{
	printf("*****************************\n");
	printf("********1.��ʼɨ��***********\n");
	printf("********0.�˳�ɨ��***********\n");
	printf("*****************************\n");
}

//��Ϸ������
void game()
{
	char mine[ROWS][COLS];//��Ų�������Ϣ
	char show[ROWS][COLS];//����Ų�����Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');//����������
	InitBoard(show, ROWS, COLS, '*');//չʾ����

	//��ӡ����
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//�Ų���
	FindMine(mine, show, ROW, COL);
}

//��ʼ������
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

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for ( i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for ( i = 1; i <= row; i++)
	{
		//��ӡ�к�
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//������
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//�׵ĸ���
	while (count)
	{
		//�����������
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row*col - EASY_COUNT)
	{	
		printf("������Ҫ�Ų�����꣺");
		scanf_s("%d %d", &x, &y);
		//�ж���������Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����ȵ����ף���Ϸ������\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//û�ȵ��ף������������Χ�׵ĸ���
				int count = GetMine(mine, x, y);
				show[x][y] = count+'0';
				//��ʾ�Ų�������
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����������������������룡\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣡��Ϸʤ����\n");
		DisplayBoard(mine, row, col);
	}
}

//ͳ������������Χ�׸���
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