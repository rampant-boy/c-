#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdefg";
	printf("%d\n", my_strlen(arr));
	return 0;
}