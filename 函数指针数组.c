#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//����ָ��--��ָ������ָ��--��ź����ĵ�ַ
//int main()
//{
//	int y = 10;
//	int x = 20;
//	int z = Add(x, y);
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	//&�������ͺ��������Ǻ����ĵ�ַ
//	int(*pa)(int, int) = Add;
//	//paָ��ָ����add
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
//	//int (*pa)(int, int) = Add;//���Add������ַ��ָ��--����ָ��
//	int ((*parr[4])(int, int)) = { Add,Sub,Mul,Div };//����ָ������飬һ�δ���ĸ������ĵ�ַ
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));//����*Ҳ���Բ���*
//	}
//	return 0;
//}
char* my_strcpy(char* dest, const char* src);
int main()
{
	char*(*pf)(char*, const char*) = my_strcpy;//mystrcpy�����ĺ���ָ��
	char* (*pfArr[4])(char*, const char*) = my_strcpy;//�ܴ��4��mystrcpy������ַ������
	return 0;
}