#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
// //ѭ����䣺while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("  %d", i);
//		i++;
//	}
//	printf("\n");
//	i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			break;
//		printf("  %d", i);
//		
//	}
//	printf("\n");
//	i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("  %d", i);
//		
//	}
//	return 0;
//}
//int main()
//{
//	int ch = getchar();//�����ַ�
//	int ch1 = 0;
//	putchar(ch);//��ӡ�ַ�
//	printf("  %c\n", ch);
//	while ((ch1 = getchar())!= EOF)//ctrl +z ��������
//	{
//		putchar(ch1);
//	}
//	return 0; 
//}
////while_getchar����������
//int main()
//{
//	int ch = 0;
//	char password[20] = {0};
//
//	printf("����passward��");
//	scanf("%s", password);
//	while ((getchar()) != '\n')
//	{
//		;
//	}
//	printf("����(Y/N)��");
//	ch = getchar();
//	if ('Y' == ch){
//		printf("����ɹ�\n");
//	}
//	else {
//		printf("��������\n");
//	}
//
//	return 0;
//}
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<'0' || ch>'9')
		{
			continue;
		}
		putchar(ch);
	}
	return 0;
}
////forѭ��
//int main()
//{
//	int i = 0;
//	//   ��ʼ��  �ж�   ����
//	for (i = 1; i <= 10; i++)
//	{
//		printf(" %d", i);
//	}
//	printf("\n");
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf(" %d", i);
//	}
//	printf("\n");
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf(" %d", i);
//	}
//	return 0;
//}