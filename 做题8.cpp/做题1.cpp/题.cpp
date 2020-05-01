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

//
//
//#include <iostream> 
//#include <cmath>
//
////long long是两个关键字拼起来的，用起来很不方便，重命名一下 
//typedef long long _sint64;
////有理数类的声明 
//class RationalNumber{    
//bool m_inﬁnate;        //处理除数为零     
//bool m_negative;        //处理负数     
//_sint64 m_numerator;    //分子，方便输出    
//_sint64 m_denominator;  //分母     
//_sint64 m_integer;      //整数部分
//_sint64 m_numeratorAll; //记录无整数分数的分子，方便进行运算     
//_sint64 calcGCD(_sint64 a, _sint64 b); //求最大公约数的函数 
//public:
//
//RationalNumber(_sint64 numerator, _sint64 denominator); //构造函数    
//RationalNumber operator+(RationalNumber const& o) const; //四则运算重载    
//RationalNumber operator-(RationalNumber const& o) const;    
//RationalNumber operator*(RationalNumber const& o) const;    
//RationalNumber operator/(RationalNumber const& o) const;
//
////输出流运算符重载    
//friend std::ostream &operator<<(std::ostream &os, RationalNumber const& o); };
//
////有理数类每个方法的实现 
//_sint64 RationalNumber::calcGCD(_sint64 a, _sint64 b) 
//{
//	if (b == 0)    
//	{        
//		return a;
//	}
//
////辗转相除法    
//	return calcGCD(b, a % b);
//}
//
//RationalNumber::RationalNumber(_sint64 numerator, _sint64 denominator) 
//{
//	m_negative = false;    m_inﬁnate = false;
//	//处理分母为零的情况    
//	if (denominator == 0)    
//	{        
//		m_inﬁnate = true;        
//		return;    
//	}
//
//	//这里这样写，是因为在通过计算结果进行构造过程中，有可能出现分子分母均为负的情况。    
//	if (numerator < 0)    
//	{        
//		m_negative = !m_negative;   
//	}
//
//	if (denominator < 0)
//	{
//		
//			m_negative = !m_negative;
//	}
//
//	//计算整数、分子、分母。其中分母要参与下面的运算，所以不能是负的，用abs取绝对值，分子要保留原值    
//	m_integer = numerator / denominator;    
//	m_numerator = numerator - m_integer * denominator;    
//	m_denominator = abs(denominator);
//
//	//约分，注意传给子函数的分子必须是正的，分母上面处理过了    
//	if (m_numerator)    
//	{        
//		_sint64 maxtmp = calcGCD(abs(m_numerator), m_denominator);
//
//	if(maxtmp)
//	{ 
//		m_numerator /= maxtmp;           
//		m_denominator /= maxtmp;
//	}
//}
//
////计算约分后假分数版的分子，因为后续运算是不需要整数部分的，所以必须用假分数的分子算。    
//	m_numeratorAll = m_numerator + m_integer * m_denominator; 
//}
//
////以下为分数的加减乘除，统统使用m_numeratorAll（假分数的分子）进行运算。 
//RationalNumber RationalNumber::operator+(RationalNumber const& o) const 
//{    
//	_sint64 numerator = (m_numeratorAll * o.m_denominator) +                        
//		(o.m_numeratorAll * m_denominator);    
//	_sint64 denominator = m_denominator * o.m_denominator;
//
//    return RationalNumber(numerator, denominator); 
//}
//
//RationalNumber RationalNumber::operator-(RationalNumber const& o) const 
//{
//	_sint64 numerator = (m_numeratorAll * o.m_denominator)
//		- (o.m_numeratorAll * m_denominator);
//	_sint64 denominator = m_denominator * o.m_denominator;
//
//	return RationalNumber(numerator, denominator);
//}
//
//RationalNumber RationalNumber::operator*(RationalNumber const& o) const 
//{
//	_sint64 numerator = m_numeratorAll * o.m_numeratorAll;    
//	_sint64 denominator = m_denominator * o.m_denominator;
//
//	return RationalNumber(numerator, denominator);
//}
//
//RationalNumber RationalNumber::operator/(RationalNumber const& o) const
//{
//		_sint64 numerator = m_numeratorAll * o.m_denominator;    
//		_sint64 denominator = m_denominator * o.m_numeratorAll;
//
//	return RationalNumber(numerator, denominator);
//}
//
//std::ostream &operator<<(std::ostream &os, RationalNumber const& o) 
//{ 
//	//分母为0的情况就不用继续了    
//	if (o.m_inﬁnate)    
//	{       
//		os << "Inf";        
//	    return os;    
//	}
//
//	//整数和分子为0那干脆就是0了    
//	if (o.m_numerator == 0 && o.m_integer == 0)    
//	{       
//		os << "0"; 
//		return os;    
//	}
//
//	//负数打印括号和负号    
//	if (o.m_negative)    
//	{        
//		os << "(-";   
//	}
//
//	//有整数就打整数    
//	if (o.m_integer)    
//	{        
//		os << abs(o.m_integer);        
//		if (o.m_numerator) //整数小数都有就打个空格隔开        
//		{            
//			os << " ";        
//		}    
//	}
//
//	//有分数就打分数，分母已经abs过了，这里可以不用    
//	if (o.m_numerator)    
//	{        
//		os << abs(o.m_numerator) << '/' << o.m_denominator;    
//	}
//
//	//负数的后半边括号    
//	if (o.m_negative)    
//	{        
//		os << ")";    
//	}
//
//	return os;
//}

