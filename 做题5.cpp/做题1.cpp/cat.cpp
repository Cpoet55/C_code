#include"cat.h"
#include<iostream>
using std::cout;
using std::endl;
cat::cat()
{
	m_name = "Ð¡Ã¨";
}
cat::cat(string name)
{
	m_name = name;
}
void cat::sound()
{
	cout << "ß÷ÎØ" << endl;
}