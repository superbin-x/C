#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 12;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//�ַ����⺯��ѧϰ
#include <string.h>
//int main()
//{
//	//strcpy ���ַ�������
//	//strlen �������ַ�������
//	char arr1[] = "abcdef";
//	char arr2[10] = "**********";
//	strcpy(arr2, arr1); //arr1�е��ַ���������arr2��
//	printf("%s\n", arr2);
//
//	return 0;
//}
////�ڴ�����⺯��
////memset :�ڴ�����
//int main()
//{
//	char arr[] = "hello world";
//	int a = 0;
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	a = strlen(arr);
//	printf("%d\n", a);
//	return 0;
//}
//�Զ��庯������ȡ�������Ľϴ�ֵ

//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	printf("������������");
//	scanf("%d%d", &num1, &num2);
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0; 
//}
//�����������ͱ�����ֵ
//void Swap1(int x, int y)  //x���������е�a�� y���������е�bδ��������
////x��yΪ��ʽ����
//{
//	int tem = 0;
//	tem = x;
//	x = y;
//	y = tem;
//
//}
//void Swap2(int* pa,int* pb)//��������a��b���������ϵ
//{
//	int tem = 0;
//	tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int t = 0;
//	t = a;
//	a = b;
//	b = t;
//	printf("������a=%d b=%d\n", a, b);
//	//��ֵ����
//	Swap1(a, b);    //�������⣬û�н����ɹ�
//	//a��bΪʵ�ʲ�������ȷ����ֵ
//	printf("���ú���1:a=%d b=%d\n", a, b);//��ֵ���ã��ı��β�xy�����ı�ʵ��ab
//	//��ֵ����
//	Swap2(&a, &b);//&a��&bΪʵ�ʲ����� ��ȷ����ֵ
//	printf("���ú���2:a=%d b=%d\n", a, b);//���ú����ڲ������ı䣬���µ��ú����ⲿ�����ı�
//	return 0;
//}
