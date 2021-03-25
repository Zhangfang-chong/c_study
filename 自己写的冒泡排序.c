#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= sz - 1; i++)
	{
		for (j = 0; j < sz - i; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				int temp = *(arr+j);
				*(arr + j) = *(arr + j + 1);
				*(arr+j+1) = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 3,6,1,4,2,5,8,9,7,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}