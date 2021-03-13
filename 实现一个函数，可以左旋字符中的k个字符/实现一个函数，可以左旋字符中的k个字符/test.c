#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

void left_move(char*arr, int k)//(������ⷨ)
{
	assert(arr != NULL);
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		char tmp = *arr;//����һ���ַ�
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;
	}
}

int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);//����ABCD����һ���ַ��õ�BCDA��ABCD���������ַ��õ�CDAB
	printf("%s\n", arr);
	return 0;
}