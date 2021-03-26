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
//封装加减乘除函数
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//pfArr是函数指针数组--转移表 不需要冗长的switch case语句;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x,y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("请重新输入\n");
		}
	} while (input);
	return 0;
}