#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		return 1;
	else
		return 0;
}

int main()
{
	int ret = check_sys();//返回1，小端；返回0，大端
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}