#include"human.h"
#include<iostream>
using std::endl;
using std::cout;

int human::nTheEarth = 101;
human::human()
{
	m_name = "����";
}
human::human(string name)
{
	m_name = name;
}
void human::Destroy()
{
	human::nTheEarth -= 20;
	cout << m_name << "�ƻ�����" << endl;
}
void human::Protect()
{
	human::nTheEarth += 6;
	cout << m_name << "��Ŭ������"<<endl;
}
void human::GetFeel(human h)
{
	cout << "�������������";
	if (nTheEarth > 100)
		cout << "�����������" << endl;
	else if (nTheEarth > 80)
		cout << "�����������ʣ�����һ��" << endl;
	else if (nTheEarth > 60)
		cout << "�첻����ˮ���壬���ܽ���"<<endl;
	else if (nTheEarth>40)
		cout << "��ľϡ�٣���ɳ����" << endl;
	else if (nTheEarth>20)
		cout << "�������ѣ�ˮ��Դ��ȱ" << endl;
	else if (nTheEarth>0)
		cout << "����ĩ��" << endl;
	if (nTheEarth < 50)
	{
		cout << "���ܻ��������";
		h.Protect();
	}
}