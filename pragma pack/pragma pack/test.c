#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma pack(4)//设置默认对齐数为4

struct S
{
	char c1;
	double d;
};

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}