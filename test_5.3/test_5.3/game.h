#define ROW 4
#define COL 4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char ch[ROW][COL], int row, int col); //��ʼ������ ��������
void DisplayBoard(char ch[ROW][COL], int row, int col);//��ӡ����
void PlayerMove(char ch[ROW][COL], int row, int col);//�������
void ComputerMove(char ch[ROW][COL], int row, int col);//��������
char IsWin(char ch[ROW][COL], int row, int col);//�ж���Ӯ