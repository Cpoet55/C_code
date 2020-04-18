#include<iostream>
#include"human.h"
using std::cout;
using std::endl;
int main()
{
	human h1("赵一");
	human h2("工厂老板");
	human h3("小明");
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
	cout << "现在的环境指数:" << human::nTheEarth << ",看来该行动了。。" << endl;
	for (int day = 0; day < 3; day++)
	{
		h1.Protect();
		human::GetFeel(h2);
		h3.Protect();
	}
	cout << "现在的环境指数:" << human::nTheEarth << endl;
	return 0;
}