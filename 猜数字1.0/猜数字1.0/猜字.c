#include<time.h>
#include <string.h>
void menu()
{
	printf("######################################\n");
	printf("###########   1.play   ###############\n");
	printf("###########   0.exit   ###############\n");
	printf("######################################\n");
}
//time_t
void game()
{
	//1.生成一个随机数
	int ret = 0;
	int guess = 0;
	//srand();//时间戳
	ret = rand() % 100 + 1;
	/*printf("ret=%d\n", ret);*/
	//RAND_MAX
	//2.猜数字
	while (1)
	{
		printf("请输入数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了，请说出自己是猪后重来，否则将在60秒内关机\n");
		}
		else if (guess > ret)
		{
			printf("猜大了，请说出自己菜然后重来，否则将在60秒内关机\n");
		}
		else
		{
			printf("恭喜你，猜对了，电脑关机已取消\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//时间戳
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				    game();
				    break;
		case 0:
					printf("退出游戏\n");
					break;
		default:
					printf("选择错误\n");
					break;
		}
	} while (input);
	return 0;
}