//#include <stdio.h>
//int main()
//{
//	int p1, p2, a;
//	char a[20];
//	char *p1 = (char *)a;
//	char *p2 = (char*)(a + 5);
//	int n = p2 - p1;
//	printf("%d", n);
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	double a=0, b=0, c=0, disc, x1, x2, realpart, imagpart;
//	scanf_s("%lf,%lf,%lf,&a,&b,&c");
//	printf("The equation");
//	if (fabs(a) <= 1e-6)
//		printf("is not a quadratic\n");
//	else
//	{
//		disc = b*b - 4 * a*c;
//		if (fabs(disc) <= 1e-6)
//			printf("has two equal roots:%8.4f\n,-b/(2*a)");
//		else
//		if (disc > 1e-6)
//		{
//			x1 = (-b + sqrt(disc)) / (2 * a);
//			x2 = (-b - sqrt(disc)) / (2 * a);
//			printf("has distinct real roots:%8.4f and %8.4f\n,x1,x2");
//		}
//		else
//		{
//			realpart = -b / (2 - a);
//			imagpart = sqrt(-disc) / (2 * a);
//			printf("has complex root:\n");
//			printf("%8.4f+%8.4fi\n", realpart, imagpart);
//			printf("%8.4f-%8.4fi\n", realpart, imagpart);
//		}
//	}
//	system("pause");
//	return 0;
//}
//���������գ���ʱ��ʫ�飬���ɳ˳��ߣ���������ª��

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	system("pause");
//}
//ע�⣬����������0��ʼ����ַָ����Ԫ�ص�ַ�����ϣ�0,1����һ�����ű��ʽ���������ʽ��������һ��ʽ�Ľ����


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	/**(p + 4) == p[4]*/
//	p =(int(*)[4]) a;//Ϊʲô��ʾ�޷���int[5][5]ת��Ϊint��*��[4];
//	/*�����Ͳ�һ����Ҫǿ��ת������*/
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int x, y;
//	printf("enter x:");
//	scanf_s("%d", &x);
//	y = -1;
//	if (x!=0)
//	if (x > 0)
//		y = 1;
//	else
//		y = 0;
//	printf("x=%d,y=%d\n", x, y);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x, y;
//	printf("enter x:");
//	scanf_s("%d", &x);
//	y = 0;
//	if (x>=0)
//	if (x > 0)y = 1;
//	else y = -1;
//	printf("x=%d,y=%d\n", x,y);
//	return 0;
//}
//���������������ô���£�������

//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } }; 
//	int b[3][2]; int i, j;
//	printf("array a:\n");
//	for (i = 0; i <= 1; i++)
//	{
//		for (j = 0; j <= 2; j++)
//		{
//			printf("%5d", a[i][j]);
//			b[j][i] = a[i][j];
//		}
//		printf("\n");
//	}
//	printf("array b:\n");
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 1; j++)
//			printf("%5d", b[i][j]);
//		printf("\n");
//	}
//	return 0;
//	system("pause");
//}
////��Ҫ�����߼�˼ά��
//#include<stdio.h>//��ô���£��ú�����
//#include<stdlib.h>
//int main()
//{
//	int i, j, row = 0, col = 0, max;
//	int a[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { -5, -8, 9, 10 } };
//	max = a[0][0];
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 3;j++)
//		if (max > a[i][j])
//		{
//			printf("max=%d,row=%d,col=%d", max, row, col);
//		}
//		else
//		{
//			printf("a[i][j]=%d,row=%d,col=%d", a[i][j], row, col);
//
//		}
//
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, j, row = 0, col = 0, max;
//	int a[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { -5, -8, 9, 10 } };
//	max = a[0][0];
//	for (i = 0; i <= 2; i++)
//		for (j = 0; j <= 3; j++)
//		if (a[i][j] > max)
//		{
//			max = a[i][j];
//			row = i;
//			col = j;
//		}
//			printf("max=%d\nrow=%d\ncol=%d\n", max, row, col);
//	system("pause");
//	return 0;
//}


//char str1[30] = { "I Love" };
//char str1[10] = { "I Love" };

//
//int max(int x,int y)
//{
//	int z;
//	z = x > y ? x : y;
//	return z;
//}


