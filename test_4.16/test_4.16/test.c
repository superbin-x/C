#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>
//if���
//int main()
//{
//	int age = 10;
//	printf("��������1��");
//	scanf("%d", &age);
//	if (age < 18) {
//		printf("����֧��δ����\n");
//	}
//	printf("��������2��");
//	scanf("%d", &age);
//	if (age < 18) {
//		printf("˫��֧��δ����\n");
//	}
//	else {
//		printf("˫��֧������\n");
//	}
//	printf("��������3��");
//	scanf("%d", &age);
//	if (age < 18) {
//		printf("���֧��δ����\n");
//	}
//	else if (age >= 18 && age < 50) {
//			printf("���֧������\n");
//		}	
//		 else {
//			printf("���֧������\n");
//			}
//	return 0;
//}
//
//��ϰ��1.�ж�һ�����Ƿ�Ϊ������2.���1-100������
//int main()
//{
//	int i = 1;
//	int s = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		s = i % 2;
//		if (0 != s)
//		{
//			printf(" %d", i);
//		}
//	}
//
//	return 0;
//}
//switch���
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}