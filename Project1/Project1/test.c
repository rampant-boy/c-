#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x = 0;
	int tmp = 0;
	int a = 0;
	scanf("%d", &x);
	tmp = x;
	while (tmp / 10)
	{
		a = x % 10;
		tmp /= 10;
		x /= 10;
		printf("%d ", a);
	}
	printf("%d ", tmp);
	return 0;
}