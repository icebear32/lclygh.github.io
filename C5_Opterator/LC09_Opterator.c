//逻辑操作符

//#include <stdio.h>
//
////逻辑或
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("%d\n", c);
//
//	return 0;
//}


//360笔试题
//#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	
//	//逻辑与
//	i = a++ && ++b && d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//1	2	3	4
//	/*
//	因为a++是后置++，先使用a再++，a在此时是0，为假，
//	逻辑与只要一个为假全部为假，所以a++之后的没有执行
//		b仍等于2	c仍等于3	d仍等于4
//
//	*/
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//逻辑或
//	//i = a++ || ++b || d++;
//	//printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	/*
//	逻辑或:只要有个判断为真就为真a++先使用a后++，a是0，所以为假
//	然后 ++b 先 ++ 后使用,所以不为0，为真所以b之后判断停止执行
//		c仍等于3	d仍等于4
//	*/
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	//将 a++ 改成 ++a
//	//i = ++a || ++b || d++;
//	//printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//1	2	3	4	
//	/*
//	因为 ++a 是++操作并使用，a为1，所以为真，为真之后判断停止执行
//		b仍等于2	c仍等于3	d仍等于4
//	*/
//
//	return 0;
//}