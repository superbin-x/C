#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ�𣿣�0/1����");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("����õ���offer��\n");
//	else
//		printf("�ؼ������\n");
//	return 0;
//}
//ѭ�����
//int main()
//{
//	int input = 0;
//	int i = 0;
//	printf("����γ̣�\n");
//	printf("���Ʊ������500�򣿣�0/1����");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�ɹ���\n");
//	else {
//		printf("��ʵѧϰ��ÿ����100�У�\n");
//		while (i < 500) {
//			i += 100;
//			printf("����������%d\n", i);
//		};
//		printf("��Ϊ��ţ���ɹ���\n");
//	}
//	return 0;
//}
//���������ú������������������
//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b;
//	int sum = 0;
//	printf("����������ֵ��");
//	scanf("%d%d", &a, &b);
//	sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//������1
//int main()
//{
//	int a = 5 / 2; //��
//	int b = 5 % 2; //ȡģ��ȡ�ࣩ
//	int c = 1,d,e,f;
//	printf("%d  b=%d\n", a, b);
//	d = c << 1; //����һλ c: 000000001��>00000010
//	e = c >> 1; //����һλ c: 000000001��>00000000   1
//	f = c & d; // & ��λ�� f: 000000001 & 00000010
//	printf("c=%d  %d  %d %d\n", c, d, e, f);
//	c += 2; //c=c+2
//	printf("+=��c=%d\n", c);
//	c = b++; //����++���Ƚ�b��ֵ����c��b�ټ�1
//	printf("b++��c=%d b=%d\n", c, b);
//	a = ++b; //ǰ��++����b��1���ٽ�b��ֵ����c
//	printf("++b��a=%d b=%d\n", a, b);
//	a = 10;
//	printf("a=%d\n", a);
//	b = a--;
//	printf("a--��a=%d b=%d\n", a, b);
//	b = --a;
//	printf("--a��a=%d b=%d\n", a, b);
//	return 0;
//}
//������2
//int main()
//{
//	int s = 0;
//	int a = 0; //4�ֽڣ�32λ 00000000 00000000 00000000 00000000
//	int b = ~a;//��a��λȡ�� 11111111 11111111 11111111 11111111 ��ԭ�밴λȡ����>����+1-->���룩
//  //�������ڴ��д洢���ǲ��� 11111111 11111111 11111111 11111111
//	           //����-1=���� 11111111 11111111 11111111 11111110
//			 //����ȡ��=ԭ�� 10000000 00000000 00000000 00000001������λ���䣩
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("b=%d\n", b);
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr)); //���������С����λ�ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//����Ԫ�ظ���
//	s = (a > b ? a + b : a - b); //����������
//	printf("s=%d\n", s);
//	s = (a < b ? a + b : a - b);
//	printf("s1=%d\n", s);
//	return 0;
//}
//�����ؼ���
//void test()
//{
//	static int  a = 1;//a��һ����̬�ľֲ�����
//	int b = 1;
//	a++;
//	b++;
//	printf("a=%d b=%d\n", a, b);
//
//}
//extern int ADD(int, int); //�����ⲿ����ADD()����
//int main()
//{
//	register int a = 0; //���齫a�洢���Ĵ���
//	typedef unsigned int u_int;//��unsigned int��������u_int
//	u_int num = 1; //�ȼ���unsigned int num = 1
//	int n, m;
//	extern sum; //�����ⲿ����sum����
//	printf("������������");
//	scanf("%d%d", &n, &m);
//	sum = ADD(n, m);
//	printf("sum=%d\n", sum);
//	while (num < 5)
//	{
//		test();
//		num++;
//	}
//	
//	return 0;
//}
#define A 10
//������ʽ
int MAX(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}
#define MAX1(X,Y) X>Y?X:Y //#define����귽ʽ
int main()
{
	int a = 10;
	int b = 20;
	int max;
	printf("A=%d a=%d b=%d\n", A, a, b);
	max = MAX(a, b);
	printf("������ʽmax=%d\n", max);
	max = MAX1(a, b); // max=(a>b?a:b)
	printf("�궨�巽ʽmax1=%d\n", max);
	return 0;
}