//return ���ص���ʲô��Ϊʲô��һ��������
//#include<stdio.h>
//int main()
//{
//	int max(int x, int y);
//	int a, b, c;
//	printf("��������");
//	scanf_s("%d,%d", &a, &b);
//	c = max(a, b);
//	printf("max is %d\n", c);
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	z = x > y ? x : y;
//	return z;
//}
//Ϊʲô�����ϵĲ�һ��
//������������
////#include<stdio.h>
//int main()
//{
//	void hanoi(int n, char one, char two, char three);
//	int m;
//	printf("intup the...");
//	scanf_s("%d", &m);
//	printf("The.....diskes\n", m);
//		return 0;
//}
//void hanoi(int n, char one, char two, char three)
//{
//	void move(char x, char y);
//	if (n == 1)
//		move(one, two);
//	else
//	{
//		hanoi(n - 1, one,three, two);
//		move(one, three);
//		hanoi(n - 1, two,one, three);
//	}
//}
//void move(char x, char y)
//{
//	printf("%c-->%c\n", x, y);
//}
//
//#include<iostream.h>
//#include<iostream.h>
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	cout << "���û�����10������" << endl;
//	while (1)
//	{
//		if (i < 10)
//		{
//			cin >> a[1];
//			i += 1;
//		}
//		else
//		{
//			cout << "���Ѿ�����10�������ˣ�" << endl;
//			break;
//		}
//	}
//	cout << "������" << endl;
//	cin >> i;
//	for (int b = 0; b < 10; b++)
//	{
//		if (a[b] == i)
//		{
//			cout << "�����ҵ������������е��±�Ϊ" << b << endl;
//		}
//		else
//		{
//			cout << "���ڲ��ң����Ժ�" << endl;
//		}
//	}
//	return 0;
//}//////Ϊʲôû�а취ʶ��ͷ�ļ���������
//
//#include<iostream>
//using namespace std;
//static int ia;
//const int ib = 10;
//void main(void)
//{
//	double d1;
//	cout << "d1=" << d1 << endl;
//
//}
//
//
//char a[20];
//char *p1 = (char *)a;
//char *p2 = (char *)(a + 5);
//int n = p2 - p1;



//#include<iostream>  
//#include<stdlib.h>
//
//using namespace std;
//
//int main()
//{
//	cout << "type: \t\t" << "************size**************" << endl;
//	cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool);
//	cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;
//	cout << "char: \t\t" << "��ռ�ֽ�����" << sizeof(char);
//	cout << "\t���ֵ��" << (numeric_limits<char>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<char>::min)() << endl;
//	cout << "signed char: \t" << "��ռ�ֽ�����" << sizeof(signed char);
//	cout << "\t���ֵ��" << (numeric_limits<signed char>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<signed char>::min)() << endl;
//	cout << "unsigned char: \t" << "��ռ�ֽ�����" << sizeof(unsigned char);
//	cout << "\t���ֵ��" << (numeric_limits<unsigned char>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<unsigned char>::min)() << endl;
//	cout << "wchar_t: \t" << "��ռ�ֽ�����" << sizeof(wchar_t);
//	cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;
//	cout << "short: \t\t" << "��ռ�ֽ�����" << sizeof(short);
//	cout << "\t���ֵ��" << (numeric_limits<short>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;
//	cout << "int: \t\t" << "��ռ�ֽ�����" << sizeof(int);
//	cout << "\t���ֵ��" << (numeric_limits<int>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;
//	cout << "unsigned: \t" << "��ռ�ֽ�����" << sizeof(unsigned);
//	cout << "\t���ֵ��" << (numeric_limits<unsigned>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;
//	cout << "long: \t\t" << "��ռ�ֽ�����" << sizeof(long);
//	cout << "\t���ֵ��" << (numeric_limits<long>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;
//	cout << "unsigned long: \t" << "��ռ�ֽ�����" << sizeof(unsigned long);
//	cout << "\t���ֵ��" << (numeric_limits<unsigned long>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;
//	cout << "double: \t" << "��ռ�ֽ�����" << sizeof(double);
//	cout << "\t���ֵ��" << (numeric_limits<double>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;
//	cout << "long double: \t" << "��ռ�ֽ�����" << sizeof(long double);
//	cout << "\t���ֵ��" << (numeric_limits<long double>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;
//	cout << "float: \t\t" << "��ռ�ֽ�����" << sizeof(float);
//	cout << "\t���ֵ��" << (numeric_limits<float>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;
//	cout << "size_t: \t" << "��ռ�ֽ�����" << sizeof(size_t);
//	cout << "\t���ֵ��" << (numeric_limits<size_t>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<size_t>::min)() << endl;
//	cout << "string: \t" << "��ռ�ֽ�����" << sizeof(string) << endl;
//	// << "\t���ֵ��" << (numeric_limits<string>::max)() << "\t��Сֵ��" << (numeric_limits<string>::min)() << endl;  
//	cout << "type: \t\t" << "************size**************" << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//void ShowMessage();
//void ShowAge();
//void ShowIndex();
//void main()
//{
//	ShowMessage();
//	ShowAge();
//	ShowIndex();
//	system("pause");
//}
//void ShowMessage()
//{
//	cout << "I  love you" << endl;
//}
//void ShowAge()
//{
//	int iAge = 23;
//	cout << "Hi  ����������="<<iAge << endl;
//}
//void ShowIndex()
//{
//	int iIndex = 10;
//	cout << "iIndex:" << iIndex << endl;
//
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//bool Less(int a, int b = 1)
//{
//	if (a > b)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int k = 3;
//	bool p;
//	p = Less(k);
//	if (p)
//	{
//		cout << "k����Ĭ�ϲ���" << endl;
//	}
//	else
//	{
//		cout << "kС��Ĭ�ϲ���" << endl;
//	}
//	p = Less(k, 4);
//	if (p)
//	{
//		cout << "k���ڲ���b" << endl;
//	}
//	else
//	{
//		cout << "kС�ڲ���b" << endl;
//	}
//	system("pause");
//
//	return 0;
//}

