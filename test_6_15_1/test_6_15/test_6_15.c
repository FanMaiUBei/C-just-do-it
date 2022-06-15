#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	//一维数组
//	//除了一下两种情况外，所有的数组名都是首元素地址
//	//1.sizeof(数组名)-数组名表示整个数组
//	//2.&数组名-数组名表示整个数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//a表示整个数组，
//	printf("%d\n", sizeof(a+0));//此处a表示首元素地址
//	printf("%d\n", sizeof(*a));//*a表示首元素
//	printf("%d\n", sizeof(a+1));//a表示首元素地址，a+1表示第二个元素地址
//	printf("%d\n", sizeof(a[1]));//第二个元素
//	printf("%d\n", sizeof(&a));//&a取出的是数组的地址，数组的地址还是地址，4/8字节
//	printf("%d\n", sizeof(*&a));//数组的大小，&a数组的地址，*(&a)计算的就是数组大的大小
//	printf("%d\n", sizeof(&a+1));//&a+1还是一个地址，不过&a,与&a+1跳过一个a数组的大小
//	printf("%d\n", sizeof(&a[0]));//第一个元素地址，a[0]的地址
//	printf("%d\n", sizeof(&a[0]+1));//第一个元素地址，a[1]的地址
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//计算整个数组的大小:6
//	printf("%d\n", sizeof(arr+0));//计算首元素地址：:4/8
//	printf("%d\n", sizeof(*arr));//arr是首元素地址，*arr是首元素，：1
//	printf("%d\n", sizeof(arr[1]));//第二个元素:1
//	printf("%d\n", sizeof(&arr));//整个数组的地址1:4/8
//	printf("%d\n", sizeof(&arr+1));//数组地址+1之后的地址。跳过整个数组之后的地址:4/8
//	printf("%d\n", sizeof(&arr[0]+1));//第二个元素地址:4/8
//	return 0;
//}

//int main()
//{
//	//strlen()传进去的参数应是一个地址
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值。因为f之后，不知道什么时候才会遇见\0，停止。
//	printf("%d\n", strlen(arr+0));//随机值，理由同上
//	printf("%d\n", strlen(*arr));//传进去的*arr是一个字符，会报错，
//	printf("%d\n", strlen(arr[1]));//传进去的arr[1]是一个字符，会报错，
//	printf("%d\n", strlen(&arr));//随机值，理由同上
//	printf("%d\n", strlen(&arr+1));//随机值，理由同上
//	printf("%d\n", strlen(&arr[0] + 1));//随机值，理由同上
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//此种写法，数组里放置的是‘a’,‘b’,‘c’,‘d’,‘e’,‘f’,‘\0’
//	printf("%d\n", sizeof(arr));//数组大小，7
//	printf("%d\n", sizeof(arr+0));//首元素地址
//	printf("%d\n", sizeof(*arr));//首元素大小
//	printf("%d\n", sizeof (arr[1]));//第二个元素大小
//	printf("%d\n", sizeof(&arr));//数组地址，也是地址
//	printf("%d\n", sizeof (&arr+1));//跳过数组之后的地址
//	printf("%d\n", sizeof(&arr[0]+1));//第二个元素地址。
//	return 0;  
//}


//int main()
//{
//	char *p = "abcdef";//P中存放的是a字符的地址。不是放的整个数组字符的地址。
//	printf("%d\n", sizeof(p));//p是地址，计算指针变量的大小。
//	printf("%d\n", sizeof(p + 1));//字符b的地址
//	printf("%d\n", sizeof(*p));//字符串的第一个字符
//	printf("%d\n", sizeof(p[0]));//arr[0]=*(arr+0),p[0]==*(p+0)=='a'；
//	printf("%d\n", sizeof(&p));//p的地址  
//	printf("%d\n", sizeof(&p + 1));//跳过数组之后的地址
//	printf("%d\n", sizeof(&p[0] + 1));//第二个元素地址。
//	return 0;
//}

//int main()
//{
//	//strlen输入的参数是地址。如果输入元素，将导致非法访问内存。
//	char* p = "abcdef";//P中存放的是a字符的地址。不是放的整个数组字符的地址。
//	printf("%d\n", strlen(p));//字符串长度，6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16//a[0]相当于一维数组的数字名。计算单独第一行的大小
//	printf("%d\n", sizeof(a[0]+1));//8第1行第二个元素地址
//	printf("%d\n", sizeof(*a[0] + 1));//4//第一行第二个元素的大小
//	printf("%d\n", sizeof(a+1));//8//a是二维数组的数组名，没有sizeof（数组名），也没有&（数组名），所以a是首元素地址
//	//而把二维数组看成一维数组时，二维数组的首元素就是他的第一行，a就是第一行（首元素）地址
//	//a+1就是第二行的地址。
//	printf("%d\n", sizeof(*(a + 1)));//16第二行元素
//	printf("%d\n", sizeof(&a[0]+1));//8第二行地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16第二行元素大小
//	printf("%d\n", sizeof(*a));//16 a是首元素地址，第一行的地址。*a就是第一行
//	printf("%d\n", sizeof(a[3]));//16 sizeof()不会真正计算（）内的具体值，
//	//所以即使a[3]超出了a数组的范围，但对于sizeof函数来说
//	//a[3},与a[0}没有区别。
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//a数组之后的地址
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}


//指针加减整数的计算，取决于指针类型
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////已知p的值为0x100000，如下表达式的值分别是多少！//
////已知。结构体Test类型的变量大小是20个字节//4+4+2+2+(2*4)
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x100014,跳过一个结构体长度（20字节）
//	printf("%p\n", (unsigned long)p + 0x1);//（unsigned long）强制转换成整数
//	printf("%p\n", (unsigned int*)p + 0x1);//（unsigned int*）无符号整形。
//	return 0;
//}