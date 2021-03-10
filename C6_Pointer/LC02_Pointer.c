//	int num = 10;
//	int* p = &num;

#include <stdio.h>

int main()
{
	//指针和指针类型
	char* pc = NULL;
	int* pi = NULL;
	short* ps = NULL;
	long* pl = NULL;
	float* pf = NULL;
	double* pd = NULL;

	return 0;
}



//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(long*));
//
//	return 0;
//}



//指针类型的意义是什么？
//(指针占用的字节都是一样的，那不同指针存在的意义是什么？)

//#include <stdio.h>
//
//int main()
//{
//	/*
//		可以运行，但是报警告，类型不兼容，但是可以存放
//		那么是不是更加证明不同指针的作用呢?
//	*/
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	/*
//	* 调试：查看内存
//		原来的a
//			a	0x11223344
//		后来的
//			a	00 00 00 00
//			把原来的a替换成O的值的a
//		printf() 打印 a
//	*/
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	printf("%p\n", pa);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;
//
//	return 0;
//}