//
////25946 字符串计数
//#include <iostream> 
//#include <string> 
//#include <vector> 
//#include <algorithm> 
//#define N 1000007
//
//#include<iostream> 
//#include<string> 
//#include<vector> 
//#include<math.h> 
//using namespace std;
//
//int main()
//{    
//	//根据题中给出的例子，这个字符串只包含小写字母，不然答案就不应该是56了    
//	string s1,s2;    
//	int len1,len2;    
//	while(cin>>s1>>s2>>len1>>len2)
//	{        
//		//只包含小写字母的字符串可以看成26进制的数制        
//		//将s1和s2补长到len2长度        
//		s1.append(len2-s1.size(),'a');        
//		s2.append(len2-s2.size(),(char)('z'+1));        
//		vector<int> array;        
//		for(int i=0;i<len2;i++)
//		{            
//			array.push_back(s2[i]-s1[i]);        
//		}        
//		int result = 0;        
//		for(int i=len1;i<=len2;i++)
//		{            
//			for(int k=0;k<i;k++)
//			{                
//				result += array[k]*pow(26,i-1-k);            
//			}        
//		}        
//		//所有字符串最后都不包含是s2自身，所以最后要减1；        
//		cout<<result-1<<endl;    
//	}    
//	return 0; 
//} 
//
//
//
//
////最长公共子序列
//
//#include <iostream> 
//#include <string> 
//#include <vector> 
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	string A, B;    
//	while (cin >> A >> B) 
//	{
//		int aLength = A.length();        
//		int bLength = B.length();        
//		vector<vector<int> > dp(aLength, vector<int>(bLength, 0));        
//		// 初始化边界        
//		dp[0][0] = (A[0] == B[0])?1:0;        
//		for(int i=1; i<aLength; i++) 
//		{            
//			dp[i][0] = (A[i] == B[0]) ? 1 : 0;            
//			dp[i][0] = max(dp[i-1][0], dp[i][0]);        
//		}        for(int j=1; j<bLength; j++) 
//		{            
//			dp[0][j] = (A[0] == B[j]) ? 1 : 0;            
//			dp[0][j] = max(dp[0][j-1], dp[0][j]);        
//		}        
//		// 计算        
//		for(int i=1; i<aLength; i++) 
//		{            
//			for(int j=1; j<bLength; j++) 
//			{                
//				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);                
//				if(A[i] == B[j]) 
//				{                    
//					dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);                
//				}            
//			}        
//		}        
//		cout << dp[aLength-1][bLength-1] << endl;    
//	}
//
//		return 0;
//	}
//
//
//
//
//
////左右最值最大差
//class MaxGap 
//{
//public: int findMaxGap(vector<int> A, int n)  
//{
//			vector<int> mxL(n, 0);
//			//记录i位左侧最大值     
//			vector<int> mxR(n,0);
//			//记录i位右侧最大值     
//			int ma=INT_MIN;     
//			for(int i=0;i<n;i++)
//			{
//				//左侧         
//				if(i==0)             
//					mxL[i]=A[i];         
//				else            
//					mxL[i]=max(A[i],mxL[i-1]); 
//				// 第 i 位左侧的最大值就是 i - 1 位最大值和 i 的值的较 大值     
//			}     
//			for(int i=n-1;i>=0;i--)
//			{
//				//右侧         
//				if(i==n-1)             
//				mxR[i]=A[i];         
//				else              
//					mxR[i]=max(A[i],mxR[i+1]);     
//			}     // 例如输入数据为 [2,7,3,1,1]         
//			// mxL 中的值为: [2,7,7,7,7]        
//			// mxR 中的值为: [7,7,3,1,1]     
//			int res=INT_MIN;     
//			// 接下来的循环就依次求差找最大值即可.
//			for (int i = 0; i<n - 1; i++)
//			{
//				//求差         
//				res=max(res,abs(mxL[i]-mxR[i+1]));     
//			}     
//			return res; 
//} 
//};
//
//
//
//
////顺时针打印矩阵
//
//class Printer 
//{
//public: vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m) 
//{
//			vector<int> ret;    
//			int x1 = 0, y1 = 0;      
//			//左上角坐标    
//			int x2 = n-1, y2 = m-1;  
//			//右下角坐标    
//			// 这两个坐标表示了一个矩形(最开始的矩阵)    
//			// 然后按照要求打印最外圈的数据.    
//			// 打印完毕之后, 缩小矩形的大小.     
//			while(x1 <= x2 && y1 <= y2)
//			{        
//				for(int j = y1; j <= y2; ++j)            
//					ret.push_back(mat[x1][j]);        
//				for(int i = x1+1; i < x2; ++i)            
//					ret.push_back(mat[i][y2]);        
//				for(int j = y2; x1 < x2 && j >= y1; --j) 
//					//x1 < x2：只有在不是单一的横行时才执行这个循 环            
//					ret.push_back(mat[x2][j]);        
//				for(int i = x2-1; y1 < y2 && i > x1; --i)
//					//y1 < y2：只有在不是单一的竖列时才执行这个循 环            
//					ret.push_back(mat[i][y1]);        
//				x1++; y1++;        
//				x2--; y2--;    
//			}   
//			return ret; 
//} 
//}; 

