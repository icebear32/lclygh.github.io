//下标引用、函数调用和结构成员
//#include <stdio.h>
//
///*
//	1.	[ ]下标引用操作符
//		操作数:一个数组名＋一个索引值
//*/
//int main()
//{
//	//int arr[10];//创建数组
//	//arr[9] = 10;//实用下标引用操作符。[]的两个操作数是arr和9。
//
//	return 0;
//}


///*
//	()函数调用操作符：
//		()函数调用操作符接受一个或者多个操作数︰
//		第一个操作数是函数名，剩余的操作数就是传递给函数的参数。
//*/
//#include <stdio.h>
//
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();            //实用（）作为函数调用操作符。
//	test2("hello world");//实用（）作为函数调用操作符。
//
//	return 0;
//}


////函数调用操作符
//get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候（）就是函数调用符
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}


////创建一个结构体类型 -struct Stu
//#include <stdio.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 0;
//	//使用struct Stu这个类型创建一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",20,"20201128" };
//
//
//	//打印结构体内容
//	//结构体变量.成员名（结构体变量 点 成员名）
//	printf("%s\n",s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//
//	//有点啰嗦
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//
//	//更好的打印方法
//	//struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	return 0;
//}


//#include <stdio.h>
//
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//
//void set_age1(struct Stu stu)
//{
//	stu.age = 18;
//	printf("自定义的set_age1函数的age = %d\n", stu.age);
//}
//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 19;//结构成员访问
//	printf("自定义的set_age2函数的age = %d\n", pStu->age);
//};
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//
//	
//	stu.age = 20;
//	printf("age = %d\n", stu.age);
//	set_age1(stu);
//
//	pStu->age = 20;
//	printf("age = %d\n", pStu->age);
//	set_age2(pStu);
//	
//	return 0;
//}