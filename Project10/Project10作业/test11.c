//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
//						{
//							if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
//							{
//								if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
//								{
//									if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
//									{
//										if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
//										{//�����ֵ������ͬ���ж�
//											if (((a != b) && (a != c) && (a != d) && (a != e))
//												&& ((b != c) && (b != d) && (b != e))
//												&& ((c != d) && (c != e))
//												&& ((d != e)))
//											{
//												printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
//											}
//
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int murder;
//	for (murder = 'A'; murder <= 'D'; murder++)
//	{
//		if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3)    //����һ�٣���if���ģ�������Ϊ����Ϊ1��Ҫ�Ǽٽ��Ϊ0�����if����  �������������ض�Ϊ����һ�٣����ض�����3.  
//		{
//			printf("killer is %c\n", murder);     //��������Ҫ������֣�Ϊһ���ַ���%c��������ַ�  
//
//		}
//
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int Pas[20][20] = { 0 };
//	Pas[0][0] = 1;
//	int i, j, n = 10;
//	for (i = 1; i < n; i++)
//	{
//		Pas[i][0] = 1;
//		for (j = 1; j < i; j++)
//		{
//			Pas[i][j] = Pas[i - 1][j - 1] + Pas[i - 1][j];
//		}
//		Pas[i][j] = 1;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", Pas[i][j]);
//		}
//		putchar('\n');
//	}
//	system("pause");
//	return 0;
//}


