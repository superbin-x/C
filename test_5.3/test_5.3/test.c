#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

//������
void menu()
{
	printf("******************************\n");
	printf("***1. ��ʼ��Ϸ  2. �˳���Ϸ***\n");
	printf("******************************\n");

}
void game()
{
	char ch[ROW][COL] = {0};//������������Ϣ
	char ret = 0;
	InitBoard(ch, ROW, COL);//�ո��ʼ������
	DisplayBoard(ch, ROW, COL);//��ӡ����
	//����
	while (1)
	{
		//�������
		PlayerMove(ch, ROW, COL);
		DisplayBoard(ch, ROW, COL);//��������
		ret = IsWin(ch, ROW, COL);//�ж���Ӯ�����Ӯ ����Ӯ ƽ��  
		if (ret != 'c')
		{
			break;
		}
		//��������
		ComputerMove(ch, ROW, COL);
		DisplayBoard(ch, ROW, COL);//��������
		ret = IsWin(ch, ROW, COL);//�ж���Ӯ�����Ӯ ����Ӯ ƽ��  
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("ʤ��!\n");
	}
	else if (ret == '#')
		{
			printf("ʧ��!\n");
		}
		else if (ret == '$')
		{
			printf("ƽ�֣�\n");
		}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
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
				printf("�������������ѡ��\n");
				break;
		}
	} while (2 == input);
}


int main()
{
	test();




	return 0;
}