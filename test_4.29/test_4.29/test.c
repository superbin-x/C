#include <stdio.h>


//������Ϊ��������
//ð������
//void bobble(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ�������Ѿ�����
//		//ÿһ��ð������:����
//		int j = 0;
//		for (j = 0; j < (sz - 1)-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;	
//				flag = 0;//����������ȫ����
//			}
//		}
//		if (1 == flag)
//		{
//			break;//��������forѭ�������ǽ���if���
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 7,8,9,4,6,21,5,7,9,5,95,5,51 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bobble(arr, sz);//arr�����飬������arr���д��Σ�ʵ���ϴ���ȥ��������arr���׵�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//������
int main()
{
	int arr[] = { 1,4,5,6,7,8,5 };
	printf(" arr    =%p\n", arr);//����������Ԫ�صĵ�ַ
	printf(" &arr[0]=%p\n", &arr[0]);
	printf("\n");
	printf(" &arr   =%p\n", &arr);
	//1. sizeof(������)����������ʾ��������
	//2. &����������������ʾ�������顪��>ȡ����������ĵ�ַ

	return 0;
}