#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//	//fib8 = fib7        + fib6
//		 //= fib6 +        fib5 +        fib5 +        fib4
//		 //= fib5 + fib4 + fib4 + fib3 + fib4 + fib3 + fib3 + fib2
//		 //= fib4 + fib3 + fib3 + fib2 + fib3 + fib2 + fib2 + fib1 + fib3 + fib2 + fib2 + fib1 + fib2 + fib1 + fib1 + fib0
//		 //= 3 2    2 1    2 1    1 0    2 1    1 0    1 0           2 1   1 0     1 0           1 0     
//	     //= 2 1 1 0 1 0   1 0           1 0                         1 0 
//	     //= 1 0
//}
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}

//int x = 1
//do
//{
//	printf("%2d\n", x++);
//}while(x--)

//#include<stdlib.h>
//
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//int a = 0, c = 0;
//do
//{
//	--c;
//	a = a - 1;
//} while (a > 0);

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d\n", m);
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����a��b����С������
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//
//	//��ӡ
//	printf("%d\n", i * a);
//	return 0;
//
//}

//�����ַ���
#include<assert.h>
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[101] = { 0 };
	//����
	gets(arr);
	//����
	int len = strlen(arr);
	//1. ���������ַ���
	reverse(arr, arr + len - 1);
	//2. ����ÿ������
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != ' \0');
		end++;
		start = end;
	}
	//���
	printf("%s\n", arr);

	return 0;
}