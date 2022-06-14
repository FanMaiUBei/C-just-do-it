#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int main()
//{
//	//指针数组
//	int* p[10];
//	//数组指针
//	int(*c)[10];
//	//函数指针
//	int (*pAdd)(int, int);
//	//指向函数指针的数组
//	int(*ppAdd[5])(int, int);
//	return 0;
//}


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for(j=0;j<sz-1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	/*if ((*(float*)e1 - *(float*)e2) == 0)
//	{
//		return 0;
//	}
//	else if ((*(float*)e1 - *(float*)e2) > 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}*/
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test2()
//{
//	float f[] = {9.0,8.0 ,7.0,6.0,5.0,4.0};
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//	printf("\n");
//}
//int cmp_struct_Stu(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct_Stu);
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	//bubble_sort(arr, sz);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &a;
//	char ch = 'w';
//	void* p = &a;
//	p = &ch;
//	//void*类型的指针，可以接受任意类型的地址。
//	//void*类型的指针，不能进行解引用操作。
//	//void* 类型的指针，不能进行加减整数的操作。
//	return 0;
//}


void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//理解此处比较函数的传参意义。
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
}
void test4()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]),cmp_stu_by_age);
}
int main()
{
	test4();
	return 0;
}