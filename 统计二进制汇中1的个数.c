#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count_bit_one(unsigned int n);
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d", count);
	return 0;
}
int count_bit_one(unsigned int n)//无符号数 把负数的补码的符号位也作为有效数，防止负数进入函数无法统计
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}