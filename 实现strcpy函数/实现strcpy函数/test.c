#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//断言：保证指针的有效性
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
	}
	return ret;
}

int main()
{
	char arr1[] = "#############";
	char arr2[] = "world";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}