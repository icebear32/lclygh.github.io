//for语句的循环控制变量

//一些建议：
//1. 不可在for 循环体内修改循环变量，防止 for 循环失去控制。
//2. 建议for语句的循环控制变量的取值采用“前闭后开区间”写法。



//1. 不可在for 循环体内修改循环变量，防止 for 循环失去控制。
//举例
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//
//	return 0;
//}



//2. 建议for语句的循环控制变量的取值采用“前闭后开区间”写法。
//举例
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}