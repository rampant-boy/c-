#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int tmp = 0;
	int i = 0;
	int j = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr1[j]);
	}
	printf("\n");
	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr2[j]);
	}
	return 0;
}