
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////����������
//int main()
//{
//	int a = 7 / 2;//��3��1
//	int b = 7 % 2;
//	float c = 7 / 2.0;
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//	printf("c= %f\n", c);
//
//
//
//	return 0;
//}

////��λ������
//int main()
//{
//	//>> ���Ʋ�����:
//	//1. �������ƣ��ұ߶�������߲�ԭ����λ
//	//2. �߼����ƣ��ұ߶�������߲�0
//	int a = 8;       //  00000000 00000000 00000000 00001000 
//	int b = a >> 1; //  (0)00000000 00000000 00000000 0000100(0)
//
//	int c = -1;//���������Ʊ�ʾ��ԭ�� ���� ����
//	//�洢���ڴ���ǲ���
//					//	  100000000 000000000 00000000 00000001   ԭ��
//					//	  111111111 111111111 11111111 11111110   ����
//					//    111111111 111111111 11111111 11111111   ����=����+1
//	int d = c >> 1;	//   (1)111111111 111111111 11111111 1111111(1)
//	//>> ���Ʋ���������߶������ұ߲�0
//	int n = a << 1;
//
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//	printf("c= %d\n", c);
//	printf("d= %d\n", d);
//	printf("n= %d\n", n);
//
//	return 0;
//}

//λ������
//int main()
//{
//	int a = 2;    //010
//	int b = 6;    //110
//	int c = a & b;//010  ��λ�룺ͬ1Ϊ1������Ϊ0
//	int d = a | b;//110  ��λ��ͬ0Ϊ0������Ϊ1
//	int n = a ^ b;//100  ��λ���ͬΪ0����ͬΪ1
//	printf("c= %d\n", c);
//	printf("d= %d\n", d);
//	printf("n= %d\n", n);
//	return 0;
//}
////��������������ֵ����ʹ���м���ʱ����
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ\n");
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//
//	//�Ӽ��������ܻ����
//	a = a + b;//a=8
//	b = a - b;//b=3
//	a = a - b;//a=5
//	printf("������\n");
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//
//	//��򷨣�ִ��Ч�ʲ��ߣ��ɶ��Բ�ǿ
//	a = 3;     //011  3
//	b = 5;     //101  5
//	a = a ^ b; //110  6
//	b = a ^ b; //011  5
//	a = a ^ b; //101  3
//	printf("������\n");
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//	return 0;
//}
 
////ͳ�������������ڴ���1�ĸ�����������1�ĸ�����
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	printf("����num: ");
//	scanf("%d", &num);
//	//
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("1. ���� 1�ĸ�����%d\n", count);
//
//	////ֻ�ܲ���������
//	count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("2. ���� 1�ĸ�����%d\n", count);
//	return 0;
//}
//
////��ֵ������
//int main()
//{
//	int a = 5;
//	a = a + 2;
//	a += 2; //���ϸ�ֵ��
//
//
//
//
//	return 0;
//}

//��Ŀ������
int main()
{
	int a = 9;
	int* p;
	char ch[10] = { 0 };
	printf("!a= %d\n", !a);
	p = &a;//ȡ��ַ
	*p;//�����ò�����
	printf("p= %p\n", p);
	printf("*p= %d\n", *p);
	printf("sizeof(a)= %d\n", sizeof(a));//������ռ�ռ��С
	printf("sizeof(p)= %d\n", sizeof(p));
	printf("sizeof(ch)= %d\n", sizeof(ch));
	printf("sizeof(char [10])= %d\n", sizeof(char [10]));
	return 0;
}