#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//n�Ľײ����
//int facl(int x)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= x; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int facl2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * facl2(n - 1);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	int ret2 = 0;
//	printf("����nֵ��");
//	scanf("%d", &n);
//	ret = facl(n);  //ѭ����ʽ
//	printf("ret=%d\n", ret);
//	ret2 = facl2(n);  //�ݹ鷽ʽ
//	printf("ret2=%d\n", ret2);
//	return 0;
//}

//���n��쳲�������
//쳲��������У�1 1 2 3 5  8 11 17 28 ������������=ǰ������֮��
//int Fib(int n) //�ظ��������̫�࣬Ч�ʵ�
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("���n����");
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}