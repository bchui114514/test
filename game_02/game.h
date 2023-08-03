#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define EASY_COUNT 10

#define ROWS ROW+2
#define COLS COL+2

//菜单函数
void menu();

//游戏主函数
void game();

//初始化棋盘函数
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘函数
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷函数
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷函数
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//统计输入坐标周围雷个数函数
int GetMine(char mine[ROWS][COLS], int x, int y);