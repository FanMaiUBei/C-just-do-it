#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = (char*)p1;
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;
//	if (!*p2)
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && (*s1 == *s2) && *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return cur;
//		}
//		if (!*s1)
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;;
//}
//int main()
//{
//	char* p1 = "abbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("NO\n");
//	}
//	else
//		printf("YES\n");
//	return 0;
//}



//结构体内存对齐。
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}


//#pragma pack(4)//设置默认对齐数为4
//struct S
//{
//	char c;
//	double b;
//};
//
//#pragma pack()//取消设置的默认对齐数
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

#include<stddef.h>
struct S1
{
	char c;
	int a;
	double b;
};

#pragma pack()//取消设置的默认对齐数
int main()
{
	struct S1 s;
	printf("%d\n", sizeof(s));
	printf("%d\n", offsetof(struct S1,c));
	printf("%d\n", offsetof(struct S1, a));
	printf("%d\n", offsetof(struct S1, b));

	return 0;
}