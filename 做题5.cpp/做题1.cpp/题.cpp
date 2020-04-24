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
//
//
////连接字符串
//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//void main()
//{
//	char str1[30], str2[20];
//	cout << "请输入数组1：" << endl;
//	cin >> str1;
//	cout << "请输入数组2" << endl;
//	cin >> str2;
//	if (30 > strlen(str1) + strlen(str2))
//	{
//		strcat(str1, str2);
//		cout << "Now the string1 is:" << str1 << endl;
//	}
//	else
//		cout << "操作失败" << endl;
//}
//
//
////字符复制
//#include<iostream>
//using namespace std;
//void main()
//{
//	char str1[30], str2[20] = { 'n', 'm', 'u','\0' };
//	cout << "请输入数组1:" << endl;
//	scanf("%s", &str1);
//	strcpy(str1, str2);
//	cout << "数组1的内容" << endl;
//	printf("%s", str1);
//}


////解读密码
//#include<iostream>
//#include<string>
//#include<stdio.h>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	string s;
//	while (getline(cin, s)){
//		int len = s.length();
//		for (int i = 0; i < len; i++){
//			if (s[i] >= '0'&&s[i] <= '9')
//				cout << s[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}
//
//
// //走迷宫
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<queue>
//using namespace std;
//struct pos{ int x, y, level; };
//int bfs(vector<vector<char>>&map)
//{
//	const int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
//	queue<pos>que;
//	int m = map.size(), n = map[0].size();
//	vector < vector < bool >>visit(m, vector<bool>(n, false));
//
//	pos start{ 0, 1, 0 }, end{ 9, 8, 0 };
//	que.push(start);
//	visit[start.x][start.y] = true;
//	while (!que.empty())
//	{
//		pos cur = que.front(), next;//定义cur和next
//		que.pop();
//		for (int i = 0; i<4; ++i)//BFS,优先四个方向进行搜索
//		{
//			next.x = cur.x + dir[i][0];
//			next.y = cur.y + dir[i][1];
//			next.level = cur.level + 1;
//			if (next.x == end.x&&next.y == end.y)return next.level;
//			if (next.x >= 0 && next.x<m&&next.y >= 0 && next.y<n&&\
//				!visit[next.x][next.y] && map[next.x][next.y] == '.')
//			{
//				que.push(next);
//				visit[next.x][next.y] = true;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	vector<vector<char>>map(10, vector<char>(10));
//	while (cin >> map[0][0])//由多个测试用例，需要全部读取
//	{
//		for (int i = 0; i<10; ++i)
//		for (int j = 0; j<10; ++j)
//		{
//			if (i == 0 && j == 0)continue;
//			cin >> map[i][j];
//		}
//		cout << bfs(map) << endl;
//	}
//	return 0;
//
//}



#include <iostream> 
#include <cmath>

//long long是两个关键字拼起来的，用起来很不方便，重命名一下 
typedef long long _sint64;
//有理数类的声明 
class RationalNumber{    
bool m_inﬁnate;        //处理除数为零     
bool m_negative;        //处理负数     
_sint64 m_numerator;    //分子，方便输出    
_sint64 m_denominator;  //分母     
_sint64 m_integer;      //整数部分
_sint64 m_numeratorAll; //记录无整数分数的分子，方便进行运算     
_sint64 calcGCD(_sint64 a, _sint64 b); //求最大公约数的函数 
public:

RationalNumber(_sint64 numerator, _sint64 denominator); //构造函数    
RationalNumber operator+(RationalNumber const& o) const; //四则运算重载    
RationalNumber operator-(RationalNumber const& o) const;    
RationalNumber operator*(RationalNumber const& o) const;    
RationalNumber operator/(RationalNumber const& o) const;

//输出流运算符重载    
friend std::ostream &operator<<(std::ostream &os, RationalNumber const& o); };

