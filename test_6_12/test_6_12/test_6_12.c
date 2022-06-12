#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = &arr;
//	printf("%s\n", arr);//arr字符串名称就是首元素地址。因此打印arr与打印pc一样，因为pc也是首元素地址。
//	printf("%s\n", pc);//printf函数，遇到\0，才停止打印。
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//此处理解成将字符串"abcdef"的首元素地址放置在指针变量p中，因此打印p时，会打印该字符串。
//	printf("%s\n", p);
//	return 0;
//}

//以上两种为字符串的不同写法。
//int main()
//{
//	const char* p = "abcdef";
//	//*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}
//www.stackoverflow.com
//Segmentation fault--段错误；
//segmentFault.com

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//两个不同的字符串arrr1与arr2
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//常量字符串，只存一份
//	char* p2 = "abcdef";
//	if (p1 == p2)//常量字符串不可被修改，只存一份。//两个不同的指针指向同一个字符串。
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };//整形指针数组，存放整形地址。
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针——指针

//int main()
//{
//	int* p = NULL;//p是整形指针-指向整形的指针，可以存放整形的地址。
//	char* pc = NULL;//pc是字符指针-指向字符的指针，可以存放字符的地址。
//	//数组指针-指向数组的指针-存放数组的地址
//	//int arr[10]={0};
//	//arr-首元素地址
//	//&arr[0]-首元素地址
//	//&arr-数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址存起来
//	//上面的p就是数组指针。
//	return 0;
//}

//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*pa)[5] = &arr;
////char*表示该指针指向的数组元素类型是char*
////(*pa),其中*表示，这是个指针，pa是该指针的名称。[5],表示指向的数组有五个元素。
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);//*pa=arr
//	}
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0; 
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i))+j);
			printf("%d ", *(p[i] + j));
			printf("%d ", p[i][j]);
			//此种方式的结果是一样的。
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print1(arr, 3, 5);
	print2(*arr, 3, 5);
	return 0;
}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = &arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//		printf("%d ", *(arr + i));
//		printf("%d ", *p+i);
//		printf("%d ", p[i]);//arr[i]==*(arr+i)==*(p+i)==p[i
//		printf("\n");
//	}
//	return 0;
//}