//移位操作符

//#include <stdio.h>
//
//int main()
//{
//	int a = 16;
//	// >> -- 右移操作符
//	//移动的是二进制位
//	//00000000000000000000000000010000
//	//00000000000000000000000000001000
//	//8
//	//
//	int b = a >> 1;
//	printf("b = %d\n", b);//8
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	//int a = -1;
//	////整数的二进制表示有:原码、反码、补码
//	////存储到内存的是补码
//	////10000000000000000000000000000001 - 原码
//	////11111111111111111111111111111110 - 反码
//	////11111111111111111111111111111111 - 补码
//	//int b = a >> 1;
//	//printf("%d\n", b);
//
//	return 0;
//}



//#include <stdio.h> 
//
//int main()
//{
//	// << -- 左移操作符
//	//左边丢弃，右边补0
//
//	int num1 = 10;
//	int num2 = 10;
//
//	num1 = num1 << 1;
//	printf("%d\n", num1);
//
//	return 0;
//}


//#include <stdio.h> 
//
//int main()
//{
//	/*
//		但实际上num在没被赋值的情况下，自身的值不会变化。
//	*/
//	num2 << 1;
//	printf("%d\n", num2);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	num >> -1;//error
//
//	return 0;
//}