//一维数组的初始化

//#include <stdio.h>
//
//int main()
//{
//	//创建一个数组 - 存放整型 - 10个
//	int arr[10] = {1, 2, 3};//不完全初始化,剩下的元素默认初始化为0
//	
//	char arr2[5] = { 'a','b' };
//	//char arr2[5] = { 'a',98 };
//
//	char arr3[5] = "ab";//ok
//
//	//int n = 5;
//	//char ch = [n];//err
//	
//	char arr4[] = "abcdef";//[]不用写也可以
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char arr4[] = "abcdef";
//
//	//问题：下面的代码打印出来的是什么？
//	printf("%d\n", sizeof(arr4));
//	//sizeoft算arr4所占空间的大小
//	//7个元素 - char 7 * 1 = 7
//	
//	printf("%d\n", strlen(arr4));
//	//strlen求字符减的长度 - '\O’之前的字符个数
//	//[a b c d e f /0]
//	//6
//	
//	// 1. strlen和 sizeof没有仕么关联
//	// 2. strlen是求字符串长度的 - 只能针对字符串求长度–库函数-使用得引头文件
//	// 3. sizeof计算变量，数组、类型的大小-单位是字节―操作符
//
//	return 0;
//}


////练习
//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//
//	return 0;
//}