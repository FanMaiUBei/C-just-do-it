#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//求一个二进制数中存在几个1；
//int Count_Bit_One(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 ==1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}此种办法无法求取负数的二进制位的1的个数

//int Count_Bit_One(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}此种将a的转化为无符号数，则可求取负数的储存在计算机中二进制数（补码）中1的个数。
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = Count_Bit_One(a);
//	printf("%d", count);
//	return 0;
//}

//int Count_Bit_One(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}用逻辑与的方式去求解二进制位个数

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = Count_Bit_One(a);
//	printf("%d", count);
//	return 0;
//}

//int Count_Bit_One(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}//最优的解法，有几个1，就计算几次。，每执行一次n&(n-1)；会消掉一个1；
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = Count_Bit_One(a);
//	printf("%d", count);
//	return 0;
//}


//求两个二进制数有几位不相同
//int count_different(int a, int b)
//{
//	a = a ^ b;
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int count=count_different(a, b);
//	printf("%d", count);
//	return 0;
//}


//分别打印二进制数的奇数为和偶数位
//void print(int n)
//{
//	int i = 0;
//	printf("打印奇数位\n");//二进制位从右向左读取。
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("打印偶数位\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//交换两个数的值，不允许使用中间变量
//3 0011
//5 0101
//3^5 0110
//0011
//0101
//void change(int a, int b)
//{
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b = %d", a, b);
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	change(a, b);
//	return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//输入一个数，输出对应的乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	print_table(n);
//	return 0;
//}



//#include<string.h>
//编写函数reverse_string(char*string)(递归实现)，将参数字符串的字符反向排列，要求不能使用C语言库函数中的字符串操作函数。
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//	char tmp ;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}使用库函数的逆序方法
//int my_strlen(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void reverse_string(char arr[])//（char* arr)等同于char arr[].
//{
//	char tmp = arr[0];//将首元素放置在临时位置暂存。
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];//将最后以为元素放置在首元素位置。
//	arr[len - 1] = '\0';//将原来数组的最后以为放置一个\0,组成新的数组。
//	if (my_strlen(arr + 1) >= 2)//因为已完成第一位元素的逆序，则新生成的数组为arr+1,该数组首元素地址为arr+1。
//	{
//		reverse_string(arr + 1);//对新数组使用递归。
//	}
//	arr[len - 1] = tmp;//将首元素从临时位置取出，放置与最后一位位置上，完成逆序。
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//写一个递归函数DigitSum（n);输入一个非负整数，返回组成他的字数之和。
//int DigitSum(unsigned int n)
//{
//	if (n > 9)//保证该数字是两位数
//	{
//		return DigitSum(n / 10) + (n % 10);
//	}
//	else
//		return n;
//}
//int main()
//{
//	unsigned int n = 0;//定义一个非负整数
//	scanf("%d", &n);
//	int ret =DigitSum(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//用递归求解N的K次方。
double Pow(int n, int k)
{
	if (k < 0)
	{
		return (1.0 / (Pow(n, -k)));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return  n*Pow(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d",&n,&k);
	double ret = Pow(n,k);
	printf("ret = %lf", ret);
	return 0;
}
