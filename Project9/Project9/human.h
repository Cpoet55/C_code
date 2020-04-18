#include<string>
using std::string;
class human{
public:
	string m_name;
	human();
	human(string name);
	static int nTheEarth;
	static void GetFeel(human h);
	void Protect();
	void Destroy();
};