//基于素数的代数和
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int t, j, n, k, k1, k2, a[3000];
	double s, s2, smax, mi;
	printf("请输入整数n:");
	scanf_s("%d", &n);
	for (k = 1; k <= n + 1; k++)a[k] = 0;
	for (k = 2; k <= n + 1; k++)
	{
		for (t = 0, j = 3; j <= sqrt(double(2 * k - 1)); j += 2)
		if ((2 * k - 1) % j == 0)
		{
			t = 1; break;
		}
		if (t == 0) a[k] = 1;
	}
	s = 0; smax = 0; mi = 10;
	for (k = 1; k <= n; k++)
	{
		if (a[k] + a[k + 1] == 1)
			s += (double)(2 * k - 1) / (2 * k + 1);
		else
			s -= (double)(2 * k - 1) / (2 * k + 1);
		if (s > smax)
		{
			smax = s; k1 = k;
		}
		if (fabs(s) < mi)
		{
			mi = fabs(s); k2 = k; s2 = s;
		}
	}
	printf("s(%d)=%.5f\n", n, s);
	printf("当k=%d时s有最大值：%.5f\n", k1, smax);
	printf("当k=%d时s=%.5f最接近0。\n", k1, s2);
	system("pause");
}