//有理数类每个方法的实现 
_sint64 RationalNumber::calcGCD(_sint64 a, _sint64 b) 
{
	if (b == 0)    
	{        
		return a;
	}

//辗转相除法    
	return calcGCD(b, a % b);
}

RationalNumber::RationalNumber(_sint64 numerator, _sint64 denominator) 
{
	m_negative = false;    m_inﬁnate = false;
	//处理分母为零的情况    
	if (denominator == 0)    
	{        
		m_inﬁnate = true;        
		return;    
	}

	//这里这样写，是因为在通过计算结果进行构造过程中，有可能出现分子分母均为负的情况。    
	if (numerator < 0)    
	{        
		m_negative = !m_negative;   
	}

	if (denominator < 0)
	{
		
			m_negative = !m_negative;
	}

	//计算整数、分子、分母。其中分母要参与下面的运算，所以不能是负的，用abs取绝对值，分子要保留原值    
	m_integer = numerator / denominator;    
	m_numerator = numerator - m_integer * denominator;    
	m_denominator = abs(denominator);

	//约分，注意传给子函数的分子必须是正的，分母上面处理过了    
	if (m_numerator)    
	{        
		_sint64 maxtmp = calcGCD(abs(m_numerator), m_denominator);

	if(maxtmp)
	{ 
		m_numerator /= maxtmp;           
		m_denominator /= maxtmp;
	}
}

//计算约分后假分数版的分子，因为后续运算是不需要整数部分的，所以必须用假分数的分子算。    
	m_numeratorAll = m_numerator + m_integer * m_denominator; 
}

//以下为分数的加减乘除，统统使用m_numeratorAll（假分数的分子）进行运算。 
RationalNumber RationalNumber::operator+(RationalNumber const& o) const 
{    
	_sint64 numerator = (m_numeratorAll * o.m_denominator) +                        
		(o.m_numeratorAll * m_denominator);    
	_sint64 denominator = m_denominator * o.m_denominator;

    return RationalNumber(numerator, denominator); 
}

RationalNumber RationalNumber::operator-(RationalNumber const& o) const 
{
	_sint64 numerator = (m_numeratorAll * o.m_denominator)
		- (o.m_numeratorAll * m_denominator);
	_sint64 denominator = m_denominator * o.m_denominator;

	return RationalNumber(numerator, denominator);
}

RationalNumber RationalNumber::operator*(RationalNumber const& o) const 
{
	_sint64 numerator = m_numeratorAll * o.m_numeratorAll;    
	_sint64 denominator = m_denominator * o.m_denominator;

	return RationalNumber(numerator, denominator);
}

RationalNumber RationalNumber::operator/(RationalNumber const& o) const
{
		_sint64 numerator = m_numeratorAll * o.m_denominator;    
		_sint64 denominator = m_denominator * o.m_numeratorAll;

	return RationalNumber(numerator, denominator);
}

std::ostream &operator<<(std::ostream &os, RationalNumber const& o) 
{ 
	//分母为0的情况就不用继续了    
	if (o.m_inﬁnate)    
	{       
		os << "Inf";        
	    return os;    
	}

	//整数和分子为0那干脆就是0了    
	if (o.m_numerator == 0 && o.m_integer == 0)    
	{       
		os << "0"; 
		return os;    
	}

	//负数打印括号和负号    
	if (o.m_negative)    
	{        
		os << "(-";   
	}

	//有整数就打整数    
	if (o.m_integer)    
	{        
		os << abs(o.m_integer);        
		if (o.m_numerator) //整数小数都有就打个空格隔开        
		{            
			os << " ";        
		}    
	}

	//有分数就打分数，分母已经abs过了，这里可以不用    
	if (o.m_numerator)    
	{        
		os << abs(o.m_numerator) << '/' << o.m_denominator;    
	}

	//负数的后半边括号    
	if (o.m_negative)    
	{        
		os << ")";    
	}

	return os;
}

