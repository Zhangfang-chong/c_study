//��������������ֵ 
#include<stdio.h>
int main()
{
	//1.��ʱ������
	int a=3;
	int b=5;
	int temp=b;
	b=a;
	a=temp;
	printf("a=%d b=%d\n",a,b);
	//2.�Ӽ���---���ܻ���� 
	int x=3;
	int y=5;
    x=x+y;
	y=x-y;
	x=x-y;
	printf("x=%d y=%d\n",x,y);
	//3.���--��򰴶�����λ ��ͬΪ0��ͬΪ1 ������ʽ
	int m=3;//3--011 5--101 3^5=110  110^5(101)=011 
	int n=5;
	m=m^n;
	n=m^n;//110^5(101)=011(3)
	m=m^n;//110^(011)3=101(5)
	printf("m=%d n=%d\n",m,n);
	return 0;
}
 
