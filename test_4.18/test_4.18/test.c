#define  _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>
//// do while ѭ��
//int main()
//{
//	int i = 1;
//	do {
//		printf("  %d", i);
//		i++;
//	} while (i <= 10);
//	printf("\n");
//	i = 1;
//	do {
//		if (5 == i)
//		{
//			break;
//		}
//		printf("  %d", i);
//		i++;
//	} while (i <= 10);
//	printf("\n");
//	i = 1;
//	do {
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("  %d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
// ��ϰ������n�Ľײ�
//int main()
//{
//	int i = 0;
//	int s = 1;
//	int n = 0;
//	printf("������n:");
//	scanf("%d", &n);
//	if (0 == n)
//	{
//		printf("n!=%d\n",s = 0);
//	}
//	else {
//		for (i = 1; i <= n; i++)
//		{
//			s = s * i;
//		}
//		printf("n!=%d\n", s);
//	}
//}
//����1��+2��+����+10��
//int main()
//{
//	int n = 0;
//	int s = 1;
//	int sum = 0;
//	for(n=1;n<=10;n++)
//	{
//		s = s * n;
//		sum = sum + s;
//		
//	}
//	printf("1��+2��+����+10=%d\n", sum);
//	return 0;
//}
// ���ַ�����
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;
	int sz = sizeof(a) / sizeof(a[0]);  //����Ԫ�ظ���
	int l = 0;   //���±�
	int r = sz - 1;  //���±�
	int m = 0;
	printf("�����������1-10����");
	scanf("%d", &n);
	while (l <= r) 
	{
		m = (l + r) / 2;
		if (n < a[m])
		{
			r = m - 1;
		}
		else if (n > a[m])
			{
				l = m + 1;
			}
			else
			{
				printf("�ҵ��ˣ��±�Ϊ��%d\n", a[m]);
				break;
			}
	}
	if (l > r)
	{
		printf("��\n");
	}	
	return 0;
}
//
#include <string.h>
//
//int main()
//{
//	char a[] = "hello word!";
//	char a1[] = "###########";
//	int i = 0;
//	int l = 0;
//	int r = strlen(a) - 1;
//	while(l <= r)
//	{
//		a1[l] = a[l];
//		a1[r] = a[r];
//		l++;
//		r--;
//		printf("%s\n", a1);
//	}
//	return 0;
//}
////
//int main()
//{
//	int i = 0;
//	char password[15] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("�������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456789")==0) //==����ֱ�������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯����strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("�������������24h���ٵ�¼\n");
//	}
//	return 0;
//}