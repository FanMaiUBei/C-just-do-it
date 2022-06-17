#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<stdlib.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//
//	unsigned long arr[] = { 6,7,8,9,10 };
//	unsigned long* ptr;
//	ptr = arr;
//	*(ptr + 3) += 3;
//	printf("%d,%d\n", *ptr, *(ptr + 3));
//	return 0;
//}

//逆序函数
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (right > left)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
// }
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);
//	//gets()读取一行，放到（）中去；
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}


//求和sum=a+aa+aaa+aaaa之和
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//打印0~10000的水仙花数

//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		int n = 1;
//		int j = i;
//		while (i>=pow(10,n))//求出位数
//		{
//			n++;
//		}
//		do
//		{
//			sum +=pow(j%10,n);//pow求一个数的n次方。
//			j = j / 10;
//		} while (j);
//		if (i == sum)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}



//打印菱形

//int main()
//{
//	int a = 0;
//	printf("请输入打印的行数->");
//	scanf("%d", &a);
//	int i = 0;
//	int j=0;
//		for (i = 0; i < a; i++)
//		{
//			for (j = 0; j < a - i-1; j++)
//			{
//			printf(" ");
//			}
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < a - 1; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < 2*(a-1-i)-1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	return 0;
//}

//喝汽水，一共20块钱，一块钱一瓶，2个空瓶换一瓶汽水，最多喝几瓶
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	empty = money;
//	total = empty;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty % 2 + empty / 2;
//	}
//	printf("total = %d\n", total);
//	return 0;
// }

 
