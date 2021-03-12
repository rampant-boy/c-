#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer=%c\n", killer);
		}
	}
	return 0;
}
//A：不是我
//B：是C
//C：是D
//D：C在胡说