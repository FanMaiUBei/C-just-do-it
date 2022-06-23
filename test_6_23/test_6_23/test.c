#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//位段——二进制位
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 32;//位段大小不能超于数据类型的大小
//	//例：int类型的数据，他的位段的应<=32
//};
//int main()
//{
//	struct S s={0};
//	s.a = 10;
//	//1010-原码
//	//10-存到位
//	//111111111111111111111111111111110整形提升-补
//	//111111111111111111111111111111101-反
//	//100000000000000000000000000000010-原码
//	//-2
//	s.b = 20;
//	//111111111111111111111111111110100-整形提升-补
//	//111111111111111111111111111110011-反
//	//100000000000000000000000000001100-原
//	//-12
//	s.c = 3;
//	s.d = 4;
//	//printf("%d\n", sizeof(s));
//	printf("%d %d %d %d\n", s.a, s.b, s.c, s.d);
//	return 0;
//}

//枚举类型
//枚举的可能取值——都是常量（枚举常量）
//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum sex
//{
//	MALE=1,//此处不是更改常量的值，是为常量初始化。
//	FEMALE=9,
//	SECRET
//};
//int main()
//{
//	enum sex s = MALE;
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}


//联合——联合体——共用体
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
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}


//利用联合体判断大小端存储
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
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}