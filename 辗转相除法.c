//���������ֵ����Լ��---շת�����
#include<stdio.h>
int main()
{
	int m=0;
	int n=0;
	printf("��������������:");
	scanf("%d%d",&m,&n);
	if(m<n)
	{
		int temp=0;
		temp=n;
		n=m;
		m=temp;
	}
	int r=0;
	while(r=m%n)//m%n=0ʱ�������ж�Ϊ�� ����ѭ����m%n��Ϊ0ʱ���ж�Ϊ�棬����ѭ��
	{
		//r=m%n;
		m=n;
		n=r;
	}
	printf("�������ֵ����Լ��Ϊ��%d\n",n);
	return 0;
} 
