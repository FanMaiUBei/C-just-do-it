#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ",i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i=1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;//ret每次循环必须先赋值为1；要不ret的值会迭代。
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 15; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}此种方式将i放置在arr后边，当I限制在<=15时，程序会陷入死循环。
/*int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 15; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}*///此种方式将i放置在arr前边，则程序不会陷入死循环。但是会提示栈溢出。两种情况不同是因为数据在内存中储存位置的不同所致。



//写sttcpy函数
//void my_strcpy(char* dest, char* scr)
//{
//	do
//	{
//		*dest = *scr;
//		scr++;
//		dest++;
//		*dest = *scr;
//	} while (*scr != '\0');
//}//只能实现基础操作，但需要优化。——6分
//void my_strcpy(char* dest, char* scr)
//{
//	do
//	{
//		*dest++ = *scr++;//先使用，后++；
//	} while (*scr != '\0');
/*}*///给6.5分
//void my_strcpy(char* dest, char* scr)
//{
//	while (*dest++ = *scr++)//先使用，后++；并将是否为'\0'作为循环判断的条件（\0的ASC||为0；为假，循环结束）——7分；
//	{
//		;
//	}
//}
//void my_strcpy(char* dest, char* scr)
//{
//	if (dest != NULL && scr != NULL)
//	{
//		while (*dest++ = *scr++)//使用指针必须判断是否为空指针（野指针）。——7.5分（程序虽然运行，但是有问题，没进行复制）
//		{
//			;
//		}
//	}
//}
#include <assert.h>
//void my_strcpy(char* dest, char* scr)
//{
//	assert(dest != NULL);//断言，括号内如果为真，则什么也不会发生。如果为假，则报错；——8分
//	assert(scr != NULL);
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest,const char* scr)//const:——9分；
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	while (*dest++ = *scr++)//防止此处写成*scr++ = *dest++;加上const,使得源数据不能被修改。
//	{
//		;
//	}
//}
//char* my_strcpy(char* dest, const char* scr)//更改返回类型，——10分。
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(scr != NULL);
//	while (*dest++ = *scr++)//防止此处写成*scr++ = *dest++;加上const,使得源数据不能被修改。
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] ="###############";
//	char arr2[] = "bit" ;
//	my_strcpy(arr1,arr2);
//	printf("%s", arr1);
//	return 0;
//}

//写自己的求字符串长度的函数my_strlen.
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdefg";//{ "a,b,c,d,e,g" };
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}