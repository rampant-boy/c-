#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		return 1;
	else
		return 0;
}

int main()
{
	int ret = check_sys();//����1��С�ˣ�����0�����
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}