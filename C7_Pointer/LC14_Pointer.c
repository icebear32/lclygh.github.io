//指针参数

//二级指针传参

////使用二级指针传参数的函数
//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;//一级指针
//	int** pp = &p;//二级指针
//	test(pp);
//	test(&p);
//	return 0;
//}




////二级指针
//#include <stdio.h>
//
//void test(int** p)//要求课传入一级指针或者二级指针的地址
//{}
//
//int main()
//{
//	int* ptr;//一级指针
//	int** pp = &ptr;//二级指针
//	test(&ptr);
//	test(pp);
//
//	int* arr[10];
//	test(arr);//指针数组也可以
//
//	return 0;
//}