#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	//һά����
//	//����һ����������⣬���е�������������Ԫ�ص�ַ
//	//1.sizeof(������)-��������ʾ��������
//	//2.&������-��������ʾ��������
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//a��ʾ�������飬
//	printf("%d\n", sizeof(a+0));//�˴�a��ʾ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a));//*a��ʾ��Ԫ��
//	printf("%d\n", sizeof(a+1));//a��ʾ��Ԫ�ص�ַ��a+1��ʾ�ڶ���Ԫ�ص�ַ
//	printf("%d\n", sizeof(a[1]));//�ڶ���Ԫ��
//	printf("%d\n", sizeof(&a));//&aȡ����������ĵ�ַ������ĵ�ַ���ǵ�ַ��4/8�ֽ�
//	printf("%d\n", sizeof(*&a));//����Ĵ�С��&a����ĵ�ַ��*(&a)����ľ��������Ĵ�С
//	printf("%d\n", sizeof(&a+1));//&a+1����һ����ַ������&a,��&a+1����һ��a����Ĵ�С
//	printf("%d\n", sizeof(&a[0]));//��һ��Ԫ�ص�ַ��a[0]�ĵ�ַ
//	printf("%d\n", sizeof(&a[0]+1));//��һ��Ԫ�ص�ַ��a[1]�ĵ�ַ
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//������������Ĵ�С:6
//	printf("%d\n", sizeof(arr+0));//������Ԫ�ص�ַ��:4/8
//	printf("%d\n", sizeof(*arr));//arr����Ԫ�ص�ַ��*arr����Ԫ�أ���1
//	printf("%d\n", sizeof(arr[1]));//�ڶ���Ԫ��:1
//	printf("%d\n", sizeof(&arr));//��������ĵ�ַ1:4/8
//	printf("%d\n", sizeof(&arr+1));//�����ַ+1֮��ĵ�ַ��������������֮��ĵ�ַ:4/8
//	printf("%d\n", sizeof(&arr[0]+1));//�ڶ���Ԫ�ص�ַ:4/8
//	return 0;
//}

//int main()
//{
//	//strlen()����ȥ�Ĳ���Ӧ��һ����ַ
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//���ֵ����Ϊf֮�󣬲�֪��ʲôʱ��Ż�����\0��ֹͣ��
//	printf("%d\n", strlen(arr+0));//���ֵ������ͬ��
//	printf("%d\n", strlen(*arr));//����ȥ��*arr��һ���ַ����ᱨ��
//	printf("%d\n", strlen(arr[1]));//����ȥ��arr[1]��һ���ַ����ᱨ��
//	printf("%d\n", strlen(&arr));//���ֵ������ͬ��
//	printf("%d\n", strlen(&arr+1));//���ֵ������ͬ��
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ������ͬ��
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//����д������������õ��ǡ�a��,��b��,��c��,��d��,��e��,��f��,��\0��
//	printf("%d\n", sizeof(arr));//�����С��7
//	printf("%d\n", sizeof(arr+0));//��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*arr));//��Ԫ�ش�С
//	printf("%d\n", sizeof (arr[1]));//�ڶ���Ԫ�ش�С
//	printf("%d\n", sizeof(&arr));//�����ַ��Ҳ�ǵ�ַ
//	printf("%d\n", sizeof (&arr+1));//��������֮��ĵ�ַ
//	printf("%d\n", sizeof(&arr[0]+1));//�ڶ���Ԫ�ص�ַ��
//	return 0;  
//}


//int main()
//{
//	char *p = "abcdef";//P�д�ŵ���a�ַ��ĵ�ַ�����Ƿŵ����������ַ��ĵ�ַ��
//	printf("%d\n", sizeof(p));//p�ǵ�ַ������ָ������Ĵ�С��
//	printf("%d\n", sizeof(p + 1));//�ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));//�ַ����ĵ�һ���ַ�
//	printf("%d\n", sizeof(p[0]));//arr[0]=*(arr+0),p[0]==*(p+0)=='a'��
//	printf("%d\n", sizeof(&p));//p�ĵ�ַ  
//	printf("%d\n", sizeof(&p + 1));//��������֮��ĵ�ַ
//	printf("%d\n", sizeof(&p[0] + 1));//�ڶ���Ԫ�ص�ַ��
//	return 0;
//}

//int main()
//{
//	//strlen����Ĳ����ǵ�ַ���������Ԫ�أ������·Ƿ������ڴ档
//	char* p = "abcdef";//P�д�ŵ���a�ַ��ĵ�ַ�����Ƿŵ����������ַ��ĵ�ַ��
//	printf("%d\n", strlen(p));//�ַ������ȣ�6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16//a[0]�൱��һά����������������㵥����һ�еĴ�С
//	printf("%d\n", sizeof(a[0]+1));//8��1�еڶ���Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a[0] + 1));//4//��һ�еڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(a+1));//8//a�Ƕ�ά�������������û��sizeof������������Ҳû��&����������������a����Ԫ�ص�ַ
//	//���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�ؾ������ĵ�һ�У�a���ǵ�һ�У���Ԫ�أ���ַ
//	//a+1���ǵڶ��еĵ�ַ��
//	printf("%d\n", sizeof(*(a + 1)));//16�ڶ���Ԫ��
//	printf("%d\n", sizeof(&a[0]+1));//8�ڶ��е�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16�ڶ���Ԫ�ش�С
//	printf("%d\n", sizeof(*a));//16 a����Ԫ�ص�ַ����һ�еĵ�ַ��*a���ǵ�һ��
//	printf("%d\n", sizeof(a[3]));//16 sizeof()�����������㣨���ڵľ���ֵ��
//	//���Լ�ʹa[3]������a����ķ�Χ��������sizeof������˵
//	//a[3},��a[0}û������
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//a����֮��ĵ�ַ
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}


//ָ��Ӽ������ļ��㣬ȡ����ָ������
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////��֪p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ��Ƕ��٣�//
////��֪���ṹ��Test���͵ı�����С��20���ֽ�//4+4+2+2+(2*4)
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x100014,����һ���ṹ�峤�ȣ�20�ֽڣ�
//	printf("%p\n", (unsigned long)p + 0x1);//��unsigned long��ǿ��ת��������
//	printf("%p\n", (unsigned int*)p + 0x1);//��unsigned int*���޷������Ρ�
//	return 0;
//}