#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}
void game()
{
	//printf("开始游戏\n");
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret=0;
	while(1)
	{
		PlayMove(board, ROW, COL);
		ret =IsWin(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢\n");
	if (ret == '#')
		printf("电脑赢\n");
	if (ret == 'q')
		printf("平局\n");
}
void menu()
{
	printf("**********************************\n");
	printf("********  1.play   0.exit  *******\n");
	printf("**********************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}