#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main() {
	int x, y;
	for (x = 0; x < 20; x++) {
		for (y = 0; y < 33; y++) {
			if ((x + y + 3 * (100 - 5 * x - 3 * y)) == 100) {
				printf("高档%d件，中档%d件，低档%d件\n", x, y, 3*(100 - 5 * x - 3 * y));
			}
		}
	}
	return 0;
}


//int main() {
//	FILE* fp;
//	int i, k = 0, n = 0;
//	fp = fopen("d1.dat", "w");
//		for (i = 1; i < 4; i++)
//			fprintf(fp, " %d", i);
//	fclose(fp);
//	fp = fopen("d1.dat", "r");
//	fscanf(fp, " % d % d", &k, &n);
//	printf(" % d, % d\n", k, n);
//	fclose(fp);
//	return 0;
//}


//typedef union {
//	long i;
//	int k[5];
//	char c;
//} DATE;
//
//struct date {
//	int cat;
//	DATE cow;
//	double dog;
//} too;
//DATE max;
//
//int main(){
//	printf("%d\n", sizeof(struct date) + sizeof(max));
//}


//int main() {
//	int file = 0;
//	int Main = 1;
//	int PRINTF = 2;
//	printf("%d %d", Main, PRINTF);
//}



//int main() {
//	int  n[2] = { 0 }, i, j, k = 2;
//	for (i = 0; i < k; i++)
//		for (j = 0; j < k; j++)
//			n[j] = n[i] + 1;
//	printf("%d\n", n[k]);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double a, b, mid, y1, y2, y3;
//	scanf("%lf,%lf", &a, &b);
//	if (a > b)
//		mid = a, a = b, b = mid;
//	y1 = pow(a, 3) - pow(a, 2) + 6;
//	y2 = pow(b, 3) - pow(b, 2) + 6;
//	if (y1 * y2 > 0)
//		printf(" no answer ");
//	if (y1 == 0)
//		printf("%f", a);
//	if (y2 == 0)
//		printf("%f", b);
//	if (y1 * y2 < 0) {
//		while (1) {
//			do {
//				mid = (a + b) / 2;
//				y3 = pow(mid, 3) - pow(mid, 2) + 6;
//				if (y3 == 0)
//					printf("%f", mid);
//				if (y1 * y3 < 0) {
//					b = mid, mid = (mid + a) / 2;
//					y3 = pow(mid, 3) - pow(mid, 2) + 6;
//					y1 = pow(a, 3) - pow(a, 2) + 6;
//					y2 = pow(b, 3) - pow(b, 2) + 6;
//					i++;
//				}
//				if (y2 * y3 < 0) {
//					a = mid, mid = (mid + b) / 2;
//					y3 = pow(mid, 3) - pow(mid, 2) + 6;
//					y1 = pow(a, 3) - pow(a, 2) + 6;
//					y2 = pow(b, 3) - pow(b, 2) + 6;
//					i++;
//				}
//			} while (i != 20);
//			printf("%.16lf", mid);
//			break;
//		}
//	}
//}


//int main()
//{
//	int a[10][10]={0}, n, max, min, rmax, rmin, i, j, t;
//	printf("请输入一个大于2且小于10的整数：");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			scanf("%d", &a[i][j]);
//	}
//	printf("原始矩阵为：\n");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//	max = min = a[0][0];
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				rmax = i;
//			}
//			else if (min > a[i][j])
//			{
//				min = a[i][j];
//				rmin = i;
//			}
//	for (j = 0; j < n; j++)
//	{
//		t = a[rmax][j];
//		a[rmax][j] = a[rmin][j];
//		a[rmin][j] = t;
//	}
//	printf("对调后的矩阵为: \n");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//main()
//{
//	int n, i, m, j, k;
//	//printf('\n');
//	scanf("%d", &n);
//	j = 0, k = 0;
//	char h = '\n';
//	for (m = 2; m <= n; m++)
//	{
//		for (i = 2; i < m; i++)
//		{
//			if (m % i == 0)
//				k++;
//		}
//		if (k != 0)
//			k = 0;
//		else
//		{
//			j++, printf("%5d", m);
//			if (j % 8 == 0)
//				printf("%c", h);
//		}
//	}
//}


