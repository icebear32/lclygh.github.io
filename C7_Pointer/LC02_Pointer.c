//字符指针


//#include <stdio.h>
////
//int main()
//{
//	char arr[] = "abcdef"; 
//	char* pc = arr;
//	//printf("%c\n", arr);
//	//printf("%c\n", pc);
//	printf("%s \n", arr); 
//	printf("%s \n", pc);
//
//	return 0;
//}


////另一种写法
//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串
//	printf("%c\n",*p);//打印一个字符
//	//printf("%s\n", *p);//err 必须提供的是字符串的地址，*p的是char
//	printf("%s\n", p);//打印整个字符串
//
//	return 0;
//}
///*
//	代码char* p = "abcdef";特别容易以为是把字符串abcdef放到字符指针p 里了，
//	但是本质是把字符串abcdef首字符的地址放到了p中。
//*/





//常量字符串的错误写法
#include <stdio.h>

//编译没报错，运行报错
int main()
{
	char* p = "abcdef";//"abcdef"是一个常量字符串
	*p = 'w';
	printf("%s\n", p);

	return 0;
}

////改正
//#include <stdio.h>
//
//int main()
//{
//	//加个const 把 *p 变成常量，不可以改变值(可加可不加，隐性加了)
//	const char* p = "abcdef";//"abcdef"是一个常量字符串
//	//*p = 'w';//错误
//
//	printf("%s\n", p);
//
//	return 0;
//}
//
//// www.stackoverflow. com
//// Segmentation fault - 段错误
//// segmentfault.com
