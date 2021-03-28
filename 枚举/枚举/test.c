#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	printf("%d %d %d\n", MALE, FEMALE, SECRET);
	return 0;
}