#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int line = 0;
	scanf("%d", &line);//7
	int i = 0;//��ӡ�ϰ벿��
	for (i = 0; i < line; i++)
	{
		int j = 0;//��ӡ�ո�
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)//��ӡ*
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)//��ӡ�°벿��
	{
		int j = 0;//��ӡ�ո�
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)//��ӡ*
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
