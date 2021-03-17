#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define Easy_count 10 
void menu();
void test();
void game();
void InitBoard(char board[ROWS][COLS],int rows,int cols,char ch);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
int get_mine_count(char mine[ROWS][COLS],int x,int y);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
int main()
{
	test();
	return 0;
}
void test()
{
	srand((unsigned int)time(NULL));
	int input=0;
    do
    {
    	menu();
    	printf("��ѡ��:\n");
    	scanf("%d",&input);
    	switch(input)
    	{
    		case 1:
    			game();
    			break;
    		case 0:
				printf("�˳���Ϸ\n");
			default:
			 	printf("�������������ѡ��\n");
			 	break;
		}
	}while(1);
}
void menu()
{
	printf("******************************\n");
	printf("*********1.play***************\n");
	printf("*********2.quit***************\n");
	printf("******************************\n");
}
void game()
{
	//�׵���Ϣ�洢���������� һ������洢�� һ�������Ų���
	//9*9��������� ����11*11Ϊ���ж���Χ�˸�����������ȫ���Ϸ� ���ٴ��뷱���� 
	//1.���úõ��׵���Ϣ 1Ϊ�� 0������ 
	char mine[ROWS][COLS]={0};
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS]={0};
	InitBoard(mine,ROWS,COLS,'0');//��ʼ������ 
	InitBoard(show,ROWS,COLS,'*');
	DisplayBoard(show,ROW,COL);//��ӡ���� 
	SetMine(mine,ROW,COL);//������ 
	FindMine(mine,show,ROW,COL);//ɨ�� 
	 
}
void InitBoard(char board[ROWS][COLS],int rows,int cols,char ch)
{
	int i=0;
	int j=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			board[i][j]=ch;
		}
	}
}//��ʼ������ ����ȫ����ʼ��'0';������ȫ����ʼ�� '*'
void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
	int i=0;
	int j=0;
	//��ӡ�к� 
	for(i=0;i<=row;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		//��ӡ�к� 
		printf("%d " ,i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}//��ӡ���� �������11*11������ ֻ���ӡ�м�9*9 
void SetMine(char board[ROWS][COLS],int row,int col)
{
	int count=Easy_count;
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
    return	mine[x-1][y]+mine[x-1][y-1]+mine[x-1][y+1]+mine[x][y-1]+mine[x][y+1]+mine[x+1][y]+mine[x+1][y+1]+mine[x+1][y-1]-8*'0';
}//����������Χ�˸�λ�� �ж��Ƿ����� ��ȥ�ַ�0ת��Ϊ���� 
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0;
	int y=0;
	int win=0;
	while(win<row*col-Easy_count)
	{
		printf("��ѡ��Ҫ���׵�����\n");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=9&&y>=1&&y<=9)
		{
			//����Ϸ�
			//��װһ�����׺���
			if(mine[x][y]=='1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine,ROW,COL);
				break;
			} 
			else
			{
				int count=get_mine_count(mine,row,col);
				show[x][y]=count+'0';//+'0'ת��Ϊ�ַ�
				DisplayBoard(show,ROW,COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}
