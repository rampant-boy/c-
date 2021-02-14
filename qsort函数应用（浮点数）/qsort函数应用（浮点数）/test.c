#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int cmp_float(const void* e1, const void* e2)
{
	return ((int)(*(float*)e1) - *(float*)e2);
}

void test()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}
}


int main()
{
	test();
	return 0;
}