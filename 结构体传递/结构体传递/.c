#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}

void Print2(Stu* ps)
{
	printf("name:%s\n",ps->name);
	printf("age:%d\n",ps->age);
	printf("tele:%s\n",ps->tele);
	printf("sex:%s\n",ps->sex);
}

int main()
{
	Stu s = { "李四",40,"12138","男" };
	Print1(s);
	Print2(&s);
	return 0;
}//首选Print2函数，因为函数传参的时候，参数需要压栈。如果传递一个结构体对象，结构体过大，参数压栈的系统开销比较大，所以会导致性能下降