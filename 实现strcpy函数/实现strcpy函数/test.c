#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//���ԣ���ָ֤�����Ч��
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
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