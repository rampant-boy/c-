#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct S
{
	int a : 2;//2个比特位
	int b : 5;
	int c : 10;
	int d : 30;
};

int main()
{
	struct S s;
	printf("%d\n",sizeof(s));//8
	return 0;
}