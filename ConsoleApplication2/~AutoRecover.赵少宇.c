#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<limits.h>
//int main()
//{
//	int i = 101;
//	for (; i < INT_MAX; i++)
//	{
//		int a,b;
//		if (i / 2 == 0 || i / 17 == 0)
//		{
//			continue;
//		}
//		if (i % 8 == 1 && i % 17 == 4)
//		{
//			if (i / 8 % 8 == 1 && i / 17 % 17 == 15)
//			{
//				a = i;
//				b = i;
//				while (a / 8)
//				{
//					a /= 8;
//				}
//				while (b / 17)
//				{
//					b /= 17;
//				}
//				if (b == 2 * a)
//				{
//					printf("The required number is :%d\n", i);
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 101;
//	for (; i <= 1000000000; i++)
//	{
//		int a = i;
//		int c = i;
//		int flag = 0;
//		if (i % 2 == 0 || i % 17 == 0)
//		{
//			continue;
//		}
//		if (i % 8 == 1)
//		{
//			if ((i / 8) % 8 == 1)
//			{
//
//				if ((i / 64) % 8 == 7)
//				{
//					while (a / 8)
//					{
//						a /= 8;
//					}
//					flag = 1;
//				}
//			}
//		}
//		else
//		{
//			flag = 0;
//		}
//		if (i % 17 == 4 && (i / 17) % 17 == 15)
//		{
//			while (c / 17)
//			{
//				c /= 17;
//			}
//			flag = 1;
//		}
//		else
//		{
//			flag = 0;
//		}
//		if (c == 2 * a&& a != 0 && c != 0)
//		{
//			flag = 1;
//		}
//		else
//		{
//			flag = 0;
//		}
//		if (flag == 1)
//		{
//			printf("The required number is :%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 7 == 0)
//	{
//		printf("此数能被7整除");
//	}
//	else
//	{
//		printf("此数不能被7整除");
//	}
//}
//int main()
//{
//	int year, month;
//	printf("Input year,month:\n");
//	scanf("%d,%d", &year, &month);
//	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//	{
//		printf("31 days\n");
//	}
//	else if (month == 4 || month == 6 || month == 9 || month == 11)
//		printf("30 days\n");
//	else if (month == 2)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("29 days\n");
//		}
//		else
//		{
//			printf("28 days\n");
//		}
//	}
//	else
//	{
//		printf("Input error!\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	printf("Enter n : ");
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		printf("pow(2,%d)=%d\n", i, pow(n, i));
//	}
//	return 0;
//}
//int main()
//{
//	char a, b;
//	printf("请输入起止字符：");
//	scanf("%c-%c", &a, &b);
//	char i;
//	for (i = a; i <= b; i++)
//	{
//		char j;
//		for (j = i; j <= b; j++)
//		{
//			printf("%c", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}