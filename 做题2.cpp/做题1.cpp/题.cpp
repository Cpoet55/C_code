//查找输入整数二进制中1的个数
//本题是计算一个数二进制表示1的个数，通过（n>>i)&1可以获取第一位的二进制值，每次n右移一位，可以获得一位二进制数值
//右移32次，n变成0，循环终止。
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int count = 0;
//		while (n)
//		{
//			if ((n & 1) == 1)
//				count += 1;
//			n >>= 1;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}

//求字符串的最小值
//#include<iostream>
//#include<string>
//using namespace std;
//template<class Type>
//Type min(Type& a, Type& b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//}
//char min(char a, char b)
//{
//	if (strcmp(&a, &b))
//		return b;
//	else
//		return a;
//}
//void main()
//{
//	cout << "最小值" << min(10, 1) << endl;
//	cout << "最小值" << min('a', 'b') << endl;
//	string s1 = "hi";
//	string s2 = "mr";
	//cout << "最小值:" << min(s1, s2) << endl;
//}//

//class Solution{
//public:
//	int Add(int num1, int num2){
//		while (num2 != 0){
//			int sum = num1^num2;
//			int carray = (num1 &num2) << 1;
//			num1 = sum;
//			num2 = carray;
//		}
//		return num1;
//	}
//};


//连接字符串
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
void main()
{
	char str1[30], str2[20];
	cout << "请输入数组1：" << endl;
	cin >> str1;
	cout << "请输入数组2" << endl;
	cin >> str2;
	if (30 > strlen(str1) + strlen(str2))
	{
		strcat(str1, str2);
		cout << "Now the string1 is:" << str1 << endl;
	}
	else
		cout << "操作失败" << endl;
}


//字符复制
#include<iostream>
using namespace std:
void main()
{
	char str1[30], str2[20] = { 'n', 'm', 'u','\0' };
	cout << "请输入数组1:" << endl;
	scanf("%s", &str1);
	strcpy(str1, str2);
	cout << "数组1的内容" << endl;
	printf("%s", str1);
}

