//指针参数

//一级指针传参

////使用一级指针传参数的函数
//#include <stdio.h>
//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}




//#include <stdio.h>
//
//void test1(int* p)//接受一个整型地址
//{
//
//}
//
//void test2(char* p)//接受一个char类型的地址
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);//ok	&a	取地址a的地址
//	test1(p1);//ok	p1	a的地址
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok	&ch	取地址 ch 的地址
//	test2(pc);//ok	pc	ch 的地址
//
//	return 0;
//}