#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;//要想得到小数，除号两边必须有一个为浮点数
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}