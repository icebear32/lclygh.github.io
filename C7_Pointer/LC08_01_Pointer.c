//数组指针的使用
// 
//数组指针指向的是数组，那数组指针中存放的应该是数组的地址。

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//把数组arr的地址赋值给数组指针变量p
//}
////但是我们一般很少这样写代码



//#include <stdio.h>
//
//int main()
//{
//	//数组指针的用法 -- 繁琐
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	printf("%d ", *(*pa + i));//*pa == arr
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//	printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//	//直接遍历打印更方便
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}