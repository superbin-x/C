#define ROW 9 
#define COL 9
#define ROWS ROW+2 //�����ɨ�׷�Χ��һȦ
#define COLS COL+2
#define EASY_COUNT 10 //���׸���

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char ch[ROWS][COLS], int rows, int cols, char set);//��ʼ��
void DisplayBoard(char ch[ROWS][COLS], int rows, int cols);//��ӡ����
void SetCh(char ch[ROWS][COLS], int row, int col);//���õ���
void FindCh_Ch1(char ch[ROWS][COLS], char ch1[ROWS][COLS], int row, int col);//ɨ��
