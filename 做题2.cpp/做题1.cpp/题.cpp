//��������������������1�ĸ���
//�����Ǽ���һ���������Ʊ�ʾ1�ĸ�����ͨ����n>>i)&1���Ի�ȡ��һλ�Ķ�����ֵ��ÿ��n����һλ�����Ի��һλ��������ֵ
//����32�Σ�n���0��ѭ����ֹ��
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int count = 0;
//		while (n)
//		{
//			if ((n & 1) == 1)
//				count += 1;
//			n >>= 1;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}

//���ַ�������Сֵ
//#include<iostream>
//#include<string>
//using namespace std;
//template<class Type>
//Type min(Type& a, Type& b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//}
//char min(char a, char b)
//{
//	if (strcmp(&a, &b))
//		return b;
//	else
//		return a;
//}
//void main()
//{
//	cout << "��Сֵ" << min(10, 1) << endl;
//	cout << "��Сֵ" << min('a', 'b') << endl;
//	string s1 = "hi";
//	string s2 = "mr";
	//cout << "��Сֵ:" << min(s1, s2) << endl;
//}//

//class Solution{
//public:
//	int Add(int num1, int num2){
//		while (num2 != 0){
//			int sum = num1^num2;
//			int carray = (num1 &num2) << 1;
//			num1 = sum;
//			num2 = carray;
//		}
//		return num1;
//	}
//};


//�����ַ���
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
void main()
{
	char str1[30], str2[20];
	cout << "����������1��" << endl;
	cin >> str1;
	cout << "����������2" << endl;
	cin >> str2;
	if (30 > strlen(str1) + strlen(str2))
	{
		strcat(str1, str2);
		cout << "Now the string1 is:" << str1 << endl;
	}
	else
		cout << "����ʧ��" << endl;
}


//�ַ�����
#include<iostream>
using namespace std:
void main()
{
	char str1[30], str2[20] = { 'n', 'm', 'u','\0' };
	cout << "����������1:" << endl;
	scanf("%s", &str1);
	strcpy(str1, str2);
	cout << "����1������" << endl;
	printf("%s", str1);
}

