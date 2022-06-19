#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//�ַ�����ת����������ⷨ
//void left_move(char* arr, int k)
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr) ;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}


//�ַ�����ת����������ⷨ
//void reverse(char* left, char* right)
//{
//	assert(left  != NULL);
//	assert(right != NULL);
//	int i = 0;
//	int j = 0;
//	while (right > left)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);
//	reverse(arr + k,arr+len-1);
//	reverse(arr,arr+len-1);
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 4);
//	printf("%s\n", arr);
//	return 0;
//}

//дһ���������ж�һ���ַ����Ƿ�������һ���ַ�����ת֮����ַ���

//void left_move(char* arr, int k)
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr) ;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//��һ���ж��Ƿ���ѭ����֮�з�����
//��"abcdef"֮����׷��"abcdef"���õ�
//��abcdefabcdef��

//int is_left_move(char* s1, char* s2)
//{
//	int len1=strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	//����׷�Ӻ����������ַ���
//	// str1֮��׷��str2
//	//strcat
//	//strncat
//	// 
//	//strcat(s1, s2);
//	//strcat���������Լ�׷���Լ�����Ϊ��������ǵ�\0ֹͣ��
//	//��׷���Լ�ʱ�������ԭ�ַ�����\0��λ�á��Ӷ�ʹ�ú����޷�ֹͣ��
//	strncat(s1, s2,6);
//	//�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������ִ�
//	char* ret = strstr(s1, s2);
//	//strstr�����ִ��ģ��ҵ��ˣ������ҵ�������s2����ͷԪ��ָ��.û�ҵ������ؿ�ָ��
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//		return 1;
//
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//���Ͼ���
//��һ�����־��󣬾����ÿ�д����Ҷ��ǵ����ģ�����Ĵ��ϵ���Ҳ�ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(n)


//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col-1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			printf("%d,%d\n", x, y);
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//		printf("û�ҵ�\n");
//	return 0;
//}


int FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px- 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr, k, &x, &y);//�����Ͳ��������
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±��ǣ�%d,%d\n", x, y);
	}
	else
		printf("û�ҵ�\n");
	return 0;
}