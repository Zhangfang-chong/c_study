#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p-=2;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",&arr[0]-&arr[9]);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		*end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen-���ַ�������
//	//�ݹ� ������
//	//
//	char arr[] = "bit123456";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);//��ַ-��Ԫ�صĵ�ַ
//	printf("%p\n", &arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//	//1.&arr-&��������ȡ��������������ĵ�ַ
//	//2.sizeof(arr)��������ʾ��������
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	/*int* pa = &a;
	int* pa = &b;
	int* pc = &c;*/
	//��������-�������
	//�ַ�����-����ַ�
	//ָ������-���ָ��
	/*int arr[10];*/
	int* arr2[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%p ", arr2[i]);
		printf("%d ", *arr2[i]);
	}

	return 0;
}