//函数指针调用类成员
#include<iostream>
using namespace std;
class cat
{
public:
	string m_name;
	void sound();
	cat();
	cat(string name);
};