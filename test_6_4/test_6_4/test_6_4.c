#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void game()
{
	printf("游戏开始\n");
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);
	//printf("\n");
	//DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	printf("\n");
	DisplayBoard(show, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
void menu()
{
	printf("******************************\n");
	printf("******  1.play   0.exit  *****\n");
	printf("******************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷\n");
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