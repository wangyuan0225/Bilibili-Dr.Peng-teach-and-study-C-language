#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
	printf("%d\n", sizeof(int));
	return 0;
}


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