//int main()
//{
//	int a, num;
//	for (a = 1; a < 6; a++)
//	{
//		num += a;
//	}
//	printf("%d", num);
//	return 0;
//}


//int main()
//{
//	char sentence[99] = { "0" };
//	char* hanzi[999] = { '0' };
//	int review[99] = { 0 };
//	int j = 1;
//	int k = 2;
//	char* p = sentence;
//	scanf("%s", sentence);
//	char news[99];
//	//printf("%c%c", sentence[0], sentence[1]);
//	int len = strlen(sentence);
//	printf("%d\n", len);
//	hanzi[0] = p;
//	hanzi[1] = p + 1;
//	//printf("%c%c\n", *hanzi[0], *hanzi[1]);
//	for (int i = 0; i < len; i += 2)
//	{
//		for (; k < len; k += 2)
//		{
//			if (*p + i == *p + k && *p + i + 1 == *p + k + 1)
//			{
//				review[j]++;
//			}
//			else
//			{
//				hanzi[j] = p + i;
//				hanzi[j + 1] = p + i + 1;
//			}
//		}
//		j += 2;
//		k = i + 2;
//	}
//	for (int i = 0; i < len; i += 2)
//	{
//		printf("%c%c:%d", *hanzi[i], *hanzi[i + 1], review[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int num;
//	int i = 0;
//	int j = 0;
//	char str[99];
//	char* pstr = str;
//	int count[26] = { 0 };
//	while (1)
//	{
//		printf("请输入一个正整数作为总字母数:>");
//		scanf("%d", &num);
//		printf("请输入一串字母");
//		scanf("%s", str);
//		if (strlen(str) == num)
//		{
//			printf("输入正确\n");
//			for (i = 0; i < 26; i++)
//			{
//				switch (*(pstr + i))
//				{
//				case 'a':
//					count[0]++;
//					break;
//				case 'b':
//					count[1]++;
//					break;
//				case 'c':
//					count[2]++;
//					break;
//				case 'd':
//					count[3]++;
//					break;
//				case 'e':
//					count[4]++;
//					break;
//				case 'f':
//					count[5]++;
//					break;
//				case 'g':
//					count[6]++;
//					break;
//				case 'h':
//					count[7]++;
//					break;
//				case 'i':
//					count[8]++;
//					break;
//				case 'j':
//					count[9]++;
//					break;
//				case 'k':
//					count[10]++;
//					break;
//				case 'l':
//					count[11]++;
//					break;
//				case 'm':
//					count[12]++;
//					break;
//				case 'n':
//					count[13]++;
//					break;
//				case 'o':
//					count[14]++;
//					break;
//				case 'p':
//					count[15]++;
//					break;
//				case 'q':
//					count[16]++;
//					break;
//				case 'r':
//					count[17]++;
//					break;
//				case 's':
//					count[18]++;
//					break;
//				case 't':
//					count[19]++;
//					break;
//				case 'u':
//					count[20]++;
//					break;
//				case 'v':
//					count[21]++;
//					break;
//				case 'w':
//					count[22]++;
//					break;
//				case 'x':
//					count[23]++;
//					break;
//				case 'y':
//					count[24]++;
//					break;
//				case 'z':
//					count[25]++;
//					break;
//				default:
//					break;
//				}
//			}
//			for (j = 0; j < 26; j++)
//			{
//				if (count[j] != 0)
//				{
//					printf("%c:%d ", j + 97, count[j]);
//				}
//			}
//			break;
//		}
//		else
//		{
//			printf("输入错误,请重新输入\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int num;
//	char str[99];
//	char* pstr = str;
//	int count[26] = {0};
//	while (1)
//	{
//		printf("请输入一个正整数作为总字母数:>");
//		scanf("%d", &num);
//		printf("请输入一串字母");
//		scanf("%s", str);
//		if (strlen(str) == num)
//		{
//			printf("输入正确\n");
//			for (int i = 0; i < num; i++)
//			{
//				switch (*(pstr + i))
//				{
//				case 'a':
//					count[0]++;
//					break;
//				case 'b':
//					count[1]++;
//					break;
//				case 'c':
//					count[2]++;
//					break;
//				case 'd':
//					count[3]++;
//					break;
//				case 'e':
//					count[4]++;
//					break;
//				case 'f':
//					count[5]++;
//					break;
//				case 'g':
//					count[6]++;
//					break;
//				case 'h':
//					count[7]++;
//					break;
//				case 'i':
//					count[8]++;
//					break;
//				case 'j':
//					count[9]++;
//					break;
//				case 'k':
//					count[10]++;
//					break;
//				case 'l':
//					count[11]++;
//					break;
//				case 'm':
//					count[12]++;
//					break;
//				case 'n':
//					count[13]++;
//					break;
//				case 'o':
//					count[14]++;
//					break;
//				case 'p':
//					count[15]++;
//					break;
//				case 'q':
//					count[16]++;
//					break;
//				case 'r':
//					count[17]++;
//					break;
//				case 's':
//					count[18]++;
//					break;
//				case 't':
//					count[19]++;
//					break;
//				case 'u':
//					count[20]++;
//					break;
//				case 'v':
//					count[21]++;
//					break;
//				case 'w':
//					count[22]++;
//					break;
//				case 'x':
//					count[23]++;
//					break;
//				case 'y':
//					count[24]++;
//					break;
//				case 'z':
//					count[25]++;
//					break;
//				default:
//					break;
//				}
//			}
//			for (int i = 0; i < 26; i++)
//			{
//				if (count[i] != 0)
//				{
//					printf("%c:%d ", i + 97, count[i]);
//				}
//			}
//			break;
//		}
//		else
//		{
//			printf("输入错误,请重新输入\n");
//		}
//	}
//	return 0;
//}




