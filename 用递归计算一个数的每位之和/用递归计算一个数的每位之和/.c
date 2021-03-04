#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int DigitSum(unsigned int num)
{
	if (num > 9)
	{
		return DigitSum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	int ret = DigitSum(num);
	printf("ret=%d\n", ret);
	return 0;
}