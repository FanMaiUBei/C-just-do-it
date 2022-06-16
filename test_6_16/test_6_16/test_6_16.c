#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1]==ptr1+-1))==*(ptr1-1)	
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	//数组里内容是逗号表达式。
//	//数组里初始化的内容是：1、3、5、0、0、0；
//	int* p;
//	p = a[0];
//	//a[0]是1的地址。
//	//p[0],就是1的地址，所以打印的是1。
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];//p的地址是a的地址，是a[0][0]的地址
//	//p[4]指的是，p[]数组占四个元素，
//	//p[4]就是a[0][0]跳过16个元素后的地址
//	//p[4][2]就是a[0][0]跳过16个元素后再加2的地址
//	p = a;//int(*)[4]-----int(*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	// &p[4][2] - &a[4][2]的值是a[3][3]-a[4][2]的值，是-4.
//	//但是%p打印-4，直接打印-4的补码（元素存储存补码），然后转换成16进制打印，为0xFF FF FF FC;(32位)
//	//%d打印-4，则直接打印-4；
//	return 0;
//}

//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&a + 1);//&a取出整个数组的地址，
//	int* ptr2 = (int*)(*(a + 1));//a+1==a[0]+1==a[1];
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	return 0;
//}
  

//int main()
//{
//	char* a[] = { "work","at","alibaba" };//a是指针数组
//	char** pa = a;//char* 一个字节。 int*4个字节。
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}



int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	//注意cpp没有初始化，程序运行之后，cpp叠加。
	printf("%s\n", **++cpp);//point
	printf("%s\n", *--*++cpp+3);//cpp先++，得到cp[2]==c[1],c[1]在减减，得到c[0]
	//c[0]再加三得到ENTER中E(R)的地址，打印；ER
	printf("%s\n", *cpp[-2]+3);//st
	printf("%s\n", cpp[-1][-1]+1);//ew
	//cpp[-1][-1]==*((*cpp-1)-1),
	//cpp-1=cpp[1];*[cpp-1]=[c2]
	//c[2]-1==c[1],*c[1]==NEW;*c[1]==EW;

	return 0;
}

