#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void game()
{
	printf("��Ϸ��ʼ\n");
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
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}