#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROW][COL], int  row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j <COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int  row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW;i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c ",board[i][j]);
			if (j <COL - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void PlayMove(char board[ROW][COL], int  row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走，请输入坐标：");
		scanf("%d%d", &x,&y);
		if (1 <= x && x <= ROW && 1 <= y && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("该坐标已被占用，请重新输入\n");
		}
		else
			printf("坐标违法，请重新输入\n");
	}
}
void ComputerMove(char board[ROW][COL], int  row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int IsFull(char board[ROW][COL], int  row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int  row, int col)
{
	int i = 0;
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i]&& board[0][i]!=' ')
			return board[0][i];
	}
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2]&& board[i][0] != ' ')
			return board[i][0];
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2]&& board[0][0] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1]&& board[0][2] == board[2][0]&& board[0][2] != ' ')
		return board[1][1];
	if (IsFull(board, ROW, COL))
	{
		return 'q';
	}
	return 'c';
}



