#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("*************************\n");
	printf("******1.sum 2.sub*******\n");
	printf("*************************\n");
	printf("******3.mul  4.div*******\n");
	printf("*************************\n");
};
int Add(int x, int y)
{
	return x + y;
};
int Sub(int x, int y)
{
	return x - y;
};
int Mul(int x, int y)
{
	return x * y;
};
int Div(int x, int y)
{
	return x / y;
};
//��װ�Ӽ��˳�����
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//pfArr�Ǻ���ָ������--ת�Ʊ� ����Ҫ�߳���switch case���;
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("����������������:>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x,y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("����������\n");
		}
	} while (input);
	return 0;
}