//
////微信红包
////此题最简单的方式是排序，因为有个金额红包出现的次数超过了红包总数的一半，因此如果存在该红包，排 好序之后，该红包肯定在中间位置，最后只需统计下该红包出现的次数即可，如果超过一半就找到，如果没 有就不存在。
//
//#include <iostream> 
//#include<iostream>
//using namespace std;
//class Gift{
//public:
//	int getValue(vector<int>gifts, int n)
//	{
//		//找出现一半的红包
//		int count = 0, money = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (count == 0)
//			{
//				money = gifts[i];
//				count = 1;
//			}
//			else
//			{
//				if (gifts[i] == money)
//					count++;
//				else
//					count--;
//			}
//		}
//		//验证该红包释放存在
//		for (int i = 0; i<n; i++)
//		{
//			if (gifts[i] == money)
//				count++;
//		}
//		//如果该红包出现的次数超过n/2，则一定存在
//		if (count>n / 2)
//
//			return money;
//		    return 0;
//	}
//};
//
//
//
//
//---连续最大和 

//#include <iostream> 
//#include <vector>
//using namespace std; 
//// 因为题目已经说明：第一行数组n(1 <= n <= 100000)，因此vector一定不会为空 
//int GetSubArrayMaxSum(vector<int>& v) 
//{       
//	int MaxSum = v[0];    
//	int CurSum = v[0]; 
//
//	for (size_t i = 1; i < v.size(); ++i)    
//	{ 
//		CurSum = CurSum + v[i];        
//		if (v[i] > CurSum)            
//			CurSum = v[i];                
//		if (CurSum > MaxSum)            
//			MaxSum = CurSum; 
//	}        
//	return MaxSum;
//	}
//
//int main() 
//{
//		int N = 0; 
//		// 数组中元素的个数    
//		while(cin >> N)    
//		{        
//			// 用vector接收数组中的元素        
//			vector<int> v;        
//			v.resize(N);        
//			for(size_t i = 0; i < N; ++i)            
//				cin>>v[i];                
//			cout<<GetSubArrayMaxSum(v)<<endl;    
//		}    
//		return 0; 
//}



//// 马戏团
//#include<iostream> 
//#include<algorithm> 
//#include<vector> 
//using namespace std; 
//struct player 
//{ 
//	int w; int h; 
//}; 
//bool com_w(player p1,player p2) 
//{  
//	//按照体重从小到大排序   
//	if(p1.w != p2.w)  
//		return p1.w <= p2.w;  
//	//在体重相等的条件下，身高高的在前（在上）   
//	else  return p1.h>p2.h; 
//} 
//int main(void) 
//{ 
//	int N; 
//	int h; 
//	int w; 
//	int index; 
//	vector<player> p; 
//	while(cin>>N) 
//	{     
//		p.clear();    
//
//for (int i = 0; i< N; i++)     
//{ 
//	player pt;        
//	cin >> index >> w >> h;        
//	pt.w = w;        
//	pt.h = h;        
//	p.push_back(pt); 
//}       
//sort(p.begin(), p.end(), com_w);          
////按照身高求最大上升子序列(此处为核心代码)      
//     int dp2[N+1];     
//	 int max = 0;     
//	 dp2[0] = 1;     
//	 for(int i = 1;i<N;i++)     
//	 {         
//		 dp2[i] = 1;         
//		 for(int j = 0;j<i;j++)         
//		 {             
//			 if(p[j].h <= p[i].h && dp2[j]+1 > dp2[i])             
//				 dp2[i] = dp2[j] + 1;         
//		 }     
//	 }          
//	 // 找出 dp2 中最大的数据, 即为最终结果     
//	 for(int i = 0;i<N;i++)            
//	       if(max < dp2[i])            
//		   max = dp2[i];     
//	 cout<<max<<endl; 
//	} 
//	system("pause"); 
//	return 0; 
//} 