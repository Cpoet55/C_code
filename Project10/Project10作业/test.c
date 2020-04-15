//#include<stdio.h>
//#include<stdlib.h>
//int print(int n)
//{
//	int i = 0;
//	int ret = 0;
//	int arr[32] = { 0 };
//	for (i = 0; i < 32; i++)
//	{
//		ret = n % 2;
//		n = n / 2;
//		arr[i] = ret;
//		printf("%d", arr[31 - i]);
//	}
//	return 0;
//}
//int count_bit1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	int count1 = 0;
//	printf("输入数字:\n");
//	scanf_s("%d", &num);
//	print(num);
//	count1 = count_bit1(num);
//	printf("\n1的个数为:\n count1=%d",count1);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	char arr1[16];  
//	char arr2[16];
//	int num = 0;
//	scanf_s("%d", &num);
//	for (i = 0; i < 32; i += 2)
//	{
//		arr1[j] = ((num >> i) & 1); 
//		j++;
//	}
//	for (i = 1, j = 0; i < 32; i += 2)
//	{
//		arr2[j] = ((num >> i) & 1);  
//		j++;
//	}
//	printf("奇数位为：");  
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	printf("偶数位为：");  
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<windows.h>
//int compare_bit(int x, int y)
//{
//	int i = 0;
//	int count = 0;
//	x ^= y;
//	for (i = 0; i < 32; i++)
//	{
//		if ((x >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	printf("%d和%d二进制bit位中有%d个比特位不同\n", a, b, compare_bit(a, b));
//	system("pause");
//	return 0;
//}
//

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int num = 0;
//	printf("输入一个数：");
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num /= 10;
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
