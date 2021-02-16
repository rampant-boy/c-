#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

struct Stu
{
	char name[10];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test1()
{
	struct Stu s[3] = { {"张三",20},{"李四",30},{"王五",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", (s[i]).age);
	}
}

void test2()
{
	struct Stu s[3] = { { "张三",20 },{ "李四",30 },{ "王五",10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	test1();
	test2();
	return 0;
}