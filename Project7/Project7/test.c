//#include<stdio.h>
//#include<stdlib.h>
//
//void reverse(char*left, char*right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp=*left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right++;
//	}
//}
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len);
//
//}
//
//
//int main()
//{
//	char arr[6] = {1,2,3,4,5,6};
//	int k = 6;
//	int 
//	printf("%s\n",arr)
//
//	return 0;
//}

//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	strncat(str1, str1, len1);
//	if (strstr(str1, str2 )== NULL )
//		return 0;
//	else
//		return 1;
//}
//
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[ ] = "bcdefh";
//	//得有一个函数。那么，怎么写？。
//	if (is_left_move(arr1, arr2) == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//void find_data(int arr[], int sz)
//{
//	int i = 0, j = 0;
//	int flag = 0;
//	printf("单独的两个数字: ");
//	for (; i < sz; i++)
//	{
//		flag = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[j] == arr[i] && i != j)
//				flag = 1;
//		}
//		if (0 == flag)
//			printf(" %d  ", arr[i]);
//
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int arr[] = {1,1,2,2,3,3,5,9,4,4};
//	int ret =0 ;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_data(arr, sz);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 1, 2, 2, 3, 1, 3, 2, 5, 5, 6, 9 };
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int numl = 0;
//	int num2 = 0;
//	find_two_diff_num(arr, sz, &num1, &num2);
//}

//喝汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total+= money ;
//	empty = money;
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//
//char *My_strcoy(char* dest, const char* src)
//{
//	char* ret = dest;
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
//	char arr1[10] = "abcdefg";
//	char arr2[20] = { 0 };
//	printf("%s\n", My_strcoy(arr2, arr1));
//	system("pause");
//	return 0;
//}
