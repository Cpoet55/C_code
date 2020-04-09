#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void meau()
{
	printf("***********************************\n");
	printf("******** 欢迎来到扫雷游戏 *********\n");
	printf("********   1: play 玩游戏  ********\n");
	printf("***********************************\n");
	printf("*******   0: exit 退出游戏 ********\n");
}

int main()
{
	int num = 0;
	do
	{
		meau();
		printf("\n");
		printf("请您选择1或者0:> ");
		scanf("%d", &num);
		printf("\n");
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			system("CLS");
			printf("您已经退出游戏，欢迎下次继续挑战!\n\n");
			break;
		default:
			printf("选择错误，请重选\n");
			break;
		}
	} while (num);
	system("pause");
	return 0;
}