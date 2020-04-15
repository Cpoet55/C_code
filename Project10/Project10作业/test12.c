//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//
//unsigned int reverse_bit(unsigned int value)
//{
//	int i, ret, sum = 0;
//	for (i = 0; i<32; i++)
//	{
//		ret = value & 1;
//		sum = sum + (ret*pow(2, (31 - i)));
//		value = value >> 1;
//
//	}
//	return sum;
//}
//
//int main()
//{
//	printf("%u\n", reverse_bit(25));
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int avg = a - (a - b) / 2;
//	printf("%d", avg);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4 , 5 , 4 , 3 , 2 , 1 ,0 };
//	int ret = arr[0];
//	printf("arr = %d ", arr[0]);
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		ret ^= arr[i];
//		printf("%d ", arr[i]);
//
//	}
//	printf("\nThe number is %d\n", ret);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//void reverve_swap(char *left, char *right)
//{
//	assert(left != NULL); //断言不是空指针
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//char *reverve(char *p)
//{
//	int len = strlen(p);
//	char *start = p;
//	char *end = NULL;
//	char *ret = p;
//	reverve_swap(p, p + len - 1); //逆序整个字符串
//	while (*p)
//	{
//		start = p;
//		while ((*p != ' ') && (*p != '\0')) //找到一块单词
//		{
//			p++;
//		}
//		end = p - 1;
//		reverve_swap(start, end);//逆序单个单词
//		if (*p == ' ') //找到空格
//			p++;
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr[] = "student a am I";
//	printf("交换前：%s\n", arr);
//	printf("交换后：%s\n", reverve(arr));
//	system("pause");
//	return 0;
//}
