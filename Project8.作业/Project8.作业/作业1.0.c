//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void MoveNum(int arr[], int sz)
//{
//	int *left = arr;//ȡ��ߵ�ֵ
//	int *right = arr + sz - 1;//ȡ�ұߵ�ֵ
//	int tmp = 0;
//	while (left < right)//������������Խ�磬ʼ�������С���ұ�
//	{
//		while ((left < right) && (*left) % 2 != 0)//��֤��Խ�絫����������
//		{
//			left++;
//		}
//		while ((left < right) && (*right) % 2 == 0)//��֤��Խ�絫�����ҵ�ż��
//		{
//			right--;
//		}
//		if (left < right)//���ҵ���������ż������
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
//	MoveNum(arr, sz);//��װһ������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//�ӵ�һ����ӡ�����һ��
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
//		//����������С��key���������һλ��
//		if (arr[left][right] < key) {
//			left++;
//		}
//		//���������ִ���key������ǰ��һλ��
//		if (arr[left][right] > key) {
//			right--;
//		}
//		//���������ֵ���key���򷵻�1��
//		if (arr[left][right] == key) {
//			return 1;
//		}
//	}
//	//���򷵻�1��
//	return 0;
//}
//int main() {
//	//����һ����ά���飻
//	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("������Ҫ���ҵ����֣�");
//	int key = 0;
//	scanf("%d", &key);
//	//�ҵ��˷���1,�Ҳ�������0��
//	int ret = Findnum(arr, ROW, COL, key);
//	if (1 == ret)
//	{
//		printf("�ҵ��ˣ�\n");
//	}
//	if (0 == ret)
//	{
//		printf("�Ҳ���!\n");
//	}
//	system("pause");
//	return 0;
//}
//��һ����ҵ
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
//	printf("��תǰ��%s\n", arr);
//	printf("��ת��λ:");
//	scanf("%d", &n);
//	while (n < 1 || n > len - 1)//����������ת�ַ������ٽ�ֵ�жϣ��Ƿ񳬹��ַ�������
//	{
//		if (n == len)//��ת�ַ���Ϊ�ַ�������ʱ����ת����ַ�������תǰ���ַ���һ�£����Կ�ֱ�����
//		{
//			printf("%s", arr);
//			system("pause");
//			return 0;
//		}
//		else
//		{
//			printf("�������\n");
//			scanf("%d", &n);
//		}
//	}
//	left_remove(arr, n, len);//�������������ת�ַ��Ĺ���
//	printf("��ת��: %s\n", arr);
//	system("pause");
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
////�����ַ���
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
//	k %= len;//k�п��ܴ����ַ����ĳ��ȣ�����Ҳ�Ǻ���ģ��൱��ת��һȦ��Ȼ������
//	Reverse(str, str + len - 1);//���巭ת
//	Reverse(str, str + len - 1 - k);//�ٷ�תǰ�벿��
//	Reverse(str + len - k, str + len - 1);//��ת��벿��	
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
//		printf("str2��str1��ת����Ĵ�\n");
//	}
//	else
//	{
//		printf("str2����str1��ת����Ĵ�\n");
//	}
//	system("pause");
//	return 0;
//}
//
//��һ����ҵ

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<stdlib.h>
//
//void find_diff_num(int *arr, int sz, int* px, int* py)
//{
//	//1.�����������
//	int num = 0;
//	int i = 0;
//	int pos = 0;
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];
//	}
//
//	//2.��num�Ķ�����λ�е�1��λ��
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//3.����posλΪ0����1����
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
//	int arr[10] = { 0 };//��¼ÿһ�ֲ��ܻ���ƿ����
//	while (1)
//	{
//		++i;
//		temp = temp / 2;//10,5,2,1
//		yushu = temp % 2;//0,0,1,0
//		arr[i] = yushu;
//		sum = temp + sum;//30,35,37,38,39
//		if (1 == temp)//�����һ�λ�ƿ�ӵ����жϣ���Ϊ��Ҫ����ǰ����ʣ��ƿ�ӵ�����
//		{
//			yushu = 0;
//			for (i = 0; i < 10; ++i)
//			{
//				yushu += arr[i];//ͳ�����еĲ��ܻ���ƿ��
//			}
//			yushu %= 10;
//			temp = (temp + yushu) / 2;//ȥ��ƿ��
//			sum = sum + temp;//�����ܻ�����ƿ����
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
////ģ��ʵ��strcat
//char *my_strcat1(char *dest, const char *src){
//	char * ret = dest;
//	//�Խ��ܵ�������ָ����ж���
//	assert(dest);
//	assert(src);
//	//��dest������\0
//	while (*dest){
//		dest++;
//	}
//	//��src���ݸ�����dest֮��
//	while (*src){
//		*dest++ = *src++;
//	}
//	//��dest����׷��\0
//	*dest = '\0';
//	return ret;
//}
////�⺯����ʵ�ַ���
//char *my_strcat2(char *dest, const char *src){
//	char * cp = dest;
//	//��dest������\0
//	while (*cp)
//	{
//		cp++;
//	}
//	//��src���ݸ�����dest֮��
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
