#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//��һ�����������д��ڼ���1��
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
//}���ְ취�޷���ȡ�����Ķ�����λ��1�ĸ���

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
//}���ֽ�a��ת��Ϊ�޷������������ȡ�����Ĵ����ڼ�����ж������������룩��1�ĸ�����
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
//}���߼���ķ�ʽȥ��������λ����

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
//}//���ŵĽⷨ���м���1���ͼ��㼸�Ρ���ÿִ��һ��n&(n-1)��������һ��1��
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = Count_Bit_One(a);
//	printf("%d", count);
//	return 0;
//}


//���������������м�λ����ͬ
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


//�ֱ��ӡ��������������Ϊ��ż��λ
//void print(int n)
//{
//	int i = 0;
//	printf("��ӡ����λ\n");//������λ���������ȡ��
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("��ӡż��λ\n");
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

//������������ֵ��������ʹ���м����
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

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά����
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

//����һ�����������Ӧ�ĳ˷��ھ���
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
//��д����reverse_string(char*string)(�ݹ�ʵ��)���������ַ������ַ��������У�Ҫ����ʹ��C���Կ⺯���е��ַ�������������
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
//}ʹ�ÿ⺯�������򷽷�
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
//void reverse_string(char arr[])//��char* arr)��ͬ��char arr[].
//{
//	char tmp = arr[0];//����Ԫ�ط�������ʱλ���ݴ档
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];//�������ΪԪ�ط�������Ԫ��λ�á�
//	arr[len - 1] = '\0';//��ԭ������������Ϊ����һ��\0,����µ����顣
//	if (my_strlen(arr + 1) >= 2)//��Ϊ����ɵ�һλԪ�ص������������ɵ�����Ϊarr+1,��������Ԫ�ص�ַΪarr+1��
//	{
//		reverse_string(arr + 1);//��������ʹ�õݹ顣
//	}
//	arr[len - 1] = tmp;//����Ԫ�ش���ʱλ��ȡ�������������һλλ���ϣ��������
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//дһ���ݹ麯��DigitSum��n);����һ���Ǹ����������������������֮�͡�
//int DigitSum(unsigned int n)
//{
//	if (n > 9)//��֤����������λ��
//	{
//		return DigitSum(n / 10) + (n % 10);
//	}
//	else
//		return n;
//}
//int main()
//{
//	unsigned int n = 0;//����һ���Ǹ�����
//	scanf("%d", &n);
//	int ret =DigitSum(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//�õݹ����N��K�η���
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
