//�ȱ߶����
#include<iostream>
using namespace std;
class polygon
{
protected:
	float m_dSide;
public:
	virtual void getArea() = 0;//�����ܳ�
	virtual void getPerimeter() = 0;//�������
};
class triangle :public polygon//�ȱ�������
{
public:
	triangle(float k)
	{
		m_dSide = k;
	}
	void getArea()//����ȱ������ε����
	{
		cout << "����ȱ������ε����Ϊ��" << 0.433*m_dSide*m_dSide << endl;
	}
	void getPerimeter()//����ȱ��������ܳ�
	{
		cout << "����ȱ������ε��ܳ��ǣ�" << 3.0f*m_dSide*m_dSide << endl;
	}
};
class square :public polygon
{
public:
	square(float k)
	{
		m_dSide = k;
	}
	void getArea()//�������������
	{
		cout << "������������Ϊ��" << m_dSide*m_dSide << endl;
	}
	void getPerimeter()//�����������ܳ�
	{
		cout << "��������ε��ܳ�Ϊ��" << 4.0f*m_dSide*m_dSide << endl;
	}
};