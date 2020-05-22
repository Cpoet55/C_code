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
//统计5因子的个数
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	long n, s, t;
	printf("请输入正整数n:");
	scanf_s("%ld", &n);
	s = 0; t = 1;
	while (t <= n)
	{
		t = t * 5; s = s + n / t;
	}
	printf("%d 尾部连续零共%d个。\n", n,s);
	system("pause");
}

