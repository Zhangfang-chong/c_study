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
//	//strlen-求字符串长度
//	//递归 计数器
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
//	printf("%p\n", &arr[0]);//地址-首元素的地址
//	printf("%p\n", &arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//	//1.&arr-&数组名，取出的是整个数组的地址
//	//2.sizeof(arr)数组名表示整个数组
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
	//整形数组-存放整形
	//字符数组-存放字符
	//指针数组-存放指针
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