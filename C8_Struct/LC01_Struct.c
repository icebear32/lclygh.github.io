#include <stdio.h>

/*
* 结构的声明
struct tag
{
	member-list;
}variable-list;

*/

//描述—个学生：一些数据
//名字
//年龄
//电话
//性别
//	struct结构体关键字		stu-结构体标签		struct stu -结构体类型

//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s;
//
//	return 0;
//}



////不建议使用全局的结构体变量
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3 是全局的结构体变量
//
//int main()
//{
//	struct Stu s;//局部变量
//
//	return 0;
//}


//typedef把结构体重新定一个名字，叫Stu，Stu是一个类型
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s;//局部变量
//	Stu s2;
//
//	return 0;
//}



