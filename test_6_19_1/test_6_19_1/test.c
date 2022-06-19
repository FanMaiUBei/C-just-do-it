#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//此种写法是错误的
//strlen()函数的传入字符串必须是具有'\0'，
//他返回的是'\0'符号前字符的个数
//char arr[] = { 'a','b','c','d','e','f' };此种方法定义的只有6个字符，没有'\0';
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	int ret = strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//自己写一个strlen()函数——my_strlen().

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//演示strlen返回值是一个无符号数
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		//strlen返回无符号数
//		//3-6=-3
//		//当-3是无符号数时，其实际值远大于0；
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//自己写一个函数，模拟实现strcpy()函数。
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 != '\0');
//	assert(str2 != '\0');
//	char* ret = str1;
//	//拷贝str2指向的字符串到str1指定的空间，其中包含'\0'
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//	//返回目的空间的起始地址
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//自己写一个函数，模拟实现strcat()函数。
//int main()
//{
//	char arr1[30] = { "hello " };
//	//目标空间必须足够大，能容纳源字符串的内容
//	//目标空间必须能够被修改
//	//目标字符串徐包含'\0'
//	char arr2[] = { "world" };
//	//源字符串必须以'\0'结束
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//my_strcat
//char* my_strcat(char* str1,const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2); 
//	char* ret = str1;
//	//找到目的地的'\0'
//	while (*str1 != '\0')
//	//while (*str1)	此种方式写循环也可以
//	{
//		str1++;
//	}
//	//追加字符串
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = { "hello " };//目标字符串徐包含'\0'
//	char arr2[] = { "world" };	//源字符串必须以'\0'结束
//	my_strcat(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}


//自己写一个函数，模拟实现strcmp()函数。
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//
//}
//int main()
//{
//	char* p1 = "abcdef";
//	//char* p1 = "ab";
//	//char* p2 = "abqwe";
//	char* p2 = "abc";
//
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//strncat函数的理解
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2,3);
	printf("%s\n", arr1);
 }