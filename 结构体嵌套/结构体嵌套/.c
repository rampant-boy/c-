#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* pc;
};

int main()
{
	char arr[]="hello \n";
	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
	printf("%s\n", t.ch);
	printf("%s\n", t.s.arr);
	return 0;
}