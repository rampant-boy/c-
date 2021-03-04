#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;//计算i的位数
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);//pow（）函数用来求x^y——double pow（double x，double y）
			tmp /= 10;
		}
		if (i == sum)//比较i，sum
		{
			printf("%d ", i);
		}
	}
	return 0;
}