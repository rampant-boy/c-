#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int mystrlen(char* pc)
{
	if (*pc != '\0')
		return 1 + mystrlen(pc + 1);
	else
		return 0;
}


int main()
{
	char arr[] ="hello";
	int len = mystrlen(arr);
	printf("len = %d\n", len);
	return 0;
}