////星际密码
//#include <iostream> 
//#include <vector> 
//std::vector<int> a = {1,1}; 
//void data_init() 
//{ 
//	int i; 
//	for(i=2;i<10005;i++)
//	{ 
//		a.push_back((a[i-1]+a[i-2]) % 10000); 
//	} 
//}
//int main() 
//{ 
//	int n,t; 
//	data_init(); 
//	while(std::cin >> n)
//	{
//		while(n--)
//		{ 
//			std::cin >> t; 
//			printf("%04d",a[t]); 
//		}
//		printf("\n"); 
//	}
//	return 0; 
//}
//
////数根
//#include <iostream> 
//#include <string> 
//int numRoot(int num) 
//{ 
//	int nroot = 0; 
//	while(num > 0) 
//	{ 
//		//每次只获取个位数字---个位数+十位数
//		nroot += num % 10; num /= 10; 
//	}
//	while (nroot > 9) 
//	{ 
//		nroot = numRoot(nroot); 
//	}
//	return nroot; 
//}
//int main() 
//{ 
//	std::string origin; 
//	while(std::cin >> origin) 
//	{ 
//		int sum = 0; 
//		//先将每一位进行相加得到总和，防止数字过大 
//		for (int i = 0; i < origin.length(); i++) 
//		{ 
//			sum += origin[i] - '0'; 
//		}
//		//对总和求树根 
//		std::cout << numRoot(sum) << std::endl; 
//	}
//	return 0; 
//}
//
////拆分为连续整数之和
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	long c, i, j, n, s;
//	printf("请输入拆分数n:");
//	scanf_s("%ld", &n);
//	c = 0;
//	for (i = 1; i <= (n - 1) / 2; i++)
//	{
//		s = 0;
//		for (j = i; i <= (n + 1) / 2; j++)
//		{
//			s = s + j;
//			if (s >= n)
//			{
//				if (s == n)
//
//				{
//					c++; printf("%d:%d+...+%d\n", c, i, j);
//				}
//				break;
//			}
//		}
//
//	}
//	printf("共有以上%d个解。\n", c);
//	system("pause");
//}
//
////优化
//#include<stdio.h>
//int main()
//{
//	long c, k, m, n, t;
//	printf("请输入拆分数n:");
//	scanf("%ld", &n);
//	t = (long)sqrt(2 * n);
//	c = 0;
//	for (k = 2; k <= t; k++)
//	{
//		if ((2 * n) % k > 0 || (2 * n / k + 1 - k) % 2 > 0)continue;
//		m = (2 * n / k + 1 - k) / 2;
//		c++;
//		printf("%d:%d+...+%d\n", c, m, m + k - 1);
//	}
//	printf("共有以上%d个解.\n", c);
//}


//
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//void   main()
//{
//	int j, k,m, n, a[40000];
//	long g, t; 
//	double s;
//	printf("请输入正整数n(n<10000):");
//	scanf_s("%d", &n);
//	s = 0;
//	for (k = 2; k <= n; k++)
//		s= s+log10(float (k));
//	m = (int)s + 1;
//	for (k = 1; k <= m; k++)a[k] = 0;
//	a[1] = 1; g = 0;
//	for (k = 2; k <= n;k++)
//	for (j = 1; j <= m; j++)
//	{
//		t = a[j] * k + g;
//		a[j] = t % 10;
//		g = t / 10;
//	}
//	j = 1;
//	while (a[j] == 0)j++;
//	printf(" %d 尾部连续零共%d个。\n", n, j - 1);
//	system("pause");
//}
////统计5因子的个数
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//void main()
//{
//	long n, s, t;
//	printf("请输入正整数n:");
//	scanf_s("%ld", &n);
//	s = 0; t = 1;
//	while (t <= n)
//	{
//		t = t * 5; s = s + n / t;
//	}
//	printf("%d 尾部连续零共%d个。\n", n,s);
//	system("pause");
//}
//构建对称方阵
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int i, j, m, n, a[30][30];
	{printf("请输入奇数！"); return; }
	m = (n + 1) / 2;
	for (i = 1; j <= n;i++)
	for (j = 1; j <= n; j++)
	{
		if (i + j <= n + 1 && i <= j || i + j >= n + 1 && i >= j)
			a[i][j] = m - abs(m - j);
		if (i + j <= n + 1 && i > j || i + j >= n + 1 && i < j)
			a[i][j] = m - abs(m - i);
	}
	printf("%d阶对称方阵为：\n", n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%3d", a[i][j]);
		printf("\n");
		system("pause");
	}
}

//求n个正整数m0,m1,m3,...的最大值
#include<stdio.h>
void main()
{
	int k,n;
	long a, b, c, r, m[100];
	printf("请输入整数个数 n:");
	scanf_s("%d", &n);
	printf("请输入%d个整数。 ", n);
	for (k = 0; k <= n - 1; k++)
	{
		printf("\n请输入第%d个整数：", k + 1);
		scanf_s("%ld", &m[k]);
	}
	b = m[0];
	for (k = 1; k <= n - 1; k++)
	{
		a = m[k];
		if (a < b)
		{
			c = a; a = b; b = c;
		}
		r = a%b;
		while (r != 0)
		{
			a = b; b = r;
			r = a%b;
		}
	}
	printf("(%ld", m[0]);
	for (k = 1; k <= n - 1; k++)
		printf(",%ld", m[k]);
	printf(")=%ld\n", b);
}
