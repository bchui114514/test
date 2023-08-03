#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//符号定义,棋盘大小
#define ROW 3//行
#define COL 3//列

//打印主菜单
menu();

//游戏主函数
void game();

//初始化棋盘函数
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋函数
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋函数
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢函数
//玩家赢了返回 'X'
//电脑赢了返回 'O'
//平局返回'Q'
//游戏继续返回'C'
char IsWin(char board[ROW][COL], int row, int col);

//判断棋盘是否满了
int IsFull(char board[ROW][COL], int row, int col);
