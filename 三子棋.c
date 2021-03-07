#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL],int row,int col);//初始化棋盘 
void DisplayBoard(char board[ROW][COL],int row,int col);//打印棋盘 
void PlayMove(char board[ROW][COL],int row,int col);//玩家走 
void ComputerMove(char board[ROW][COL],int row,int col);//电脑走 
char IsWin(char board[ROW][COL],int row,int col);//判断谁胜利 
void menu()
{
	printf("*************************\n");
	printf("*************************\n");
	printf("******1.play 0.quit******\n");
}
void game()
{
	char board[ROW][COL]={0};//数组存放棋盘信息
	InitBoard(board,ROW,COL);//初始化棋盘 
	DisplayBoard(board ,ROW,COL);//打印棋盘 
	char ret=0;//用于接收判断函数的返回字符 
	//下棋
	while(1)//一直下 循环过程直到胜出
	{
		
		PlayMove(board,ROW,COL);//玩家移动
		DisplayBoard(board ,ROW,COL);//打印一下棋盘
		//每走一步都要判断玩家或者电脑是否赢
		//判断玩家是否赢 
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		ComputerMove(board,ROW,COL);//电脑移动 
		DisplayBoard(board ,ROW,COL);//打印一下棋盘 
		//判断电脑是否赢 
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
    }
    if(ret=='*')
    {
    	printf("玩家胜\n");
	}
	else if(ret=='#')
	{
		printf("电脑胜\n");
	}
	else if(ret=='Q')
	{
		printf("平局\n");
	}
}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("请重新选择\n");
				break;
		}
	}while(input);
	
}
int main()
{
	test();
	return 0;
}
void InitBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			board[i][j]=' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");//打印一行数据
		if(i<row-1)
		{
			for(j=0;j<col;j++)
			{
				printf("---");
				if(j<col-1)
				{
					printf("|");
				}
			}
		}
		printf("\n");//打印分隔行 
	}
}
void PlayMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("玩家走\n");
	while(1)
	{
		printf("请输入要下的坐标\n");
	    scanf("%d %d",&x,&y);
	    //判断输入坐标的合法性
	    if(x>=1&&x<=row&&y>=1&&y<=col)
	    {
		    if(board[x-1][y-1]==' ')
		    {
			   board[x-1][y-1]='*';
			   break;
		    }
		    else
		    {
			   printf("该坐标被占用\n");
	     	}
	    }
		else 
		{
			printf("坐标非法，请重新输入!\n");
		} 
	}	
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	printf("电脑走\n");
	while(1)
	{
		int x=rand()%row;//rand生成随机数模上row生成0-row-1的随机数 即 0 1 2
		int y=rand()%col;
		//电脑随机下棋 随机生成0--2的随机数
		if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;
		}
	}
}
//判断棋盘是否满的函数 返回1表示满 0表示不满
int IsFull(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
			{
				return 0;//表示没满 
			}
		}
	} 
	return 1;
} 
//判断是否获胜的函数 函数返回*玩家赢 函数返回#电脑赢 返回 Q平局 返回C继续 故为char型 
char IsWin(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)//判断三行是否相等 
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][0];
		}
    }
    for(i=0;i<col;i++)//判断三列是否相等 
    {
    	if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ')
    	{
    		return board[0][i];
		}
	}
	//判断两个对角线 
	if(board[0][0]==board[1][1]&board[1][1]==board[2][2]&&board[0][0]!=' ')
	{
		return board[0][0];
	}
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]!=' ')
	{
		return board[0][2];
	}
	//判断是否平局//
	if(1==IsFull(board,row,col))
	{
		return 'Q';
	} 
	else
	{
		return 'C';
	}
}  
