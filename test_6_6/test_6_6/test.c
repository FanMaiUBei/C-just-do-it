#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	/*char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };*/
//	Stu s1 = { "张三",20,"150000000000","男" };
//	struct Stu s2 = { "旺财",10,"15448666411","保密" };
//	return 0;
//}
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = { "hello bit" };
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);//heh
//	printf("%s\n", t.s.arr);//hell world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu tmp)
{
	printf("name ：%s\n", tmp.name);
	printf("age ：%d\n", tmp.age);
	printf("tele ：%s\n", tmp.tele);
	printf("sex ：%s\n", tmp.sex);
}
void Print2(Stu* ps)
{
	printf("name ：%s\n", ps->name);
	printf("age ：%d\n", ps->age);
	printf("tele ：%s\n", ps->tele);
	printf("sex ：%s\n", ps->sex);
}
int main()
{
	Stu s = { "李四",40,"15599999999","男" };
	//打印结构体数据
	Print1(s);//传参数，实参传入形参，形参是实参的一个拷贝，需要另外开辟一块空间。内存浪费严重。
	Print2(&s);//传入地址。地址最大8个字节，较节省内存。
	return 0;
}