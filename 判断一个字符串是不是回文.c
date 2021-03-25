#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#define maxSize 50
int find_Round(char ch[])
{
	int i = 0;
	int j = 0;
	while (ch[i] != '\0')
	{
		i++;
	}
	int temp = i - 1;
	char ch2[99] = { '\0' };
	for (i=temp; i >= 0; --i)
	{
		ch2[j++] = ch[i];
	}
	int flag = strcmp(ch,ch2);
	return flag;
}
int main()
{
	char ch[99] = { '\0' };
	printf("输入一个字符串\n");
	gets(ch);
	int flag = find_Round(ch);
	if (flag == 0)
	{
		printf("是回文\n");
	}
	else
	{
		printf("不是回文\n");
	}
	return 0;
}