#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//λ�Ρ���������λ
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 32;//λ�δ�С���ܳ����������͵Ĵ�С
//	//����int���͵����ݣ�����λ�ε�Ӧ<=32
//};
//int main()
//{
//	struct S s={0};
//	s.a = 10;
//	//1010-ԭ��
//	//10-�浽λ
//	//111111111111111111111111111111110��������-��
//	//111111111111111111111111111111101-��
//	//100000000000000000000000000000010-ԭ��
//	//-2
//	s.b = 20;
//	//111111111111111111111111111110100-��������-��
//	//111111111111111111111111111110011-��
//	//100000000000000000000000000001100-ԭ
//	//-12
//	s.c = 3;
//	s.d = 4;
//	//printf("%d\n", sizeof(s));
//	printf("%d %d %d %d\n", s.a, s.b, s.c, s.d);
//	return 0;
//}

//ö������
//ö�ٵĿ���ȡֵ�������ǳ�����ö�ٳ�����
//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum sex
//{
//	MALE=1,//�˴����Ǹ��ĳ�����ֵ����Ϊ������ʼ����
//	FEMALE=9,
//	SECRET
//};
//int main()
//{
//	enum sex s = MALE;
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}


//���ϡ��������塪��������
//union un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}


//�����������жϴ�С�˴洢
//int check_sys()
//{
//	union un
//		{
//			char c;
//			int i;
//		}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}