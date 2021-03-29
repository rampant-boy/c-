#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;//返回1，表示小端；返回0，表示大端
}

int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}