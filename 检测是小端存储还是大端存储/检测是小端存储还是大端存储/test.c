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
	return u.c;//����1����ʾС�ˣ�����0����ʾ���
}

int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == ret)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}