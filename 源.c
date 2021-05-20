#define _CRT_SECURE_NO_WARNINGS 1

//#include"game.h"

int main()
{
	int bd[0][2];
		int a;int b;
		for (a = 0;a < 3;a++)
		{
			for (b = 0;b < 3;b++)
			{
				bd[a][b] = 55;
			}
		}
	
	//int input;
	//do {
	//	menu();
	//	printf("\n是否开始游戏>>");
	//	scanf("%d", &input);
	//	system("cls");
	//	switch(input)
	//	{
	//	case 1:
	//		printf("play game\n");
	//		game();
	//		break;
	//	case 0:
	//		printf("out game\n");
	//		break;
	//	default:
	//		printf("erroc\n");
	//		break;
	//	}
	//} while (input);
	return 0;
}