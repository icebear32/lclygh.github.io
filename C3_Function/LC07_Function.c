////函数的嵌套调用
//
//#include <stdio.h>
//
//void new_line()
//{
//	printf("hehe\n");//打印hehe
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)//2、进入three_line()函数
//	{
//		new_line();//3 开始for循环for循环进行三次调用new_line()函数
//	}
//}
//
//int main()
//{
//	three_line();//1、开始运行，遇到three_line()函数
//
//	return 0;
//}





//函数的链式访问
//把一个函数的返回值作为另外一个函数的参数。

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));//strlen函数把stract函数的返回值作为返回值进行调用
//	printf("%d\n", ret);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//3			//2			//1
//	printf("%d", printf("%d", printf("%d", 43)));
//	//结果是什么？
//	/*
//		printf开始打印43，返回的是两个字符
//		所以第二个printf打印2，而2是一个字符
//		所以第三个printf打印1
//	*/
//
//	return 0;
//}//