//等边多边形
#include<iostream>
using namespace std;
class polygon
{
protected:
	float m_dSide;
public:
	virtual void getArea() = 0;//计算周长
	virtual void getPerimeter() = 0;//计算面积
};
class triangle :public polygon//等边三角形
{
public:
	triangle(float k)
	{
		m_dSide = k;
	}
	void getArea()//计算等边三角形的面积
	{
		cout << "这个等边三角形的面积为：" << 0.433*m_dSide*m_dSide << endl;
	}
	void getPerimeter()//计算等边三角形周长
	{
		cout << "这个等边三角形的周长是：" << 3.0f*m_dSide*m_dSide << endl;
	}
};
class square :public polygon
{
public:
	square(float k)
	{
		m_dSide = k;
	}
	void getArea()//计算正方形面积
	{
		cout << "这个正方形面积为：" << m_dSide*m_dSide << endl;
	}
	void getPerimeter()//计算正方形周长
	{
		cout << "这个正方形的周长为：" << 4.0f*m_dSide*m_dSide << endl;
	}
};