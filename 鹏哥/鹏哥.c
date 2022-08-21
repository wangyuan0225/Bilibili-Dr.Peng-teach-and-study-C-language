#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//
//	return 0;
//}


//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	//else
//	//	printf("成年\n");
//	return 0;
//}


//struct Book
//{
//	char name[100];
//	short price;
//};
//
//int main()
//{
//	struct Book b1 = { "c语言程序设计",55 };
//	struct Book* pb = &b1;
//	strcpy(b1.name, "C++");
//	//b1.name = "C++";
//	b1.price = 15;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	//printf("书名:%s\n", b1.name);
//	//printf("价格:%d元\n", b1.price);
//	//b1.price = 15;
//	//printf("修改后的价格：%d\n", b1.price);
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	//double d = 3.14;
//	//double* pd = &d;
//	//printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;
//	printf("%p\n", p);
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("%d\n", max);
//
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//#define Max 100
//int main()
//{
//	int a = Max;
//	return 0;
//}


//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum =Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}


//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main() 
// {
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//int a = 1;
//void test()
//{
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//		a++;
//	}
//	return 0;
//}


//int main()
//{
//	typedef unsigned int u_int;
//	u_int num2 = 20;
//	return 0;
//}


//int main()
//{
//	unsigned int a = 10;
//	a = -2;
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	//int arr[10] = { 5,6,7,8,9 };
//	//printf("%d\n", arr[4]);
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d", max);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = --a;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6, };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = Max(num1, num2);
//	printf("max=%d\n", max);
//	//if (num1 > num2)
//	//	printf("较大值是：%d\n", num1);
//	//else
//	//	printf("较大值是：%d\n", num2); 
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%d", strlen(arr));
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	printf("%d\n", sizeof(int));
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;
//	//int a = 0;
//	int a = -2;
//	int b = -a;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	a = 20;
//	a += 10;
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	//011
//	int b = 5;
//	//101
//	int c = a & b;
//	//001(与门，类似与乘法，两个都是真才可)
//	int d = a | b;
//	//111(或门，有真即可)
//	int e = a ^ b;
//	//110（异或门，相异为1，相同为0）
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//
//	
//	return 0;
//
//}


//int main()
//{
//	int a = 1;
//	int b = a << 3;
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	return 0;
//
//}


//int main()
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//
//	return 0;
//
//}


//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//
//	}
//	//char ch[20];
//	//float arr2[5];
//	return 0;
// }


//int Add(int x, int y)
//{
//	int z = x + y;
//
//	return z;
//}
//int main()
//{
//	int sum = 0;
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//
//}


//int main()
//{
//	int line = 0;
//	printf("加入太原理工\n");
//	while (line < 20000)
//	{
//		printf("卷 %d\n", line);
//		line++;
//	}
//	if(line>=20000)
//		printf("保研\n");
//	return 0;
//
//}


//int main()
//{
//	int input = 0;
//	printf("来太原理工读书\n");
//	printf("你要好好学习吗？(1/0):>");
//	scanf("%d", &input);
//	if (1 == input)
//		printf("保研\n");
//	else
//		printf("烤地瓜\n");
//
//	return 0;
//
//}


//int main()
//{
//	printf("%c\n", 'a');
//	printf("c:\text\32\text.c\n");
//	printf("%c\n", '\x32');
//
//	return 0;
//
//}


//int main()
//{
//	printf("c:\\\\text\\\\32\\\\text.c\n");
//	return 0;
//
//}


//int main()
//{
//	char zfc1[] = "abc";
//	char zfc2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(zfc1));
//	printf("%d\n", strlen(zfc2));
//
//	return 0;
//
//}


//int main()
//{
//	char zfc1[] = "abc";
//	printf("%s\n", zfc1);
//	char zfc2[] = { 'a','b','c',0};
//	printf("%s\n", zfc2);
//	return 0;
//
//}


//int main()
//{
//	enum Color 
//	{
//		Red,Yellow,Blue
//	};
//	enum Color color = Red;
//	printf("%d\n", color);
//
//	return 0;
//
//}

