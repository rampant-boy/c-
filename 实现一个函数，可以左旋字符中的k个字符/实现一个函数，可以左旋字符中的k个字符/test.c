#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

void left_move(char*arr, int k)//(暴力求解法)
{
	assert(arr != NULL);
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		char tmp = *arr;//左旋一个字符
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
	left_move(arr, 2);//例如ABCD左旋一个字符得到BCDA，ABCD左旋两个字符得到CDAB
	printf("%s\n", arr);
	return 0;
}