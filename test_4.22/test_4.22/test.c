#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��100���ڵ�9�ĸ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10)
//		{
//			count++;
//		}
//		if (9 == i / 10)
//		{
//			count++;
//		}
//	}
//	printf("9�ĸ���=%d\n", count);
//
//	return 0;
//}
//������ͣ�1/1-1/2+1/3-����+1/100
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (flag * 1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
////��ʮ�����е����ֵ
//int main()
//{
//	int a[] = { -1,1,5,3,6,45,7,8,9,-10 };
//	int max = a[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
////��ӡ�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int s = 0;
//	for (i = 1; i <= 9; i++) //��ӡ9��
//	{
//		for (j = 1; j <= i; j++)//��ӡһ��
//		{
//			s = i * j;
//			printf("%d*%d=%-2d ", i, j, s);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
////��������Ϸ��1. ���������   2.������
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("1.��ʼ��Ϸ  2.�˳���Ϸ\n");
//	printf("**********************\n");
//}
//void game()//1. ��������� 2.������
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int flag = 0;
//	m = rand()%100+1;   //��ȡһ��1-100�������rand()��>���������һ����������� ����ͷ�ļ�<stdlib.h>
//	for (i = 1; i<= 10; i++)
//	{
//		printf("�������(1-100)��");
//		scanf("%d", &n);
//		if (n > m)
//		{
//			printf("���ִ���\n");
//		}
//		else if (n < m)
//		{
//			printf("����С��\n");
//		}
//			else
//			{
//				printf("��ϲ�㣬�¶���\n");
//				flag = 1;
//				break;
//			}
//		if (10 == i && 1 != flag)
//		{
//			printf("ʧ��,����һ�֣�\n");
//		}
//	}
//	
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); // ʱ�����������������ɵ���ʼ��
//	do 
//	{
//		menu();
//		printf("ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 2:
//				break;
//			default:
//				printf("�������������ѡ��\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}
// //goto���
//int main()
//{
//	printf("hello world!\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("hello\n");
//	return 0;
//}
////�ػ�����
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[10] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣺��ĵ��Խ���1�����ڹػ���������롱����������ȡ���ػ�\n");
	printf("˵�ɣ�");
	scanf("%s", a);
	if (strcmp(a, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("����һ��������֯���ԵĻ���\n");
		goto again;
	}
	return 0;
}