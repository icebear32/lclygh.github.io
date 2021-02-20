//自定义函数

//	ret_type fun_name(para1, * )
//	{
//		statement;//语句项
//	}
//	ret_type 返回类型
//	fun_name 函数名
//	para1    函数参数

////例一：写一个函数可以找出两个整数中的最大值。
//#include <stdio.h>
//
//int get_max(x, y)
//{
//	//if (x > y)
//	//{
//	//	return x;
//	//}
//	//else
//	//{
//	//	return y;
//	//}
//
//	//优化代码--三目运算表达式
//	return (x > y) ? (x) : (y);
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//
//	return 0;
//}





//写一个函数可以交换两个整型变量的内容。
//void swap1(x, y)//不能完成任务
//{
//	int num = 0;
//	num = x;
//	x = y;
//	y = num;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	swap1(num1,num2);
//	printf("num1 = %d , num2 = %d \n", num1, num2);
//
//	return 0;
//}


//指针方法解决
//#include <stdio.h>
//
//void swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	swap1(num1, num2);
//	printf("num1 = %d , num2 = %d \n", num1, num2);
//
//	return 0;
//}