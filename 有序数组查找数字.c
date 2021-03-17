#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=6;
	//写一个代码，在arr有序数组中找到7
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		if(k==arr[i])
		{
			printf("找到了，下标为：%d\n",i);
			break;
		}
	} 
	if(i==sz)
	{
		printf("找不到\n");
	}
	return 0;
} 
