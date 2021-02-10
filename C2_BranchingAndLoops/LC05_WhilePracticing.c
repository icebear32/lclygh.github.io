#define _CRT_SECURE_NO_WARNINGS 1

//介绍getchar（）
//getchar()函数的功能是一个一个地读取你所输入的字符
//#include <stdio.h>
//
//int main()
//{
//	int ch = getchar();
//
//	putchar(ch);//接受一个字符并打印输出
//	printf("%c\n", ch);//将ch的字符打印输出
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int ch = 0;
//
//	//ctrl + z  ==> EOF
//	//EOF - end of file -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}




////确认密码
//#include <stdio.h>
//
//int main()
//{
//	int ret = 0, ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码,并存放在passsword数组中
//
//	printf("请确认(Y/N):>");
//	ret = getchar();//输入一个Y/N字符
//	if (ret == 'Y')//判断是否输入的事“Y”
//	{
//		printf("确认成功\n");//如果输入“Y”字符则输出确认成功
//	}
//	else
//	{
//		printf("放弃确认\n");//否则输出确认成功
//	}
//
//	return 0;
//}


////修改代码--确认密码
//#include <stdio.h>
//
//int main()
//{
//	int ret = 0, ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码,并存放在passsword数组中
//
//	//修改
//	//缓冲区还有一个“\n”，可以再用getchar读取一下“\n”
//	//但是若输入的时候有空格，空格也是会停止输入数组
//	//空格后面若很多字符，可以设置一个while循环读取字符掉
//	while ((ch = getchar()) != '\n')
//	{
//		;//空语句，因为此处不需要有操作
//	}
//
//
//	printf("请确认(Y/N):>");
//	ret = getchar();//输入一个Y/N字符
//	if (ret == 'Y')//判断是否输入的事“Y”
//	{
//		printf("确认成功\n");//如果输入“Y”字符则输出确认成功
//	}
//	else
//	{
//		printf("放弃确认\n");//否则输出确认成功
//	}
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//
//    while ((ch = getchar()) != EOF)//遇到EOF停止循环
//    {
//        if (ch < '0' || ch > '9')//遇到不是数字的字符就跳出这次循环
//            continue;
//        putchar(ch);//遇到数字字符就打印输出
//    }
//    return 0;
//}