//struct studentsFile
//{
//	char id[15];
//	char name[20];
//	char sex[9];
//	int age;
//	char class[100];
//};
//
//int main()
//{
//	struct studentsFile students[400];
//	FILE* fp = fopen("C:\\students.txt", "r");
//	char students1[999];
//	int pd = 0;
//	for (int i = 0; i < 400; i++)
//	{
//		fscanf(fp, "%[^,],%[^,],%[^,],%d,%s\n", &students[i].id, &students[i].name, &students[i].sex, &students[i].age, &students[i].class);
//	}
//	while (1)
//	{
//		printf("i.查询模式1：根据姓名或学号查询学生信息\nii.查询模式2：根据年龄范围查询学生信息\niii.查询模式3：根据班级查询学生信息\n其他:退出查询\n");
//		printf("请输入查询模式:>");
//		int mod;
//		scanf("%d", &mod);
//		switch (mod)
//		{
//		case 1:
//			printf("样例1： 输入： 张三\n输出： 张三, 2017002871, 男, 17, 大数据1702\n张三, 2015009321, 男, 22, 信计1502\n");
//			printf("样例2： 输入： 2017009876\n输出： 小路, 2016009876, 男, 20, 大数据1701\n");
//			printf("请输入姓名或学号:>");
//			char pf[99];
//			scanf("%s", pf);
//			for (int i = 0; i < 401; i++)
//			{
//				if ((strcmp(students[i].name, pf) == 0) || (strcmp(students[i].id, pf) == 0))
//				{
//					printf("%s %s %s %d %s\n", students[i].id, students[i].name, students[i].sex, students[i].age, students[i].class);
//					pd = 1;
//				}
//			}
//			if (pd == 0)
//				printf("查无此人");
//			printf("------------------------------------------\n");
//			break;
//		case 2:
//			printf("样例1： 输入： 18 20 \n输出： 李四, 2017001765, 女, 18, 软件工程1712\n小路, 2016009876, 男, 20, 大数据1701\n大张伟, 2014002715, 男, 19, 计算机1402\n");
//			printf("请输入两个数确定年龄范围，要求第一个数小于等于第二个数:>");
//			int age[2];
//			scanf("%d%d", &age[0], &age[1]);
//			if (age[0] > age[1])
//			{
//				printf("输入错误");
//				break;
//			}
//			//printf("%d %d", age[0],age[1]);
//			else
//			{
//				for (int i = 0; i < 401; i++)
//				{
//					if (students[i].age >= age[0] && students[i].age <= age[1])
//					{
//						printf("%s %s %s %d %s\n", students[i].id, students[i].name, students[i].sex, students[i].age, students[i].class);
//						pd = 1;
//					}
//				}
//				if (pd == 0)
//					printf("查无此人\n");
//			}
//			printf("------------------------------------------\n");
//			break;
//		case 3:
//			printf("样例1： 输入： 大数据1702\n输出： 张三, 2017002871, 男, 17, 大数据1702\n王璐丹, 2017009479, 女, 22, 大数据1702\n");
//			printf("请输入专业班级:>");
//			char class[99];
//			scanf("%s", class);
//			for (int i = 0; i < 401; i++)
//			{
//				if ((strcmp(students[i].class, class) == 0) || (strcmp(students[i].class, class) == 0))
//				{
//					printf("%s %s %s %d %s\n", students[i].id, students[i].name, students[i].sex, students[i].age, students[i].class);
//					pd = 1;
//				}
//				
//			}
//			if (pd == 0)
//				printf("查无此人");
//			printf("------------------------------------------\n");
//			break;
//		default:
//			printf("退出查询");
//			return 0;
//		}
//	}
//	fclose(fp);
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	char id[99];
//	char sex[9];
//	int age;
//	char class[100];
//};
//
//int main()
//{
//	int i;
//	struct Stu stu[5] =
//	{
//		{ "王渊","2022001932","男",18,"计算机2201"},
//		{ "张佑卿","2022001933","男",18,"计算机2201"},
//		{ "陈昶文","2022001930","男",18,"计算机2201"},
//		{ "万昭明","022001929","男",18,"计算机2201"},
//		{ "张明超","2022001934","男",18,"计算机2201"},
//	};
//	printf(stu);
//	struct Stu* p = stu;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", (p + i)->age);
//	}
//	printf("%d\n", p->age);
//	for (i = 0; i < 5; i++)
//	{
//		printf("name:%s  id:%s  sex:%s  age:%d  class:%s\n", stu[i].name, stu[i].id, stu[i].sex, stu[i].age, stu[i].class);
//	}
//	return 0;
//}


