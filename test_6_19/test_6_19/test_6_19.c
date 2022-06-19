#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//字符串旋转——暴力求解法
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


//字符串旋转——三步求解法
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

//写一个函数，判断一个字符串是否是另外一个字符串旋转之后的字符串

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

//另一种判断是否是循环的之中方法；
//在"abcdef"之后，在追加"abcdef"，得到
//“abcdefabcdef”

//int is_left_move(char* s1, char* s2)
//{
//	int len1=strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	//两种追加函数——在字符串
//	// str1之后追加str2
//	//strcat
//	//strncat
//	// 
//	//strcat(s1, s2);
//	//strcat函数不能自己追加自己，因为这个函数是到\0停止的
//	//在追加自己时，会更改原字符串的\0的位置。从而使该函数无法停止。
//	strncat(s1, s2,6);
//	//判断str2指向的字符串是否是str1指向的字符串的字串
//	char* ret = strstr(s1, s2);
//	//strstr是找字串的，找到了，返回找到函数（s2）的头元素指针.没找到，返回空指针
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

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右都是递增的，矩阵的从上到下也是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求时间复杂度小于O(n)


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
//		printf("找到了\n");
//	}
//	else
//		printf("没找到\n");
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
	int ret = FindNum(arr, k, &x, &y);//返回型参数的设计
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是：%d,%d\n", x, y);
	}
	else
		printf("没找到\n");
	return 0;
}