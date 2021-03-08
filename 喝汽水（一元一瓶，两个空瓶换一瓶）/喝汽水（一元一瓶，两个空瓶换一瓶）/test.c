#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	/*if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;
	printf("total=%d\n", total);*/
	total = money;//买回来的汽水喝掉
	empty = money;
	while (empty >= 2)//换回来的汽水
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("total=%d\n", total);
	return 0;
}