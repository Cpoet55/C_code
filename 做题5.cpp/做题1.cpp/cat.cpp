#include"cat.h"
#include<iostream>
using std::cout;
using std::endl;
cat::cat()
{
	m_name = "Сè";
}
cat::cat(string name)
{
	m_name = name;
}
void cat::sound()
{
	cout << "����" << endl;
}