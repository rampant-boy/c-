#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int line = 0;
	scanf("%d", &line);//7
	int i = 0;//打印上半部分
	for (i = 0; i < line; i++)
	{
		int j = 0;//打印空格
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)//打印*
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)//打印下半部分
	{
		int j = 0;//打印空格
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)//打印*
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
