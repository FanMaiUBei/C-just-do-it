#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//����д���Ǵ����
//strlen()�����Ĵ����ַ��������Ǿ���'\0'��
//�����ص���'\0'����ǰ�ַ��ĸ���
//char arr[] = { 'a','b','c','d','e','f' };���ַ��������ֻ��6���ַ���û��'\0';
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	int ret = strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//�Լ�дһ��strlen()��������my_strlen().

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


//��ʾstrlen����ֵ��һ���޷�����
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		//strlen�����޷�����
//		//3-6=-3
//		//��-3���޷�����ʱ����ʵ��ֵԶ����0��
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//�Լ�дһ��������ģ��ʵ��strcpy()������
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 != '\0');
//	assert(str2 != '\0');
//	char* ret = str1;
//	//����str2ָ����ַ�����str1ָ���Ŀռ䣬���а���'\0'
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//	//����Ŀ�Ŀռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//�Լ�дһ��������ģ��ʵ��strcat()������
//int main()
//{
//	char arr1[30] = { "hello " };
//	//Ŀ��ռ�����㹻��������Դ�ַ���������
//	//Ŀ��ռ�����ܹ����޸�
//	//Ŀ���ַ��������'\0'
//	char arr2[] = { "world" };
//	//Դ�ַ���������'\0'����
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
//	//�ҵ�Ŀ�ĵص�'\0'
//	while (*str1 != '\0')
//	//while (*str1)	���ַ�ʽдѭ��Ҳ����
//	{
//		str1++;
//	}
//	//׷���ַ���
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = { "hello " };//Ŀ���ַ��������'\0'
//	char arr2[] = { "world" };	//Դ�ַ���������'\0'����
//	my_strcat(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}


//�Լ�дһ��������ģ��ʵ��strcmp()������
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

//strncat���������
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2,3);
	printf("%s\n", arr1);
 }