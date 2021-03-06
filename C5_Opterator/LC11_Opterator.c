//逗号表达式

//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	printf("c = %d\n", c);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	printf("c = %d\n", c);
//
//	int d = 0;
//	if (a = b + 1, c = a / 2, d > 0)//逗号表达式
//	{
//		printf("c = %d\n", c);
//		printf("123");
//	}
//	else
//	{
//		printf("c = %d\n", c);
//		printf("777");
//	}
//	
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	//代码3
//	int a = 1;
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		//业务处理
//		a = get_val();
//		count_val(a);
//	}
//
//	//如果使用逗号表达式，改写:
//	while (a = get_va1(), count_va1(a), a > 0)
//	{
//		//业务处理
//	}
//
//	return 0;
//}