//int main()
//{
//	int a, b, c, d, e, f, g;
//	a = 1;
//	b = 2, c = 3, d = 4, e = 5, f = 6, g = 7;
//	printf("%d\n", a + b + c + d + e + f + g);
//	return 0;
//}


//int main()
//{
//	int year;
//	scanf("%d", &year);
//	printf("Hello,year=%d", year);
//	return 0;
//}


//int main()
//{
//	int a, b, c = 246;
//	b = (-2) && (-3);
//	(a = c) && (b = c);
//	printf("%d %d\n", a, b);
//	printf("%d", b);
//	return 0;
//}


//int main()
//{
//	char ch1 = 'A' + '5' - '3';
//	char ch2 = 'A' + '6' - '3';
//	printf("%d %c\n", ch1, ch2);
//	int x = 10;
//	int y = 3;
//	printf("%d\n", y = x / y);
//	return 0;
//}


//int main()
//{
//	double x = 1;
//	double y = x + 3 / 2;
//	printf("%f", y);
//	return 0;
//}


//int main()
//{
//	char a = 1;
//	int b = 2;
//	float c = 3.1;
//	double d = 3.14;
//	printf("%c\n", a * b + c + d);
//	return 0;
//}


//int main(void)
//{
//	int year;
//	scanf("%d", &year);
//	printf("Hello,year=%d", year);
//	return 0;
//}


//int main()
//{
//	int price = 0;
//	printf("               ");
//	scanf("%d", &price);
//	int change = 100 - price;
//	printf("    %d     \n", change);
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//			printf("%p\n", &arr[i][j]);
//		}
//		printf("\n");
//	}
//	//char ch[5][6];
//	//int arr2[2][4] = { { 1,2,3,4 }, { 5,6,7,8 } };
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//char arr[] = "abcdef";
//	//printf("%c\n",arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%c ", arr[i]);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	char arr4[3] = { 'a',98,'c' };
//	char arr5[] = { 'a','b','c' };
//	printf("%s\n", arr4);
//	printf("%s\n", arr5);
//	return 0;
//}



