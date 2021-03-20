#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

char* my_strcat(char*dest, const char*src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src);
	while (*dest != '\0')//1.找到目的字符串的‘\0’
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}