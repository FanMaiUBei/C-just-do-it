#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = Mine_Count;
	while (count)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int Arround_Mine_Count(char mine[ROWS][COLS],int x,int y)
{
	return 
		  mine[x - 1][y - 1] 
		+ mine[x - 1][y ]
		+ mine[x - 1][y + 1]
		+ mine[x ][y - 1]
		+ mine[x ][y + 1]
		+ mine[x +1][y - 1]
		+ mine[x+1][y ]
		+ mine[x +1][y +1]-8*'0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	int ret = 0;
	while (count<row*col-Mine_Count)
	{
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (1 <= x && x <= row && 1 <= y && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很抱歉，您被炸死了；\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				ret = Arround_Mine_Count(mine,x,y);
				show[x][y] = '0'+ret;
				DisplayBoard(show, ROW, COL);
				count++;
			}
		}
		else
			{
				printf("坐标非法，请重新输入\n");
			}
	}
	if (count == row * col - Mine_Count)
	{
		printf("恭喜您，排雷成功\n");
	}
}