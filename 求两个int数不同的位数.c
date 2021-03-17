#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;//每执行一次 count+1
	}
	return count;
}
int get_diff(int m, int n)
{
	int temp = m ^ n;
	int count=count_bit_one(temp);
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int count=get_diff(m, n);
	printf("count=%d", count);
	return 0;
}