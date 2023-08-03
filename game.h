#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//���Ŷ���,���̴�С
#define ROW 3//��
#define COL 3//��

//��ӡ���˵�
menu();

//��Ϸ������
void game();

//��ʼ�����̺���
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̺���
void DisplayBoard(char board[ROW][COL], int row, int col);

//������庯��
void PlayerMove(char board[ROW][COL], int row, int col);

//�������庯��
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ����
//���Ӯ�˷��� 'X'
//����Ӯ�˷��� 'O'
//ƽ�ַ���'Q'
//��Ϸ��������'C'
char IsWin(char board[ROW][COL], int row, int col);

//�ж������Ƿ�����
int IsFull(char board[ROW][COL], int row, int col);
