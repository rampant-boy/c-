#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	int ret = 0;
	int i = 0;
	int x = 0;
	scanf("%d", &a);
	ret = a;
	while (ret)
	{
		ret /= 10;
		i++;
	}
	printf("这个数的位数为：%d\n", i);
	while (a)
	{
		x = a % 10;
		a /= 10;
		printf("%d  ", x);
	}
	return 0;
}
