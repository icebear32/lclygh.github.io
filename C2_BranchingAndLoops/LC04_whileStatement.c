//while循环

//	if (条件)
//		语句;
//	//while 语法结构
//	while (表达式)
//		循环语句；

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)//当i为5的时候终止循环
//			break;
//		printf("%d ", i);//1 2 3 4
//		i = i + 1;
//	}
//
//	return 0;
//}


////continue死循环了
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

////改正
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i = i + 1;
//		if (i == 5)//判断为5成立，跳出该次循环
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
