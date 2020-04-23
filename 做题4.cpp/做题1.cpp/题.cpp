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


//解读密码
#include<iostream>
#include<string>
#include<stdio.h>
#include<cstdio>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s)){
		int len = s.length();
		for (int i = 0; i < len; i++){
			if (s[i] >= '0'&&s[i] <= '9')
				cout << s[i];
		}
		cout << endl;
	}
	return 0;
}


 //走迷宫
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
using namespace std;
struct pos{ int x, y, level; };
int bfs(vector<vector<char>>&map)
{
	const int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
	queue<pos>que;
	int m = map.size(), n = map[0].size();
	vector < vector < bool >>visit(m, vector<bool>(n, false));

	pos start{ 0, 1, 0 }, end{ 9, 8, 0 };
	que.push(start);
	visit[start.x][start.y] = true;
	while (!que.empty())
	{
		pos cur = que.front(), next;//定义cur和next
		que.pop();
		for (int i = 0; i<4; ++i)//BFS,优先四个方向进行搜索
		{
			next.x = cur.x + dir[i][0];
			next.y = cur.y + dir[i][1];
			next.level = cur.level + 1;
			if (next.x == end.x&&next.y == end.y)return next.level;
			if (next.x >= 0 && next.x<m&&next.y >= 0 && next.y<n&&\
				!visit[next.x][next.y] && map[next.x][next.y] == '.')
			{
				que.push(next);
				visit[next.x][next.y] = true;
			}
		}
	}
	return 0;
}
int main()
{
	vector<vector<char>>map(10, vector<char>(10));
	while (cin >> map[0][0])//由多个测试用例，需要全部读取
	{
		for (int i = 0; i<10; ++i)
		for (int j = 0; j<10; ++j)
		{
			if (i == 0 && j == 0)continue;
			cin >> map[i][j];
		}
		cout << bfs(map) << endl;
	}
	return 0;

}