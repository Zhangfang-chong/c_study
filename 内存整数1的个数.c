//求储存在内存中二进制整数1的个数
#include<stdio.h>
int main()
{
	int x=0;
	scanf("%d",&x);
	//整数在内存中以补码的形式储存，最低位与1按位与& 最低位是1结果为1 最低位为0结果为0 每次与后进行右移位
	int count=0;
	int i=0;
	for(i=0;i<32;i++)//32字节 补码形式储存 
	{
		if(((x>>i)&1)==1)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
 } 
