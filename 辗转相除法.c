//求两个数字的最大公约数---辗转相除法
#include<stdio.h>
int main()
{
	int m=0;
	int n=0;
	printf("请输入两个数字:");
	scanf("%d%d",&m,&n);
	if(m<n)
	{
		int temp=0;
		temp=n;
		n=m;
		m=temp;
	}
	int r=0;
	while(r=m%n)//m%n=0时，条件判断为假 跳出循环，m%n不为0时，判断为真，继续循环
	{
		//r=m%n;
		m=n;
		n=r;
	}
	printf("两个数字的最大公约数为：%d\n",n);
	return 0;
} 
