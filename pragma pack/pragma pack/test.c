#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma pack(4)//����Ĭ�϶�����Ϊ4

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