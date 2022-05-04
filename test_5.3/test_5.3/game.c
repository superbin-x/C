#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//�ո��ʼ������
void InitBoard(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++)
		{
			ch[i][j] = ' ';
		}
	}
}
//��ӡ����
/*   |   |   
  ---|---|---
     |   |   
  ---|---|---
     |   |     */ 
void DisplayBoard(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ���ݺͷָ���
		for (j = 0; j < col; j++)
		{
			printf(" %c ", ch[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}			
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
			
		}
	}
}
//�������
void PlayerMove(char ch[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��ҡ���\n");
	
	while (1)
	{
		printf("�������꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (ch[x - 1][y - 1] == ' ')
			{
				ch[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("������\n");
			}
		}
		else
		{
			printf("����������������룡\n");
		}
	}
}
//��������
void ComputerMove(char ch[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("���ԡ���\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (ch[x][y] == ' ')
		{
			ch[x][y] = '#';
			break;
		}
	}
}
//ƽ��
int IsFull(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (ch[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//�ж���Ӯ��
char IsWin(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//����
	for (i = 0; i < row; i++)
	{
		/*if (ch[i][0] == ch[i][1]&& ch[i][1] == ch[i][2]&& ch[i][1] != ' ')
		{
			return ch[i][0];
		}*/
		for (j = 0; j < col - 2; j++)
		{
			if (ch[i][j] == ch[i][j + 1] && ch[i][j + 1] == ch[i][j + 2] && ch[i][j + 1] != ' ')
			{
				return ch[i][j];
			}
		}
	}
	//����
	for (j = 0; j < col; j++)
	{
		/*if (ch[0][j] == ch[1][j]&& ch[1][j]== ch[2][j]&& ch[1][j] !=' ')
		{
			return ch[0][j];
		}*/
		for (i = 0; i < row - 2; i++)
		{
			if (ch[i][j] == ch[i + 1][j] && ch[i + 1][j] == ch[i + 2][j] && ch[i + 1][j] != ' ')
			{
				return ch[i][j];
			}
		}
	}
	
	//�Խ�
	/*if (ch[0][0] == ch[ 1][1]&& ch[1][1] == ch[2][2]&& ch[1][1] != ' ')
	{
		return ch[0][0];
	}*/
	for (i = 0; i < row-2; i++)
	{
		for (j = 0; j < col-2; j++)
		{
			if (ch[i][j] == ch[i + 1][j + 1] && ch[i + 1][j + 1] == ch[i + 2][j + 2] && ch[i + 1][j + 1] != ' ')
			{
				return ch[i][j];
			}
		}
	}
	//ƽ��
	if (1 == IsFull(ch, ROW, COL))
	{
		return '$';
	}
	return 'c';
}
