#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>


//my_strstr�����ַ���
//KMP�㷨
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = (char*)p1;
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;//���м��ַ�����룬�Ǳ�֤���� ƥ������У�ƥ��ʧ�ܺ󣬿��Դ���һ����ַ������ƥ��
//	if (!*p2)//(*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && (*s1 == *s2) && *s2 )// ((*s1 != '\0') && (*s1 == *s2) && (*s2 != '\0'))
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)//(*s2 == '\0')
//		{
//			return cur;
//		}
//		if (!*s1)//(*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;//�ҵ��ַ���
//	}
//	return NULL;//�Ҳ����ַ���
//}
//int main()
//{
//	char* p1 = "abbbcdef";
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



//strtok()������ʹ��
//int main()
//{
//	char arr[] = "liu.xin.43@qq.com";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//strerror(errno)�����ļ�ʹ�á�
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//}


//C���Ա�׼�涨
// memcpyֻҪ�����ص����ڴ濽���Ϳ���
// memmove�����ص��ڴ�Ŀ���
// memcpy����������ʹ��
struct s
{
	char name[20];
	int age;
};
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5]={ 0 };
//	struct s arr3[] = { {"����",20},{"����",30} };
//	struct s arr4[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[5] = { 0 };
	struct s arr3[] = { {"����",20},{"����",30} };
	struct s arr4[3] = { 0 };
	memcpy(arr1+2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	//memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct s arr3[] = { {"����",20},{"����",30} };
//	struct s arr4[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}