//#include<iostream>//-------------P86ҳ
//#include<stdlib.h>
//using namespace std;
//long lCount;
//void move(int n, char x, char y, char z)
//{
//	if (n == 1)
//		cout << "Times:" << ++lCount << x << "->" << z << endl;
//	else
//	{
//		move(n - 1, x, z, y);
//		cout << "Times:" << ++lCount << x << "->" << z << endl;
//		move(n - 1, y, x, z);
//	}
//}
//void main()
//{
//	int n;
//	lCount = 0;
//	cout << "please  input a number" << endl;
//	cin >> n;
//	system("pause");
//	move(n, 'a', 'b', 'c');
//}
//

//#include<iostream>
//using namespace std;
//long Fac(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//void main()
//{
//	int n;
//	long f;
//	cout << "please input a number" << endl;
//	cin >> n;
//	f = Fac(n);
//	cout << "Result:" << f << endl;
//}

//#include<iostream>
//using namespace std;
//typedef unsigned int UINT;
//long Fac(const UINT n)
//{
//	long ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//}
//	return ret;
//}
//void main()
//{
//	int n;
//	long f;
//	cout << "please input  a  number " << endl;
//	cin >> n;
//	f = Fac(n);
//	cout << "Result :" << f << endl;
//}


//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int add(int x, int y)
//{
//	cout << "int add" << endl;
//	return x + y;
//}
//double add(double x, double y)
//{
//	cout << "double add" << endl;
//	return x + y;
//}
//int main()
//{
//	int ivar = add(5, 2);
//	float fvar = add(10.5, 11.4);
//	system("pause");
//	return 0;
//}
/////-----Ϊʲô�������int add   double add�������������ʲô��˼��


//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int globalCount = 33;
//int GetCount();
//void SetCount(int k);
//void main()
//{
//	int count = 100;
//	cout << globalCount << endl;//���ȫ�ֱ���
//	SetCount(200);
//	cout << GetCount() << endl;
//	system("pause");
//}
//void SetCount(int k)
//{
//	int hisCount;
//	hisCount = k;
//	globalCount = hisCount;
//}
//int  GetCount()
//{
//	int myCount;
//	myCount = globalCount;
//	return myCount;
//
//#include<stdio.h>
//#include<iostream>
//void TestRef()
//{
//	int a = 10;
//	int b = 20;
//	// int& ra;   // a (����������ʱ�����)
//	scanf("int "a,b)
//	int& ra = a;   //b
//	int& rra = a;
//	//int& ra= b;  //c
//	printf("%p %p %p\n", &a, &ra, &rra);
//
//}

//
//
//#include <iostream>
//
//using namespace std;
//
//
////��ֵ����
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
////���õ���
//void GetMemory_1(char *&p)
//{
//	p = (char *)malloc(100);
//}
//
//int main()
//{
//	char *str = NULL;
//	char *str1 = NULL;
//	GetMemory(&str);
//	GetMemory_1(str1);
//	strcpy(str, "hello world");
//	strcpy(str1, "hello world1");
//	cout << str << endl;
//	cout << str1 << endl;
//	free(str);
//	free(str1);
//	return 0;
//}
//
//
//�����������ʲô���⣿
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//


//#include<iostream>
//#include<stdlib.h>
//using std::cout;
//using std::endl;
//int main()
//{
//	int i = 5;
//	const int c = 99;
//	const int* pR = &i;
//	int* const pC = &i;
//	const int* const pCR = &i;
//	cout << "����ָ�붼ָ��ͬһ������i��ͬһ���ڴ�" << endl;
//	cout << "ָ������ָ��pR����" << endl;
//	cout << "ͨ����ֵ����޸�i:" << endl;
//	i = 100;
//	cout << "i:" << i << endl;
//	cout << "��pR�ĵ�ַ��ɳ���c�ĵ�ַ:" << endl;
//	pR = &c;
//	cout << "*pR:" << *pR << endl;
//	cout << "ָ������ָ��pC����:" << endl;
//	cout << "ͨ��pC�ı�iֵ:" << endl;
//	*pC = 6;
//	cout << "i:" << i << endl;
//	cout << "........" << endl;
//	cout << "..dasdad" << endl;
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//void GetMemory(char **p, int num){
//	if (num <= 0)
//		printf("������ڴ�ռ�Ҫ������!\n");
//	*p = (char*)malloc(num);
//	if (*p == NULL)
//		printf("�����ڴ�ʧ��!\n");
//}
//
//void test(){
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello world");//�����ô���������ȫȥ������������
//	printf("%s\n", str);
//	free(str);
//	str = NULL;
//}
