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
    	printf("请选择:\n");
    	scanf("%d",&input);
    	switch(input)
    	{
    		case 1:
    			game();
    			break;
    		case 0:
				printf("退出游戏\n");
			default:
			 	printf("输入错误，请重新选择\n");
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
	//雷的信息存储，两个棋盘 一个负责存储雷 一个负责排查雷
	//9*9的玩家棋盘 设置11*11为了判断周围八个坐标是坐标全部合法 减少代码繁琐性 
	//1.布置好的雷的信息 1为雷 0不是雷 
	char mine[ROWS][COLS]={0};
	//2.排查出的雷的信息
	char show[ROWS][COLS]={0};
	InitBoard(mine,ROWS,COLS,'0');//初始化棋盘 
	InitBoard(show,ROWS,COLS,'*');
	DisplayBoard(show,ROW,COL);//打印棋盘 
	SetMine(mine,ROW,COL);//布置雷 
	FindMine(mine,show,ROW,COL);//扫雷 
	 
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
}//初始化棋盘 雷盘全部初始化'0';排雷盘全部初始化 '*'
void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
	int i=0;
	int j=0;
	//打印列号 
	for(i=0;i<=row;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		//打印行号 
		printf("%d " ,i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}//打印棋盘 传入的是11*11的棋盘 只需打印中间9*9 
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
}//遍历坐标周围八个位置 判断是否有雷 减去字符0转化为数字 
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0;
	int y=0;
	int win=0;
	while(win<row*col-Easy_count)
	{
		printf("请选择要排雷的坐标\n");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=9&&y>=1&&y<=9)
		{
			//坐标合法
			//封装一个排雷函数
			if(mine[x][y]=='1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine,ROW,COL);
				break;
			} 
			else
			{
				int count=get_mine_count(mine,row,col);
				show[x][y]=count+'0';//+'0'转化为字符
				DisplayBoard(show,ROW,COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}
