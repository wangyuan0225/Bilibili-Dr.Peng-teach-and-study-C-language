#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 4; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (5==i)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i ;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int ret = 0;
//	int ch; 
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	//int ch = getchar();
//	//putchar(ch);
//	//printf("%c\n", ch);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//
//	//while (1)
//	//	printf("hehe\n");
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//1,3
//	case 2:
//		n++;//2,3
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;//2,4
//			n++;//3,4
//			break;
//		}
//	case 4:m++;//3,5
//		break;
//	default:
//		break;
//	}
//	printf("%d %d\n", n, m);
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if (1 == n)
//			printf("hehe\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//
//	case 2:
//		printf("星期2\n");
//		break;
//
//	case 3:
//		printf("Wednesday\n");
//		break;
//
//	case 4:
//		printf("Thursday\n");
//		break;
//
//	case 5:
//		printf("Friday\n");
//		break;
//
//	case 6:
//		printf("Saturday\n");
//		break;
//
//	case 7:
//		printf("Sunday\n");
//		break;
//	}
//	//if (1 == day)
//	//	printf("星期1\n");
//	//else if (2 == day)
//	//	printf("星期2\n");
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//	    printf("%d ", num);
//	    num+=2;
//	}
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if (5 == num) 
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
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

