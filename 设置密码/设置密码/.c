#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认（Y/N):");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("放弃确认");
	}
	return 0;
}