//#define _CRT_SECURE_NO_WARNINGS
//
//#include "game.h"
//void menu()
//{
//	printf("*********************************\n");
//	printf("********   1.play   *************\n");
//	printf("********   0.exit   *************\n");
//	printf("*********************************\n");
//}
//#define ROW 3
//#define COL 3
//void game()
//{
//	char board[ROW][COL] = { 0 };
//	char ret = 0;
//
//	InitBoard(board,ROW,COL);
//	DisplayBoard(board, ROW, COL);
//	while (1)
//	{
//		ComputerMove(board,ROW,COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != ' ')
//			break;
//		DisplayBoard(board, ROW, COL);
//		PlayerMove(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != ' ')
//			break;
//		DisplayBoard(board, ROW, COL);
//		//PlayerMove();
//		//DisplayBoard(board, ROW, COL);
//
//	}
//	if (ret == 'X')
//	{
//		printf("电脑赢\n");
//	}
//	else if (ret == '0')
//	{
//		printf("玩家赢\n");
//	}
//	else if (ret == 'Q')
//	{
//		printf("平局\n");
//	}
//	DisplayBoard(board, ROW, COL);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}