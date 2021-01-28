#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);//2d-打印两位数，-2d--打印两位数左对齐
		}
		printf("\n");
	}
	return 0;
}
