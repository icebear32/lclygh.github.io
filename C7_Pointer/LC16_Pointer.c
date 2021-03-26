//函数指针


////调用函数指针
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int (*pa)(int, int) = Add;//函数指针
//	printf("%d\n", (*pa)(2, 3));//5	//调用函数指针，对参数进行操作
//
//	return 0;
//}


////调用函数指针
//#include <stdio.h>
//
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello world");
//
//	return 0;
//}