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
//		ret = 1;//retÿ��ѭ�������ȸ�ֵΪ1��Ҫ��ret��ֵ�������
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
//}���ַ�ʽ��i������arr��ߣ���I������<=15ʱ�������������ѭ����
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
}*///���ַ�ʽ��i������arrǰ�ߣ�����򲻻�������ѭ�������ǻ���ʾջ��������������ͬ����Ϊ�������ڴ��д���λ�õĲ�ͬ���¡�



//дsttcpy����
//void my_strcpy(char* dest, char* scr)
//{
//	do
//	{
//		*dest = *scr;
//		scr++;
//		dest++;
//		*dest = *scr;
//	} while (*scr != '\0');
//}//ֻ��ʵ�ֻ�������������Ҫ�Ż�������6��
//void my_strcpy(char* dest, char* scr)
//{
//	do
//	{
//		*dest++ = *scr++;//��ʹ�ã���++��
//	} while (*scr != '\0');
/*}*///��6.5��
//void my_strcpy(char* dest, char* scr)
//{
//	while (*dest++ = *scr++)//��ʹ�ã���++�������Ƿ�Ϊ'\0'��Ϊѭ���жϵ�������\0��ASC||Ϊ0��Ϊ�٣�ѭ������������7�֣�
//	{
//		;
//	}
//}
//void my_strcpy(char* dest, char* scr)
//{
//	if (dest != NULL && scr != NULL)
//	{
//		while (*dest++ = *scr++)//ʹ��ָ������ж��Ƿ�Ϊ��ָ�루Ұָ�룩������7.5�֣�������Ȼ���У����������⣬û���и��ƣ�
//		{
//			;
//		}
//	}
//}
#include <assert.h>
//void my_strcpy(char* dest, char* scr)
//{
//	assert(dest != NULL);//���ԣ����������Ϊ�棬��ʲôҲ���ᷢ�������Ϊ�٣��򱨴�����8��
//	assert(scr != NULL);
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest,const char* scr)//const:����9�֣�
//{
//	assert(dest != NULL);
//	assert(scr != NULL);
//	while (*dest++ = *scr++)//��ֹ�˴�д��*scr++ = *dest++;����const,ʹ��Դ���ݲ��ܱ��޸ġ�
//	{
//		;
//	}
//}
//char* my_strcpy(char* dest, const char* scr)//���ķ������ͣ�����10�֡�
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(scr != NULL);
//	while (*dest++ = *scr++)//��ֹ�˴�д��*scr++ = *dest++;����const,ʹ��Դ���ݲ��ܱ��޸ġ�
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

//д�Լ������ַ������ȵĺ���my_strlen.
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