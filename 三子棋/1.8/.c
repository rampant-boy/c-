#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("************************\n");
	printf("**** 1.paly   0.exit****\n");
	printf("************************\n");
}

//��Ϸ�����㷨��ʵ��
void game()
{
	char ret = 0;
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		PlayerMove(board , ROW , COL);//�������
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�ж�����Ƿ�Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputerBoard(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�жϵ����Ƿ�Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}