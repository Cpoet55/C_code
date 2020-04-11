//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void MoveNum(int arr[], int sz)
//{
//	int *left = arr;//取左边的值
//	int *right = arr + sz - 1;//取右边的值
//	int tmp = 0;
//	while (left < right)//整体条件不能越界，始终是左边小于右边
//	{
//		while ((left < right) && (*left) % 2 != 0)//保证不越界但是先找奇数
//		{
//			left++;
//		}
//		while ((left < right) && (*right) % 2 == 0)//保证不越界但是先找到偶数
//		{
//			right--;
//		}
//		if (left < right)//将找到的奇数和偶数交换
//		{
//			tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	MoveNum(arr, sz);//封装一个函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//从第一个打印到最后一个
//	}
//	system("pause");
//	return 0;
//}
//
//
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#define ROW 3
//#define COL 3
//int Findnum(int arr[ROW][COL], int row, int col, int key) {
//	int left = 0;
//	int right = col - 1;
//	while ((left >= 0) && (right < col)) {
//		//如果这个数字小于key，则向后移一位；
//		if (arr[left][right] < key) {
//			left++;
//		}
//		//如果这个数字大于key，则向前移一位；
//		if (arr[left][right] > key) {
//			right--;
//		}
//		//如果这个数字等于key，则返回1；
//		if (arr[left][right] == key) {
//			return 1;
//		}
//	}
//	//否则返回1；
//	return 0;
//}
//int main() {
//	//定义一个二维数组；
//	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("请输入要查找的数字：");
//	int key = 0;
//	scanf("%d", &key);
//	//找到了返回1,找不到返回0；
//	int ret = Findnum(arr, ROW, COL, key);
//	if (1 == ret)
//	{
//		printf("找到了！\n");
//	}
//	if (0 == ret)
//	{
//		printf("找不到!\n");
//	}
//	system("pause");
//	return 0;
//}
//下一个作业
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void left_remove(char *p, int n, int len)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		char tmp = p[0];
//		for (j = 0; j < len; j++)
//		{
//			p[j] = p[j + 1];
//		}
//		p[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int n;
//	int len = strlen(arr);
//	printf("旋转前：%s\n", arr);
//	printf("旋转几位:");
//	scanf("%d", &n);
//	while (n < 1 || n > len - 1)//对于输入旋转字符数的临界值判断，是否超过字符串长度
//	{
//		if (n == len)//旋转字符数为字符串长度时，旋转后的字符串与旋转前的字符串一致，所以可直接输出
//		{
//			printf("%s", arr);
//			system("pause");
//			return 0;
//		}
//		else
//		{
//			printf("输入错误\n");
//			scanf("%d", &n);
//		}
//	}
//	left_remove(arr, n, len);//函数用以完成旋转字符的功能
//	printf("旋转后: %s\n", arr);
//	system("pause");
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
////左旋字符串
//void Reverse(char*left, char*right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void Reverse_K(char*str, int k)
//{
//	int len = strlen(str);
//	k %= len;//k有可能大于字符串的长度，但这也是合理的，相当于转了一圈，然后再移
//	Reverse(str, str + len - 1);//整体翻转
//	Reverse(str, str + len - 1 - k);//再翻转前半部分
//	Reverse(str + len - k, str + len - 1);//翻转后半部分	
//}
//
//int IsLeftRotate(char*str1, char*str2)
//{
//	int ret;
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	while (len1)
//	{
//		Reverse_K(str1, 1);
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//		len1--;
//	}
//	return 0;
//}
//
//int main()
//{
//
//	char str1[] = "ABCD";
//	char*str2 = "BCDA";
//	Reverse_K(str1, 3);
//	int ret = IsLeftRotate(str1, str2);
//	if (ret == 1)
//	{
//		printf("str2是str1旋转过后的串\n");
//	}
//	else
//	{
//		printf("str2不是str1旋转过后的串\n");
//	}
//	system("pause");
//	return 0;
//}
//
//下一个作业

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<stdlib.h>
//
//void find_diff_num(int *arr, int sz, int* px, int* py)
//{
//	//1.所有数字异或
//	int num = 0;
//	int i = 0;
//	int pos = 0;
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];
//	}
//
//	//2.找num的二进制位中的1的位置
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//3.按照pos位为0或者1分组
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*px ^= arr[i];
//		}
//		else
//		{
//			*py ^= arr[i];
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n1 = 0;
//	int n2 = 0;
//	find_diff_num(arr, sz, &n1, &n2);
//	printf("%d %d", n1, n2);
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int money = 20;
//	int sum = money;
//	int temp = 20;
//	int yushu = 0;
//	int i = 0;
//	int arr[10] = { 0 };//记录每一轮不能换的瓶子数
//	while (1)
//	{
//		++i;
//		temp = temp / 2;//10,5,2,1
//		yushu = temp % 2;//0,0,1,0
//		arr[i] = yushu;
//		sum = temp + sum;//30,35,37,38,39
//		if (1 == temp)//将最后一次换瓶子单独判断，因为还要考虑前几轮剩余瓶子的问题
//		{
//			yushu = 0;
//			for (i = 0; i < 10; ++i)
//			{
//				yushu += arr[i];//统计所有的不能换的瓶子
//			}
//			yushu %= 10;
//			temp = (temp + yushu) / 2;//去换瓶子
//			sum = sum + temp;//所有能换到的瓶子数
//			break;
//		}
//
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <assert.h>
//
//char *MyStrcpy(char *dest, const char *src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[7] = "abcdef";
//	char arr2[20] = { 0 };
//	printf("%s\n", MyStrcpy(arr2, arr1));
//	system("pause");
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
////模拟实现strcat
//char *my_strcat1(char *dest, const char *src){
//	char * ret = dest;
//	//对接受到的两个指针进行断言
//	assert(dest);
//	assert(src);
//	//将dest遍历至\0
//	while (*dest){
//		dest++;
//	}
//	//将src内容复制在dest之后
//	while (*src){
//		*dest++ = *src++;
//	}
//	//在dest后面追加\0
//	*dest = '\0';
//	return ret;
//}
////库函数中实现方法
//char *my_strcat2(char *dest, const char *src){
//	char * cp = dest;
//	//将dest遍历至\0
//	while (*cp)
//	{
//		cp++;
//	}
//	//将src内容复制在dest之后
//	while (*cp++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char str1[20] = "Hello ";
//	char str2[] = "Gxd Blog!";
//	char *ret = my_strcat1(str1, str2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}

#include<stdio.h>
void my_strcpy(char arr1[], char brr1[])
{
	int j = 0;
	int k = 0;
	while (brr1[j] != 0)
	{
		arr1[j] = brr1[j];
		j++;
	}
	arr1[j] = '\0';
	while (arr1[k] != 0)
		printf("%c", arr1[k]);
		k++;
	}
}

void main()
{
	char arr[] = "hello";
	char brr[] = "world";
	my_strcpy(arr, brr); 
	printf("\n");
}
