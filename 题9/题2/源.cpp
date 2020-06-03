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
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//void main()
//{
//	int i, j, m, n, a[30][30];
//	{printf("请输入奇数！"); return; }
//	m = (n + 1) / 2;
//	for (i = 1; j <= n;i++)
//	for (j = 1; j <= n; j++)
//	{
//		if (i + j <= n + 1 && i <= j || i + j >= n + 1 && i >= j)
//			a[i][j] = m - abs(m - j);
//		if (i + j <= n + 1 && i > j || i + j >= n + 1 && i < j)
//			a[i][j] = m - abs(m - i);
//	}
//	printf("%d阶对称方阵为：\n", n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//			printf("%3d", a[i][j]);
//		printf("\n");
//		system("pause");
//	}
//}
//
////求n个正整数m0,m1,m3,...的最大值
//#include<stdio.h>
//void main()
//{
//	int k,n;
//	long a, b, c, r, m[100];
//	printf("请输入整数个数 n:");
//	scanf_s("%d", &n);
//	printf("请输入%d个整数。 ", n);
//	for (k = 0; k <= n - 1; k++)
//	{
//		printf("\n请输入第%d个整数：", k + 1);
//		scanf_s("%ld", &m[k]);
//	}
//	b = m[0];
//	for (k = 1; k <= n - 1; k++)
//	{
//		a = m[k];
//		if (a < b)
//		{
//			c = a; a = b; b = c;
//		}
//		r = a%b;
//		while (r != 0)
//		{
//			a = b; b = r;
//			r = a%b;
//		}
//	}
//	printf("(%ld", m[0]);
//	for (k = 1; k <= n - 1; k++)
//		printf(",%ld", m[k]);
//	printf(")=%ld\n", b);
//}

//
//#include<stdio.h>
//#include<math.h>
//void main()
//{
//	int a, b, i, j, t, u; long m = 0;
//	double s;
//	printf("最简真分数分母在[a,b]内,请确定a,b:");
//	scanf_s("%d,%d", &a, &b);
//	s = b;
//	for (j = a; j <= b;j++)
//	for (i = 1; i <= j - 1; i++)
//	{
//		for (t = 0, u = 2; u <= i; u++)
//		if (j%u == 0 && i%u == 0)
//		{
//			t = 1;
//			break;
//		}
//		if (t == 0)
//		{
//			m++;
//			s += (double)i / j;
//		}
//	}
//	printf("最简真分数共m=%ld个.\n", m);
//	printf("其和s=%.5f\n", s);
//}

//#include<math.h>
//#include<stdio.h>
//void main()
//{
//	double a, m, n, x, y;
//	printf("解佩尔方程:x^2-ny=1.\n");
//	printf("请输入非平方整数 n:");
//	scanf_s("%lf", &n);
//	m = floor(sqrt(n + 1));
//	if (m*m == n)
//	{
//		printf("n为平方数，方程无正数解！\n");
//		return;
//	}
//	y = 1;
//	while (y <= 10000000)
//	{
//		y++;
//		a = n*y*y; x = floor(sqrt(a + 1));
//		if (x*x == n + 1)
//		{
//			printf("方程x^2-%.0fy^2=1的基本解为：\n", n);
//			printf("x=%.0f,y=%.0f\n", x, y);
//			break;
//		}
//	}
//	if (10000000)
//		printf("未求出方程的基本解");
//}


////超越方程
//#include<stdio.h>
//#include<math.h>
//double fny(double x)
//{
//	return 2 * pow(x, 2)*pow(sin(x), 7) + 3 * pow(x, 0.5)*cos(x) - exp(x) / 5;
//}
//	void main()
//	{
//		int k, t;
//		double a, b, c, x, x1, y, mi;
//		printf("求方程在[a,b]中的一个解，请确定a，b:");
//		scanf_s("%lf,%lf", &a, &b);
//		for (t = 0, x = a; x <= b;x+=0.1)
//		if (fny(x)*fny(b) <= 0)
//		{
//			t = 1; break;
//		}
//		if (t == 0)
//		{
//			printf("无解!"); return;
//			c = 0.1; k = 1; mi = 100.0;
//			while (k<=8)
//			{
//				for (x = a; x <= b; x += c)
//				{
//					y = fny(x);
//					if (fabs(y) < mi)
//					{
//						mi = fabs(y); x1 = x;
//					}
//				}
//				c = c / 10; a = x1 - 5 * c; b = x1 + 5 * c;
//				k++;
//		}
//			printf("所求方程的一个解为x=%.8f\n", x1);
//	}
//}
//基于符号判定的枚举求精
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//	double fny(double x)
//{
//		return 2 * pow(x, 2)*pow(sin(x), 7) + 3 * pow(x, 0.5)*cos(x) - exp(x) / 5;
//}
//	void main()
//	{
//		int i, t = 0;
//		double a, b, x, x1, x2, c;
//		printf("求方程在[a][b]中的一个解，请确实a,b:");
//		scanf_s(" %lf,%lf", &a, &b);
//		for (x = a; x <= b;x+=0.1)
//		if (fny(x)*fny(b) <= 0)
//		{
//			x1 = x; x2 = b; t = 1; break;
//		}
//		if (t == 0)
//		{
//			printf("无解"); return;
//		}
//		c = 0.01;
//		for (i = 2; i <= 9; i++)
//		{
//			for (x = x1; x <= x2;x+=c)
//			if (fny(x)*fny(x2) > 0)
//			{
//				x2 = x; x1 = x - c; break;
//			}
//			c = c / 10;
//		}
//		x = (x1 + x2) / 2;
//			printf("所求方程的一个解为x=%.8f\n", x);
//			system("pause");
//	}
 



//趣味数阵
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void lmain()
{
	int c, d, j, k, n, t, t1, t2, w, x, y, z, m;
	int a[3000];
	m = 0;
	printf("请确定区间c,d:");
	scanf("%d,%d", &c, &d);
	if (c % 2 == 0)c = c + 1;
	if (c < 3)c = 3;
	for (k = c; k <= d; k++)a[k] = 0;
	for (k = c; k <= d; k += 2)
	{
		for (t = 0, j = 3; j <= sqrt(double(k)); j += 2)
		if (k%j == 0)
		{
			t = 1; break;
		}
		if (t == 0)a[k] = 1;

	}
	for (n = c; n <= d - 8; n = n + 2)
	{
		if (a[n] == 0)continue;
		for (y = 2; y <= n - 3;y+=2)
		for (x = y + 2; x <= n - 1; x += 2)
		{
			z = x - y; w = x + y;
			if (x == 2 * y || n - w<c || n + w>d)
				continue;
			t1 = a[n - w] * a[n + w] * a[n - z] * a[n + z];
			t2 = a[n - x] * a[n + x] * a[n - y] * a[n + y];
			if (t1*t2 == 0)continue;
			m++;
			printf(" NO%d:\n", m);
			printf("%5d%5d%5d\n", n - x, n + w, n - y);
			printf("%5d%5d%5d\n", n +z, n , n - z);
			printf("%5d%5d%5d\n", n +y , n - w, n + x);
		}
	}
	printf(" 共%d 个素数幻方。\n", m);
}
