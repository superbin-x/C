#include <stdio.h>
//#define MAX 10 //#define����ı�ʶ������
//enum color { //enum��>ö�ٳ���,���ܸ���
//	RED,
//	BLUE,
//	YELLOW,
//};
//int main()
//{ 
//	int a = 0;
//	const int b =10; //b�Ǳ��������г����ԣ���const ���εĳ�����(���ʻ��Ǳ���)��const:������
//	int num[10] = {0,1,2,3,4,5,6,7,8,9};
//	int num1[MAX] = {0,1,2,3,4,5,6,7,8,9};
//	printf("%d %d\n", a, num[8]);
//	a = 1;
//	printf("���¸��ƺ�%d %d\n", a, num1);
//	printf("%d\n", RED);//0
//	printf("%d\n", BLUE);//1
//	printf("%d\n", YELLOW);//2
//	return 0;
//}
//�ַ������ͣ���˫���������һ���ַ�����ӡ��ʶ��%s
//int main()
//{
//	char arr1[] = "abc";//���� ��"abc"��>��a����b����c����\0��,�ַ���Ĭ�Ϻ�'\0'��
//							//��\0���ַ����Ľ�����־�������ַ�������
//	char arr2[] = { 'a','b','c','\0'};//��Ҫ�ӡ�\0��
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//strlen��>�����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
#include <string.h>
int main()
{
	printf("%d\n", strlen("c:\test\32\test.c")); //�ַ������ȣ�13��\tΪˮƽ�Ʊ����\32Ϊһ���˽�����
	return 0;
}