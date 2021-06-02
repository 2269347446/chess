#define _CRT_SECURE_NO_WARNINGS 1

//#include"game.h"

int main()
{
	
	int input;
	do {
		menu();
		printf("\nÊÇ·ñ¿ªÊ¼ÓÎÏ·>>");
		scanf("%d", &input);
		system("cls");
		switch(input)
		{
		case 1:
			printf("play game\n");
			game();
			break;
		case 0:
			printf("out game\n");
			break;
		default:
			printf("erroc\n");
			break;
		}
	} while (input);
	return 0;
}
