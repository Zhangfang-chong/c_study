#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	//printf("%s\n",p)
//	int* parr[4];//�������ָ�������
//	char* pch[5];//����ַ�ָ�������
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	return 0;
//}
// 
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };//����������ĵ�ַ�洢������ָ��parr
//	int i = 0;
//	for (i = 0; i < 3; ++i)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");//����ָ����÷�
//	}
//	return 0;
//}
//����ָ��--ָ��
//int main()
//{
//	int* p = NULL;//p������ָ��--ָ�����ε�ָ��-���Դ�����α����ĵ�ַ
//	//����ָ��--ָ�������ָ��--�������ĵ�ַ
//	int arr[10] = { 0 };
//	//arr--��Ԫ�ص�ַ
//	//&arr[0]-��Ԫ�ص�ַ
//	//&arr-����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//��������ָ��
//	//p��������ָ��
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);//*pa��ʱ�൱��arr��һ�㲻��ô��
//	}
//	return 0;
//}
void print1(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i)+j));//*(p+j)�ҵ�ÿһ�еĵ�ַ ÿһ�������Ԫ�� +j�ҵ����Ԫ�� �ټ�*�Ž������ҵ�ÿ��Ԫ��
		}
		printf("\n");
	}

}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);//arr-������-��������Ԫ�ص�ַ���Ѷ�ά���鵱��һά���飬�����У���һ��Ϊ��Ԫ�ص�ַ
	//arr[i]==*(arr+i)==*(p+i)==p[i];
	return 0;
}
