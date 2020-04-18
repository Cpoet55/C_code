#include"human.h"
#include<iostream>
using std::endl;
using std::cout;

int human::nTheEarth = 101;
human::human()
{
	m_name = "佚名";
}
human::human(string name)
{
	m_name = name;
}
void human::Destroy()
{
	human::nTheEarth -= 20;
	cout << m_name << "破坏环境" << endl;
}
void human::Protect()
{
	human::nTheEarth += 6;
	cout << m_name << "尽努力保护"<<endl;
}
void human::GetFeel(human h)
{
	cout << "环境现在情况：";
	if (nTheEarth > 100)
		cout << "世界如此美好" << endl;
	else if (nTheEarth > 80)
		cout << "空气还算新鲜，还差一点" << endl;
	else if (nTheEarth > 60)
		cout << "天不蓝，水不清，还能接受"<<endl;
	else if (nTheEarth>40)
		cout << "树木稀少，黄沙漫天" << endl;
	else if (nTheEarth>20)
		cout << "呼吸困难，水资源短缺" << endl;
	else if (nTheEarth>0)
		cout << "世界末日" << endl;
	if (nTheEarth < 50)
	{
		cout << "感受环境很糟糕";
		h.Protect();
	}
}