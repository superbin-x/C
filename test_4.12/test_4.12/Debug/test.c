
/*#include <stdio.h> //����һ��stdio.h���ļ�
//��һ������
int  main() //�����������������ڣ����ҽ���һ��
// mainǰ���int��ʾmain��������һ������ֵ������return 0;���Ӧ
{
	printf("hello world!\n"); //�������printf������ӡ�������⺯����
	return 0; //���� 0

}*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����������ĺ�
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2); //scanf�������뺯����&ȡ��ַ��
	//int sum = 0;  C���Թ涨����Ҫ�����ڵ�ǰ�����ǰ��
	sum = num1 + num2;
	printf("%d\n", sum);
	return 0;

}