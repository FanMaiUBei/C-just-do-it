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
	//printf("��ʼ��Ϸ\n");
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
		printf("���Ӯ\n");
	if (ret == '#')
		printf("����Ӯ\n");
	if (ret == 'q')
		printf("ƽ��\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
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