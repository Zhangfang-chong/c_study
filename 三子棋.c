#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL],int row,int col);//��ʼ������ 
void DisplayBoard(char board[ROW][COL],int row,int col);//��ӡ���� 
void PlayMove(char board[ROW][COL],int row,int col);//����� 
void ComputerMove(char board[ROW][COL],int row,int col);//������ 
char IsWin(char board[ROW][COL],int row,int col);//�ж�˭ʤ�� 
void menu()
{
	printf("*************************\n");
	printf("*************************\n");
	printf("******1.play 0.quit******\n");
}
void game()
{
	char board[ROW][COL]={0};//������������Ϣ
	InitBoard(board,ROW,COL);//��ʼ������ 
	DisplayBoard(board ,ROW,COL);//��ӡ���� 
	char ret=0;//���ڽ����жϺ����ķ����ַ� 
	//����
	while(1)//һֱ�� ѭ������ֱ��ʤ��
	{
		
		PlayMove(board,ROW,COL);//����ƶ�
		DisplayBoard(board ,ROW,COL);//��ӡһ������
		//ÿ��һ����Ҫ�ж���һ��ߵ����Ƿ�Ӯ
		//�ж�����Ƿ�Ӯ 
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		ComputerMove(board,ROW,COL);//�����ƶ� 
		DisplayBoard(board ,ROW,COL);//��ӡһ������ 
		//�жϵ����Ƿ�Ӯ 
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
    }
    if(ret=='*')
    {
    	printf("���ʤ\n");
	}
	else if(ret=='#')
	{
		printf("����ʤ\n");
	}
	else if(ret=='Q')
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("������ѡ��\n");
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
		printf("\n");//��ӡһ������
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
		printf("\n");//��ӡ�ָ��� 
	}
}
void PlayMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("�����\n");
	while(1)
	{
		printf("������Ҫ�µ�����\n");
	    scanf("%d %d",&x,&y);
	    //�ж���������ĺϷ���
	    if(x>=1&&x<=row&&y>=1&&y<=col)
	    {
		    if(board[x-1][y-1]==' ')
		    {
			   board[x-1][y-1]='*';
			   break;
		    }
		    else
		    {
			   printf("�����걻ռ��\n");
	     	}
	    }
		else 
		{
			printf("����Ƿ�������������!\n");
		} 
	}	
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	printf("������\n");
	while(1)
	{
		int x=rand()%row;//rand���������ģ��row����0-row-1������� �� 0 1 2
		int y=rand()%col;
		//����������� �������0--2�������
		if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;
		}
	}
}
//�ж������Ƿ����ĺ��� ����1��ʾ�� 0��ʾ����
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
				return 0;//��ʾû�� 
			}
		}
	} 
	return 1;
} 
//�ж��Ƿ��ʤ�ĺ��� ��������*���Ӯ ��������#����Ӯ ���� Qƽ�� ����C���� ��Ϊchar�� 
char IsWin(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)//�ж������Ƿ���� 
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][0];
		}
    }
    for(i=0;i<col;i++)//�ж������Ƿ���� 
    {
    	if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ')
    	{
    		return board[0][i];
		}
	}
	//�ж������Խ��� 
	if(board[0][0]==board[1][1]&board[1][1]==board[2][2]&&board[0][0]!=' ')
	{
		return board[0][0];
	}
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]!=' ')
	{
		return board[0][2];
	}
	//�ж��Ƿ�ƽ��//
	if(1==IsFull(board,row,col))
	{
		return 'Q';
	} 
	else
	{
		return 'C';
	}
}  
