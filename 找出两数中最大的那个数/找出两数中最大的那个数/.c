#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
		return y;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}