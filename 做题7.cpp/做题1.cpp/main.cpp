#include<string>
#include<iostream>
#include"cat.h"
using std::cout;
using std::endl;
int main()
{
	cat c1 = cat("花花");
	cat*pC1 = &c1;
	cout << "用手抚摸了" << pC1->m_name << endl;
	cout << pC1->m_name << "发出了叫声：" << endl;
	pC1->sound();
}