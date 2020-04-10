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
//幼育娱阅艺，少时诵诗书，晨成乘车策，老笠落岭陋。

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
//注意，数组名，从0开始，地址指向首元素地址，以上（0,1）是一个逗号表达式，整个表达式最后是最后一个式的结果。


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	/**(p + 4) == p[4]*/
//	p =(int(*)[4]) a;//为什么显示无法从int[5][5]转换为int（*）[4];
//	/*答：类型不一样，要强制转换类型*/
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
//看不不到结果是怎么回事？？？？

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
////需要培养逻辑思维了
//#include<stdio.h>//怎么回事，好好想想
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


//return 返回的是什么，为什么不一样？？？
//#include<stdio.h>
//int main()
//{
//	int max(int x, int y);
//	int a, b, c;
//	printf("输入数据");
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
//为什么和书上的不一样
//？？？？？？
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
//	cout << "请用户输入10个整数" << endl;
//	while (1)
//	{
//		if (i < 10)
//		{
//			cin >> a[1];
//			i += 1;
//		}
//		else
//		{
//			cout << "您已经输入10个整数了！" << endl;
//			break;
//		}
//	}
//	cout << "请输入" << endl;
//	cin >> i;
//	for (int b = 0; b < 10; b++)
//	{
//		if (a[b] == i)
//		{
//			cout << "您查找的数据在数组中的下标为" << b << endl;
//		}
//		else
//		{
//			cout << "正在查找，请稍后" << endl;
//		}
//	}
//	return 0;
//}//////为什么没有办法识别头文件？？？？
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
//	cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
//	cout << "\t最大值：" << (numeric_limits<bool>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
//	cout << "char: \t\t" << "所占字节数：" << sizeof(char);
//	cout << "\t最大值：" << (numeric_limits<char>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
//	cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
//	cout << "\t最大值：" << (numeric_limits<signed char>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
//	cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
//	cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
//	cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
//	cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
//	cout << "short: \t\t" << "所占字节数：" << sizeof(short);
//	cout << "\t最大值：" << (numeric_limits<short>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
//	cout << "int: \t\t" << "所占字节数：" << sizeof(int);
//	cout << "\t最大值：" << (numeric_limits<int>::max)();
//	cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
//	cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
//	cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
//	cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
//	cout << "long: \t\t" << "所占字节数：" << sizeof(long);
//	cout << "\t最大值：" << (numeric_limits<long>::max)();
//	cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
//	cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
//	cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
//	cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
//	cout << "double: \t" << "所占字节数：" << sizeof(double);
//	cout << "\t最大值：" << (numeric_limits<double>::max)();
//	cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
//	cout << "long double: \t" << "所占字节数：" << sizeof(long double);
//	cout << "\t最大值：" << (numeric_limits<long double>::max)();
//	cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
//	cout << "float: \t\t" << "所占字节数：" << sizeof(float);
//	cout << "\t最大值：" << (numeric_limits<float>::max)();
//	cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
//	cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
//	cout << "\t最大值：" << (numeric_limits<size_t>::max)();
//	cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
//	cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
//	// << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
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
//	cout << "Hi  宝贝你多大了="<<iAge << endl;
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
//		cout << "k大于默认参数" << endl;
//	}
//	else
//	{
//		cout << "k小于默认参数" << endl;
//	}
//	p = Less(k, 4);
//	if (p)
//	{
//		cout << "k大于参数b" << endl;
//	}
//	else
//	{
//		cout << "k小于参数b" << endl;
//	}
//	system("pause");
//
//	return 0;
//}

//#include<iostream>//-------------P86页
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
/////-----为什么输出的是int add   double add？？？？这个是什么意思？


//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int globalCount = 33;
//int GetCount();
//void SetCount(int k);
//void main()
//{
//	int count = 100;
//	cout << globalCount << endl;//输出全局变量
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
//	// int& ra;   // a (该条语句编译时会出错)
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
////传值调用
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
////引用调用
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
//下面代码会出现什么问题？
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
//	cout << "三个指针都指向同一个变量i，同一个内存" << endl;
//	cout << "指向常量的指针pR操作" << endl;
//	cout << "通过赋值语句修改i:" << endl;
//	i = 100;
//	cout << "i:" << i << endl;
//	cout << "将pR的地址变成常量c的地址:" << endl;
//	pR = &c;
//	cout << "*pR:" << *pR << endl;
//	cout << "指向常量的指针pC操作:" << endl;
//	cout << "通过pC改变i值:" << endl;
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
//		printf("申请的内存空间要大于零!\n");
//	*p = (char*)malloc(num);
//	if (*p == NULL)
//		printf("申请内存失败!\n");
//}
//
//void test(){
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello world");//这个怎么把这个不安全去掉？？？？？
//	printf("%s\n", str);
//	free(str);
//	str = NULL;
//}
