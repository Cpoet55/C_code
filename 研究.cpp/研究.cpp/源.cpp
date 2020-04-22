////vector��ɾ���
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
//	// ʹ��find����3����λ�õ�iterator
//	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
//	// ��posλ��֮ǰ����30
//	v.insert(pos, 30);
//	vector<int>::iterator it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	pos = find(v.begin(), v.end(), 3);
//	// ɾ��posλ�õ�����
//	v.erase(pos);
//	it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}




#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;
int main(int argc _TCHAR* argv[])//����ط�����
{
	vector<int>v1, v2;
	v1.reserve(10);//�ֶ�����ռ�
	v2.reserve(10);
	v1 = vector<int>(8, 7);
	int array[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	v2 = vector<int>(array, array + 8);;
	cout << "v1����" << v1.capacity() << endl;
	cout << "v1��ǰ����:" << endl;
	for (decltype(v2.size()) i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout << endl;
	cout << "v2����" << v2.capacity() << endl;
	cout << "v2��ǰ����:" << endl;
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout << " " << v2[i];
	}
	cout << endl;
	v1.resize(0);
	cout << "v1������ͨ��resize �������0" << endl;
	if (!v1.empty())
		cout << "v1����" << v1.capacity() << endl;
	else
		cout << "v1�ǿյ�" << endl;
	cout << "��v1������չΪ8" << endl;
	v1.resize(8);
	cout << "v1��ǰ���" << endl;
	for (decltype(v1.size()) i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout << endl;
	v1.swap(v2);
	cout << "v1��v2 swap ��" << endl;
	cout << "v1��ǰ����:" << endl;
	cout << "v1����" << v1.capacity()<<endl;
	for (decltype(v1.size()) i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout << endl;
	v1.push_back(3);
	cout << "��v1��߼�����Ԫ��3" << endl;
	cout << "v1����" << v1.capacity() << endl;
	for (decltype(v1.size())i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout <<endl;
	v1.erase(v1.end() - 2);
	cout << "ɾ���˵����ڶ���Ԫ��" << endl;
	cout << "v1����" << v1.capacity() << endl;
	cout << "v1 ��ǰ����:" << endl;
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout << endl;
	v1.pop_back();
	cout << "v1 ͨ��ջ����pop_back���������һ��Ԫ��" << endl;
	cout << "v1 ��ǰ����" << endl;
	cout << "v1����" << v1.capacity() << endl;
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout << " " << v1[i];
	}
	cout << endl;
	return 0;
}