#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����ݹ飺���»�С

//void pr(int n)
//{
//	if (n > 9)
//	{
//		pr(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	//printf("hehe\n");
//	//main();  //�ݹ鳣�����󣺳���ջ���
//	//����һ������ֵ��˳���ӡÿһλ
//	unsigned int num = 0;
//	printf("����һ������");
//	scanf("%d", &num);
//	//�ݹ�
//	pr(num);
//
//	return 0;
//}
// ��д�������ַ������ȣ�������
#include <string.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int my_strlen1(char* str)//�ݹ�ķ���
{
	if (*str != '\0')
	{
		return 1 + my_strlen1(str + 1);
	}
	else
	{
		return 0;
	}

}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);//arr�����顣���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
	int len1 = my_strlen1(arr);
	printf("len=%d\n", len);
	printf("len1=%d\n", len1);
	return 0;
}