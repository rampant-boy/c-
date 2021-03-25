#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int main()
{
	int arr[4] = { 0 };
	int a = 0;
	int b = 4;
	int i = 0;
	int j = 0;
	while (b)
	{
		scanf("%d", &a);
		arr[i] = a;
		i++;
		b--;
	}
	qsort(arr, 4, sizeof(arr[0]), cmp_int);
	for (j = 0; j<4; j++)
	{
		printf("%d  ", arr[j]);
	}
	return 0;
}