#include<iostream>
#include"human.h"
using std::cout;
using std::endl;
int main()
{
	human h1("��һ");
	human h2("�����ϰ�");
	human h3("С��");
	human::GetFeel(h3);
	for (int day = 0; day < 4; day++)
	{
		h1.Protect();
		h2.Destroy();
		if (day % 2 == 0)
		h3.Destroy();
		else
		h3.Protect();
	}
	cout << "���ڵĻ���ָ��:" << human::nTheEarth << ",�������ж��ˡ���" << endl;
	for (int day = 0; day < 3; day++)
	{
		h1.Protect();
		human::GetFeel(h2);
		h3.Protect();
	}
	cout << "���ڵĻ���ָ��:" << human::nTheEarth << endl;
	return 0;
}