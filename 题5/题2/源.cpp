////�Ǽ�����
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
////����
//#include <iostream> 
//#include <string> 
//int numRoot(int num) 
//{ 
//	int nroot = 0; 
//	while(num > 0) 
//	{ 
//		//ÿ��ֻ��ȡ��λ����---��λ��+ʮλ��
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
//		//�Ƚ�ÿһλ������ӵõ��ܺͣ���ֹ���ֹ��� 
//		for (int i = 0; i < origin.length(); i++) 
//		{ 
//			sum += origin[i] - '0'; 
//		}
//		//���ܺ������� 
//		std::cout << numRoot(sum) << std::endl; 
//	}
//	return 0; 
//}
//
////���Ϊ��������֮��
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	long c, i, j, n, s;
//	printf("����������n:");
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
//	printf("��������%d���⡣\n", c);
//	system("pause");
//}
//
////�Ż�
//#include<stdio.h>
//int main()
//{
//	long c, k, m, n, t;
//	printf("����������n:");
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
//	printf("��������%d����.\n", c);
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
//	printf("������������n(n<10000):");
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
//	printf(" %d β�������㹲%d����\n", n, j - 1);
//	system("pause");
//}
////ͳ��5���ӵĸ���
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//void main()
//{
//	long n, s, t;
//	printf("������������n:");
//	scanf_s("%ld", &n);
//	s = 0; t = 1;
//	while (t <= n)
//	{
//		t = t * 5; s = s + n / t;
//	}
//	printf("%d β�������㹲%d����\n", n,s);
//	system("pause");
//}
//�����ԳƷ���
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int i, j, m, n, a[30][30];
	{printf("������������"); return; }
	m = (n + 1) / 2;
	for (i = 1; j <= n;i++)
	for (j = 1; j <= n; j++)
	{
		if (i + j <= n + 1 && i <= j || i + j >= n + 1 && i >= j)
			a[i][j] = m - abs(m - j);
		if (i + j <= n + 1 && i > j || i + j >= n + 1 && i < j)
			a[i][j] = m - abs(m - i);
	}
	printf("%d�׶ԳƷ���Ϊ��\n", n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%3d", a[i][j]);
		printf("\n");
		system("pause");
	}
}

//��n��������m0,m1,m3,...�����ֵ
#include<stdio.h>
void main()
{
	int k,n;
	long a, b, c, r, m[100];
	printf("�������������� n:");
	scanf_s("%d", &n);
	printf("������%d�������� ", n);
	for (k = 0; k <= n - 1; k++)
	{
		printf("\n�������%d��������", k + 1);
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
