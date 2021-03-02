//单目操作符

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址操作符
//	*p = 20;//解引用操作符
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof 计算变量所占内存空间的大小
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof a);//变量可以去括号
//	printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof int);//类型不能去括号，会报错
//
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));//1
//
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(char*));//4
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));//40
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//short占两个字节
//	//sizeof里面的表达式不参与运算
//	short s = 0;
//	int a = 10;
//
//	//short占两个字节，所以第一个打印的是short变量的内存
//	printf("%d\n", sizeof(s = a + 5));
//	//sizeof里面的表达式不参与运算,所以第二个打印的是s = 0的值
//	printf("%d\n", s);
//
//	return 0;
//}


////sizeof和数组
//#include <stdio.h>
//
///*
//	(3)(4)因为传入的是数组的首元素的地址,
//	所以打印的是地址占用存储的大小打印的是4个或8个字节,
//	而软件平台用的是32位, 所以打印4个字节
//*/
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(3)==>4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)==>4
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	/*
//		(1)(2)求的是整个数组地址的大小
//	*/
//	printf("%d\n", sizeof(arr));//(1)==>40
//	printf("%d\n", sizeof(ch));//(2)==>10
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}