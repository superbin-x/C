#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

//ɨ����Ϸ

void menu()
{
	printf("**********************************\n");
	printf("*****1. ��ʼ��Ϸ  2. �˳���Ϸ*****\n");
	printf("**********************************\n");
}
void game()
{
	char ch[ROWS][COLS] = { 0 };//��ŵ�����Ϣ
	char ch1[ROWS][COLS] = { 0 };//�Ų�����ĵ��׵���Ϣ
	//��ʼ��
	InitBoard(ch, ROWS, COLS, '0');
	InitBoard(ch1, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(ch, ROW, COL);
	DisplayBoard(ch1, ROW, COL);
	//���õ���
	SetCh(ch, ROW, COL);
	//DisplayBoard(ch, ROW, COL);
	//ɨ��
	FindCh_Ch1(ch, ch1, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}