//int main()
//{
//	int y = 2000;
//	for (y = 2000; y <= 2500; y++)
//	{
//		if (y % 4 != 0)
//		{
//			printf("%d不是闰年\n",y);
//		}
//		if ((y % 4 == 0) || (y % 100 != 0))
//		{
//			printf("%d是闰年\n",y);
//		}
//		if ((y % 100 == 0) && (y % 400 == 0))
//		{
//			printf("%d是闰年\n",y);
//		}
//		else
//			printf("%d不是闰年\n",y);
//	}
//	return 0;
//}


//int main()
//{
//	int sigh = 1;
//	int sum = 1;
//	int deno = 2;
//	double term;
//	while (deno <= 100)
//	{
//		sigh = (-1) * sigh;
//		term = sigh * (1 / deno);
//		term = sum + term;
//		deno++;
//	}
//	printf("%lf\n", term);
//	return 0;
//}


//int main()
//{
//	int i = 2;
//	int t = 1;
//	for (i = 2; i <= 5; i++)
//	{
//		t = t * i;
//	}
//	printf("%d\n",t);
//	return 0;
//}


//int main()
//{
//	int t = 1;
//	int i = 2;
//	while (i <= 5)
//	{
//		t = t * i;
//		i++;
//	}
//	printf("%d\n", t);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3 };
//	char arr2[5] = { 'a','b' };
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr4));
//	return 0;
//}


//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}


//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
////int count = 0;
////int Fib(int n)
////{
////	if (n == 3)
////	{
////		count++;
////	}
////	if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);
////}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}


//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n-1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}


//int my_strlen2(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen2(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen2(arr);
//	printf("len=%d\n", len);
//	
//	return 0;
//}


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//} 


//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


////头文件声明
//#include "add.h"
////int Add(int, int);//函数声明（有分号）
//////但是很啰嗦，可以将Add放在前面
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	return 0;
//}
//


//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}


//int Add(int* x)
//{
//	(*x)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
//
//int main()
// {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == 1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//
//}

 
//不能完成任务
//void Swap(int x, int y)
//{
//	int tmp = x;;
//	x = y;
//	y = tmp;
//	
//}
//
//void Swap2(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	//Swap(a, b);
//	Swap2(&a, &b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int get_max(int x,int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//} 
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b); 
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//int Max(int x, int y)  /* max函数 */
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//
//int main() 
//{  
//	int a, b, c;
//	scanf("%d%d", &a, &b);;/* 输入两个整数 */
//	c = Max(a, b);/* 调用max函数,求a和b中大数 */
//	printf("max = %d\n", c);
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n请输入》:");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}


//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//
//		}
//	}
//
//}
//
//void menu()
//{
//	printf("********************************\n");
//	printf("****    1.play    0.exit    ****\n");
//	printf("********************************\n");
//}
//
//int main()
//
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//
//}


//int main()
//{
//	int i = 0;
//	for(i=1;i<=9;i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//
//		}
//		printf("\n");
//			
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum1 += 1.0 / i;
//		}
//		else
//		{
//			sum2 += 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum1 - sum2);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b += 3;
//			continue;
//		}
//		b -= 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//int main()
//{
//	int year;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//int main()
//{
//	int a, b, c, d, m, i;
//	scanf("%d %d", &a, &b);
//	for (i = 0; ; i++)
//	{
//		if (a > b)
//		{
//			c = a % b;
//			a = b;
//			b = c;
//			d = a;
//		}
//		else if (a < b)
//		{
//			c = b % a;
//			b = a;
//			a = c;
//			d = b;
//		}
//		if (a == b)
//		{
//			d = a;
//			break;
//		}
//		if (c == 0)  break;
//	}
//	printf("%d", d);
//	return 0;
//}


//int main()
//{
//	int m, n, r;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for(i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (3 == i)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}


//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "                    ";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0]-2);
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


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

