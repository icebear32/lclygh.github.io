//#pragma warning(disable : 4996)

//位操作符

//#include <stdio.h>
//
//int main()
//{
//	// & - 按2进制位与
//	int a = 3;
//	int b = 5; 
//	int c = a & b;
//	//
//	//两个进行比较，相反为0，相同为1
//	//a = 3 - 00000000000000000000000000000011
//	//b = 5 - 00000000000000000000000000000101
//	//两个进行比较得到
//	//c = 1 - 00000000000000000000000000000001
//	//
//	printf("%d\n", c);//1
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	// | - 按2进制位或
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	//
//	//两个进行比较，不同为1，同0为0
//	//a = 3 - 00000000000000000000000000000011
//	//b = 5 - 00000000000000000000000000000101
//	//c = 7 - 00000000000000000000000000000111
//	//
//	printf("%d\n", c);//7
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//按2进制位异或
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//
//	//相同为0，相异为1
//	//a = 3 - 00000000000000000000000000000011
//	//b = 5 - 00000000000000000000000000000101
//	//c = 6 - 00000000000000000000000000000110
//	//
//	printf("%d\n",c);//6
//
//	return 0;
//}


////不能创建临时变量(第三个变量），实现两个数的交换。
//#include <stdio.h>
//
//int main()
//{
//	//临时变量的方法
//	int a = 3;
//	int b = 5;
//	int tmp = 0;//临时变量
//	printf("before: a = %d b = %d\n",a,b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("after: a = %d b = %d\n", a, b);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//加减法
//	int a = 3;
//	int b = 5;
//	printf("before: a = %d b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("after: a = %d b = %d\n", a, b);
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//异或的方法
//	int a = 3;
//	int b = 5;
//	printf("before: a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after: a = %d b = %d\n", a, b);
//
//	return 0;
//}




//练习∶编写代码实现:求一个整数存储在内存中的二进制中1的个数。
//#include <stdio.h>
//
//int main()
//{	
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);//3 - 011
//
//	//统计num的补码有几个1
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//方法二
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);//-1
//
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//思考还能不能更加优化，这里必须循环32次的。


//方法三：优化
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);//-1
//
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}