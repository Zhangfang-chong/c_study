#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	//printf("%s\n",p)
//	int* parr[4];//存放整形指针的数组
//	char* pch[5];//存放字符指针的数组
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
//	int* parr[] = { arr1,arr2,arr3 };//将三个数组的地址存储到数组指针parr
//	int i = 0;
//	for (i = 0; i < 3; ++i)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");//数组指针的用法
//	}
//	return 0;
//}
//数组指针--指针
//int main()
//{
//	int* p = NULL;//p是整形指针--指向整形的指针-可以存放整形变量的地址
//	//数组指针--指向数组的指针--存放数组的地址
//	int arr[10] = { 0 };
//	//arr--首元素地址
//	//&arr[0]-首元素地址
//	//&arr-数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//定义数组指针
//	//p就是数组指针
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
//		printf("%d ", (*pa)[i]);//*pa此时相当于arr，一般不这么用
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
			printf("%d ", *(*(p + i)+j));//*(p+j)找到每一行的地址 每一行有五个元素 +j找到五个元素 再加*号解引用找到每个元素
		}
		printf("\n");
	}

}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);//arr-数组名-数组名首元素地址，把二维数组当做一维数组，有三行，第一行为首元素地址
	//arr[i]==*(arr+i)==*(p+i)==p[i];
	return 0;
}
