#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x*y;
}

int Div(int x, int y)
{
	return x / y;
}

void Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("������������������");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}

void menu()
{
	printf("********************************\n");
	printf("*****1.Add            2.Sub*****\n");
	printf("*****3.Mul            4.Div*****\n");
	printf("************ 0.Exit  ***********\n");
	printf("********************************\n");
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}