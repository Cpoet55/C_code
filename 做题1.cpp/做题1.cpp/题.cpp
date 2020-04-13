//查找输入整数二进制中1的个数
//本题是计算一个数二进制表示1的个数，通过（n>>i)&1可以获取第一位的二进制值，每次n右移一位，可以获得一位二进制数值
//右移32次，n变成0，循环终止。
#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		while (n)
		{
			if ((n & 1) == 1)
				count += 1;
			n >>= 1;
		}
		cout << count << endl;
	}
	return 0;
}