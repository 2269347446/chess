#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ROW 3
#define COL 3
#include<time.h>
#include <windows.h>

menu();
void game();
void initboard(char board[ROW][COL],int row,int col);//int
void displayboard(char board[ROW][COL], int row, int col);
player_set(char board[ROW][COL]);
comput_set(char board[ROW][COL]);
win(char a);
decide1(char board[ROW][COL], int x, int y);