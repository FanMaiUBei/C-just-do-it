#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = &arr;
//	printf("%s\n", arr);//arr�ַ������ƾ�����Ԫ�ص�ַ����˴�ӡarr���ӡpcһ������ΪpcҲ����Ԫ�ص�ַ��
//	printf("%s\n", pc);//printf����������\0����ֹͣ��ӡ��
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//�˴����ɽ��ַ���"abcdef"����Ԫ�ص�ַ������ָ�����p�У���˴�ӡpʱ�����ӡ���ַ�����
//	printf("%s\n", p);
//	return 0;
//}

//��������Ϊ�ַ����Ĳ�ͬд����
//int main()
//{
//	const char* p = "abcdef";
//	//*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}
//www.stackoverflow.com
//Segmentation fault--�δ���
//segmentFault.com

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//������ͬ���ַ���arrr1��arr2
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
//	char* p1 = "abcdef";//�����ַ�����ֻ��һ��
//	char* p2 = "abcdef";
//	if (p1 == p2)//�����ַ������ɱ��޸ģ�ֻ��һ�ݡ�//������ͬ��ָ��ָ��ͬһ���ַ�����
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
//	int* arr[4] = { &a,&b,&c,&d };//����ָ�����飬������ε�ַ��
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

//����ָ�롪��ָ��

//int main()
//{
//	int* p = NULL;//p������ָ��-ָ�����ε�ָ�룬���Դ�����εĵ�ַ��
//	char* pc = NULL;//pc���ַ�ָ��-ָ���ַ���ָ�룬���Դ���ַ��ĵ�ַ��
//	//����ָ��-ָ�������ָ��-�������ĵ�ַ
//	//int arr[10]={0};
//	//arr-��Ԫ�ص�ַ
//	//&arr[0]-��Ԫ�ص�ַ
//	//&arr-����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַ������
//	//�����p��������ָ�롣
//	return 0;
//}

//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*pa)[5] = &arr;
////char*��ʾ��ָ��ָ�������Ԫ��������char*
////(*pa),����*��ʾ�����Ǹ�ָ�룬pa�Ǹ�ָ������ơ�[5],��ʾָ������������Ԫ�ء�
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
			//���ַ�ʽ�Ľ����һ���ġ�
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