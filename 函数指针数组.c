#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//函数指针--是指向函数的指针--存放函数的地址
//int main()
//{
//	int y = 10;
//	int x = 20;
//	int z = Add(x, y);
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	//&函数名和函数名都是函数的地址
//	int(*pa)(int, int) = Add;
//	//pa指针指向函数add
//	printf("%d", (*pa)(2, 3));
//	return 0;
//}
//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	int arr = "abcdef";
//	void (*p)(char*) = print;
//	(*p)(arr);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//int (*pa)(int, int) = Add;//存放Add函数地址的指针--函数指针
//	int ((*parr[4])(int, int)) = { Add,Sub,Mul,Div };//函数指针的数组，一次存放四个函数的地址
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));//可以*也可以不用*
//	}
//	return 0;
//}
char* my_strcpy(char* dest, const char* src);
int main()
{
	char*(*pf)(char*, const char*) = my_strcpy;//mystrcpy函数的函数指针
	char* (*pfArr[4])(char*, const char*) = my_strcpy;//能存放4个mystrcpy函数地址的数组
	return 0;
}