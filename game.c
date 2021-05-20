#include"game.h"
#pragma warning( disable : 4789)
menu()
{
	printf("***********************\n");
	printf("**** 1.play 0.exit ****\n");
	printf("***********************\n");
}
void game()
{
	char board[ROW][COL];
	initboard(board,ROW,COL);
	displayboard(board, ROW, COL);
	//printf("you first>>");

		char decide = '#';
		do
		{
			//player_set(board);
			decide = player_set(board);
			if (decide != '#')
			{
				win(decide);
				break;
			};
			decide = comput_set(board);
			if (decide != '#')
			{
				win(decide);
				break;
			};
			
		} while (1);
		displayboard(board, ROW, COL);


}


void initboard(char board[ROW][COL], int row, int col)
{
	int a ;int b;
	for (a = 0;a < row;a++)
	{
		for (b = 0;b < col;b++)
		{
			board[a][b] = ' ';
		}
	}
}

void displayboard(char board[ROW][COL], int row, int col)
{
	/*
	   |   |   
	---|---|---
	   |   |
    ---|---|---
	   |   |
	*/
	int a = 0;
	for (a=0;a<row;a++)
	{
		int b = 0;
		for (b = 0;b < col;b++)
		{
			printf(" %c ",board[a][b]);
			if (b < col - 1)
				printf("|");
		};
		printf("\n");
		if (a<row-1)
			for (b = 0;b < row;b++) 
			{
				printf("---");
			if (b < col - 1)
				printf("|");
			}
		printf("\n");
	}
}



player_set(char board[ROW][COL]) 
{
	int a; int b;
	/*printf("player set..");*/
	while (1)
	{
		
		scanf("%d%d", &a, &b);
		system("cls");
		if (a >= 1 && a <= ROW && b <= COL && b >= 1)
		{
			if (board[a - 1][b - 1] == ' ')
			{
				board[a - 1][b - 1] = 'O';
				break;
			}
			else
			{
				displayboard(board, ROW, COL);
				printf("此处有棋子\n");
			};
		}
		else
		{
			system("cls");
			
			displayboard(board,ROW,COL);
			printf("坐标非法");
		};
			
		
	}
displayboard(board,ROW,COL);
Sleep(1000);
return decide1(board, a, b);
}
comput_set(char board[ROW][COL])
{
	system("cls");
	srand((unsigned int)time(NULL));
	while (1) {
		int a = rand() % ROW; int b = rand() % COL;
		if (board[a][b] == ' ')
		{
			board[a][b] = 'X';
			displayboard(board, ROW, COL);
			return decide1(board, a+1, b+1);
			
		};
	};
}
decide1(char board[ROW][COL],int x,int y)
{
	int a = x - 1;int b = y - 1;
		if (board[a][b] == board[a + 1][b] && board[a][b] == board[a + 2][b])//下
			return board[a][b];
		else if (board[a][b] == board[a - 1][b] && board[a][b] == board[a - 2][b])//上
			return board[a][b];
		else if (board[a][b] == board[a][b+1] && board[a][b] == board[a][b+2])//右
			return board[a][b];
		else if (board[a][b] == board[a ][b-1] && board[a][b] == board[a][b-2])//下
			return board[a][b];
		else if (board[a][b] == board[a + 1][b+1] && board[a][b] == board[a + 2][b+2])//右下
			return board[a][b];
		else if (board[a][b] == board[a + 1][b-1] && board[a][b] == board[a + 2][b-2])//左下
			return board[a][b];
		else if (board[a][b] == board[a - 1][b+1] && board[a][b] == board[a - 2][b+2])//右上
			return board[a][b];
		else if (board[a][b] == board[a - 1][b-1] && board[a][b] == board[a - 2][b-2])//左下
			return board[a][b];
	char c = '*';
	for (a = 0;a < ROW;a++)
	{
		
		for (b = 0;b < COL;b++)
		{
			
			if (board[a][b] == ' ')//
				c='#';
		};
	};
	return c;
}
win(char a)
{
	if (a == 'O')
	printf("player win!!!!!!!\n");
	else if (a == 'X')
	printf("computer win...\n");
	else if (a == '*')
	printf("chess FULL\n");
	
}