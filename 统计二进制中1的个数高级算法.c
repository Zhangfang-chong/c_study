#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count_bit_one(int n);
//n=13   13  1101
//n-1=12  12  1100
//n&(n-1)=1100
//12-1=11 11 1011
//12&11=1000
//n=n&(n-1)ÿִ��һ�β��� n�����ұߵ�1�ͻ��Ϊ0
//���㷨���õ���n������
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count=count_bit_one(a);
	printf("count=%d", count);
	return 0;
}
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;//ÿִ��һ�� count+1
	}
	return count;
}