#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int is_left_move(char*str1, char*str2)
{
	int len1 = strlen(str1);
	strncat(str1, str1, 6);//��str1�ַ�����׷��һ��str1�ַ���
	char* ret = strstr(str1, str2);//�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������ִ�
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}