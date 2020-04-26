////vector增删查改
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	vector<int>::iterator it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	v.pop_back();
//	v.pop_back();
//	it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}
//
//
//// find / insert / erase
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	// 使用find查找3所在位置的iterator
//	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
//	// 在pos位置之前插入30
//	v.insert(pos, 30);
//	vector<int>::iterator it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	pos = find(v.begin(), v.end(), 3);
//	// 删除pos位置的数据
//	v.erase(pos);
//	it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}




//#include<iostream>
//#include<vector>
//using std::cout;
//using std::endl;
//using std::vector;
//int main(int argc _TCHAR* argv[])//这个地方想想
//{
//	vector<int>v1, v2;
//	v1.reserve(10);//手动分配空间
//	v2.reserve(10);
//	v1 = vector<int>(8, 7);
//	int array[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	v2 = vector<int>(array, array + 8);;
//	cout << "v1容量" << v1.capacity() << endl;
//	cout << "v1当前各项:" << endl;
//	for (decltype(v2.size()) i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout << endl;
//	cout << "v2容量" << v2.capacity() << endl;
//	cout << "v2当前各项:" << endl;
//	for (vector<int>::size_type i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v2[i];
//	}
//	cout << endl;
//	v1.resize(0);
//	cout << "v1的容量通过resize 函数变成0" << endl;
//	if (!v1.empty())
//		cout << "v1容量" << v1.capacity() << endl;
//	else
//		cout << "v1是空的" << endl;
//	cout << "将v1容量扩展为8" << endl;
//	v1.resize(8);
//	cout << "v1当前各项：" << endl;
//	for (decltype(v1.size()) i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout << endl;
//	v1.swap(v2);
//	cout << "v1与v2 swap 了" << endl;
//	cout << "v1当前各项:" << endl;
//	cout << "v1容量" << v1.capacity()<<endl;
//	for (decltype(v1.size()) i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout << endl;
//	v1.push_back(3);
//	cout << "从v1后边加入了元素3" << endl;
//	cout << "v1容量" << v1.capacity() << endl;
//	for (decltype(v1.size())i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout <<endl;
//	v1.erase(v1.end() - 2);
//	cout << "删除了倒数第二个元素" << endl;
//	cout << "v1容量" << v1.capacity() << endl;
//	cout << "v1 当前各项:" << endl;
//	for (vector<int>::size_type i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout << endl;
//	v1.pop_back();
//	cout << "v1 通过栈操作pop_back放走了最后一个元素" << endl;
//	cout << "v1 当前各项" << endl;
//	cout << "v1容量" << v1.capacity() << endl;
//	for (vector<int>::size_type i = 0; i < v1.size(); i++)
//	{
//		cout << " " << v1[i];
//	}
//	cout << endl;
//	return 0;
//}
//12qaz


//constructing lists
#include<iostream>
#include<list>

int main()
{
	std::list<int>l1;
	std::list<int>l2 (4, 100);
	std::list<int>l3 (l2.begin(), l2.end());
	std::list<int>l4 (l3);//用13拷贝构造
	//以数组为迭代器区间构造15
	int array[] = { 16, 2, 77, 29 };
	std::list<int>l5(array, array + sizeof(array) / sizeof(int));
	//用迭代器方式打印15中的元素
	for (std::list<int>::iterator it = l5.begin();it!=l5.end();it++)
		std::cout << *it << " ";
	std::cout << endl;
	//C++11范围for的方式遍历
	for (auto& e : l5)
		std::cout << e << " ";
	std::cout << endl;
	return 0;
}



#include<iostream>
using namespace std;
#include<list>
void print_list(const list<int> & l)
{
	//注意这里调用的是list的begin()const,返回list的const_iterator对象
	for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it)
	{
		cout << *it << " ";
		//*it = 10; 编译不通过
	}
	cout << endl;
}
int main()
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	list<int>l(array, array + sizeof(array) / sizeof(array[0]));
	for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
		cout << *it << " ";
	cout << endl;
	for (list<int>::reverse_iterator it = l.rbegin(); it != l.rend(); ++it)
		cout << *it << " ";
	cout << endl;
	return 0;
}

