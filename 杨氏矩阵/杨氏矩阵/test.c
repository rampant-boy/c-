#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
		return 0;//找不到
	}
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int x = 3;
	int y = 3;
	int k = 7;
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("下标是：%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}
//杨氏矩阵：有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序，在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于o（N）