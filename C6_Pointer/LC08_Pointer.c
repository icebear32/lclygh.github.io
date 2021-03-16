//指针运算

//指针-指针


//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 0;
//
//	//大指针减小指针
//	num = &arr[9] - &arr[0];
//	printf("%d\n", num);
//
//	//小指针减大指针
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//写法错误
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	//printf("%d\n", &arr[9] - &ch[0]);//err
//
//	return 0;
//}


//#include <stdio.h>
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	// strlen - 求字符串长度
//	//递归–模拟实现了strlen - 计数器的方式1，递归的方式2(之前)
//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}