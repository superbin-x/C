#include <stdio.h>
//ָ��
//int main()
//{
//	int a = 1;
//	int* p; //pΪ����ָ�������������ŵ�ַ�ı���  ���ͣ�int* char* ����
//	p = &a;
//	printf("a=%d\n", a);
//	printf("a��ַ��%p\n", &a);
//	printf("p=%p\n", p);
//	printf("p�Ĵ�С��%d\n", sizeof(p));// 32λ��
//	*p = 2;  //*�������ò�����(��ӷ��ʲ�����)  *p=2��>��ָ�����p�����ò������ҵ�pָ��Ķ���a,����2���Ƹ�a
//	printf("*p=a=%d\n", a);
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(short*));
//	return 0;
//}
////�ṹ�� ���Լ�������һ�����ͣ��ؼ��֣�struct
struct BOOK
{
	char name[30];
	char author[10];
	short price;
}; //;������
int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����a
	struct BOOK a = { "һ����","����",100 };  //�Խṹ�����a��ֵ
	struct BOOK* b = &a;  // b���ṹ������ָ�룬ָ��ṹ�����a�ĵ�ַ
	//���ýṹ��ָ��b��ӡ
	printf("b������%s\n", b->name);
	printf("���ߣ�%s\n", b->author);
	printf("�۸�%dԪ\n", b->price);
	printf("a������%s\n", a.name);
	printf("���ߣ�%s\n", a.author);
	printf("�۸�%dԪ\n", a.price);
	// .���������ṹ����� . ��Ա
	//->���������ṹ��ָ�� -> ��Ա
	a.price = 98;
	printf("�޸ĵļ۸�%dԪ\n", a.price);
	strcpy(a.name, "������"); //�޸��������ַ�������һ���顪��>������;strcpy �ַ�������
	printf("�޸ĵ�������%s\n", a.name);
	return 0;
}

