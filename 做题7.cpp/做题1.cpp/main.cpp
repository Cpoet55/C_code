#include<string>
#include<iostream>
#include"cat.h"
using std::cout;
using std::endl;
int main()
{
	cat c1 = cat("����");
	cat*pC1 = &c1;
	cout << "���ָ�����" << pC1->m_name << endl;
	cout << pC1->m_name << "�����˽�����" << endl;
	pC1->sound();
}