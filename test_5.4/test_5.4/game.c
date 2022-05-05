#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ��
void InitBoard(char ch[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			ch[i][j] = set;
		}
	}
}
//��ӡ����
void DisplayBoard(char ch[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
		if (0 == i)
		{
			printf(" ");
		}
	}
	printf("\n");
	for (i = 0; i <= col; i++)
	{
		printf("��");
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d |", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", ch[i][j]);
		}

		printf("\n");
	}
}
//���õ���
void SetCh(char ch[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;
		if (ch[x][y] == '0')
		{
			ch[x][y] = '1';
			count--;
		}
	}
}


//�������
int Get_Ch_Count(char ch[ROWS][COLS], int x, int y)
{
	int count = 0;
	count = (ch[x - 1][y - 1] + ch[x][y - 1] + ch[x + 1][y - 1]
		+ ch[x + 1][y] + ch[x + 1][y + 1] + ch[x][y + 1]
		+ ch[x - 1][y + 1] + ch[x - 1][y]) - 8 * '0';
	return count;
}


//ɨ��
void FindCh_Ch1(char ch[ROWS][COLS], char ch1[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<(row*col-EASY_COUNT))
	{
		printf("����ɨ�����꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (ch[x][y] == '1')//����
			{
				printf("ʧ��!\n");
				DisplayBoard(ch, row, col);
				break;
			}
			else
			{
				int count = Get_Ch_Count(ch, x, y);//�������꣨x,y����Χ��������
				ch1[x][y] = count + '0';
				DisplayBoard(ch1, row, col);
				win++;
			}
		}
		else
		{
			printf("�����������������\n");
		}
	}
	if (win == (row*col - EASY_COUNT))
	{
		printf("ʤ����\n");
		DisplayBoard(ch1, row, col);
	}
}


//չ�����ܣ��ݹ�



