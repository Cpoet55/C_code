//�Ǽ�����
#include <iostream> 
#include <vector> 
std::vector<int> a = {1,1}; 
void data_init() 
{ 
	int i; 
	for(i=2;i<10005;i++)
	{ 
		a.push_back((a[i-1]+a[i-2]) % 10000); 
	} 
}
int main() 
{ 
	int n,t; 
	data_init(); 
	while(std::cin >> n)
	{
		while(n--)
		{ 
			std::cin >> t; 
			printf("%04d",a[t]); 
		}
		printf("\n"); 
	}
	return 0; 
}

//����
#include <iostream> 
#include <string> 
int numRoot(int num) 
{ 
	int nroot = 0; 
	while(num > 0) 
	{ 
		//ÿ��ֻ��ȡ��λ����---��λ��+ʮλ��
		nroot += num % 10; num /= 10; 
	}
	while (nroot > 9) 
	{ 
		nroot = numRoot(nroot); 
	}
	return nroot; 
}
int main() 
{ 
	std::string origin; 
	while(std::cin >> origin) 
	{ 
		int sum = 0; 
		//�Ƚ�ÿһλ������ӵõ��ܺͣ���ֹ���ֹ��� 
		for (int i = 0; i < origin.length(); i++) 
		{ 
			sum += origin[i] - '0'; 
		}
		//���ܺ������� 
		std::cout << numRoot(sum) << std::endl; 
	}
	return 0; 
}

//���Ϊ��������֮��
#include<stdio.h>
int main()
{
	long c, i, j, n, s;
	printf("����������n:");
	scanf("ld%", &n);
	c = 0;
	for (i = 1; i <= (n - 1) / 2; i++)
	{
		s = 0;
		for (j = i; i <= (n + 1) / 2; i++)
		{
			s = s + j;
			if (s >= n)
			{
				if (s == n)
				{
					c++; printf("%d:%d+...+%d\n", c, i, j);
				}
				break;
			}
		}
		printf("��������%d���⡣\n", c);
	}
}

//�Ż�
#include<stdio.h>
int main()
{
	long c, k, m, n, t;
	printf("����������n:");
	scanf("%ld", &n);
	t = (long)sqrt(2 * n);
	c = 0;
	for (k = 2; k <= t; k++)
	{
		if ((2 * n) % k > 0 || (2 * n / k + 1 - k) % 2 > 0)continue;
		m = (2 * n / k + 1 - k) / 2;
		c++;
		printf("%d:%d+...+%d\n", c, m, m + k - 1);
	}
	printf("��������%d����.\n", c);
}


