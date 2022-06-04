#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{

	int i = 0;
	int ret =1;
	int n = 0;
	printf("请输入N值：\n");
	scanf("%d",&n);
	for (i=1;i<= n;i++)
	{
		ret = ret * i;
	}
	printf("n! =%d\n ",ret);
	////int ch = 0;
	////while (ch = getchar() != EOF)
	////{
	////	putchar(ch);
	////}
	////return 0;
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0};
	//printf("请输入密码：>");
	//scanf("%s", password);
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("请确认（Y/N：>）");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");
	//
	//}
	//else
	//{
	//printf("放弃确认\n");
	//
	//}
	return 0;
}