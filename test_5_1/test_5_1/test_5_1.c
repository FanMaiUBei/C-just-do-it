#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{

	int i = 0;
	int ret =1;
	int n = 0;
	printf("������Nֵ��\n");
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
	//printf("���������룺>");
	//scanf("%s", password);
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("��ȷ�ϣ�Y/N��>��");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//
	//}
	//else
	//{
	//printf("����ȷ��\n");
	//
	//}
	return 0;
}