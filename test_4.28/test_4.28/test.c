#include <stdio.h>
#include <string.h>

//һά����

//int main()
//{
//	int arr[10];//����Ĵ��������� ������[Ԫ�ظ���]��
//	char arr1[5];
//	int arr2[10] = {1,2,3};//����ȫ��ʼ����ʣ��Ԫ��Ĭ��Ϊ0
//	char arr3[] = "abcdef";
//	char arr4[] = { 'a','b','c','d','e','f' };
//	int i = 0;
//	int len = strlen(arr3);
//	printf("%d\n", sizeof(arr3));//sizeof����arr3��ռ�ռ�Ĵ�С
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr3));//strlen���ַ����ĳ��ȣ���\0��ǰ���ַ����� 
//	printf("%d\n", strlen(arr4));//���ֵ
//	//һά�����ʹ��
//	printf("%c\n", arr3[4]);
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c", arr3[i]);
//	}
//	printf("\n");
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr3[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//�������ڴ�����������ŵ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);//�������ڴ�����������ŵ�
//	}
//	return 0;
//}
//��ά����
int main()
{
	int arr[3][4];//��ά���飺3��4��
	char arr1[5][6];
	int arr2[2][4] = { 1,2,3,4,5 };
	int arr3[2][4] = { {1,2,3},{4,5} };
	int arr4[][4] = { 1,2,3,4,5 };//�п���ʡ�ԣ��в�����
	int i = 0;
	printf("arr2[2][4]:\n");
	for (i = 0; i < 2; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d  ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("arr3[2][4]:\n");
	for (i = 0; i < 2; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d  ", arr3[i][j]);
		}
		printf("\n");
	}
	printf("&arr3[2][4]:\n");
	for (i = 0; i < 2; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d]=%p\n", i, j, &arr3[i][j]);
		}
	}
	return 0;
}