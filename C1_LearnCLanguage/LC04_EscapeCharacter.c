// 转义字符
//转义字符
////加入我们要在屏幕上打印一个目录︰c : \code \test.c我们该如何写代码?
//#include <stdio.h>
//int main()
//{
//    printf("c:\code\test.c\n");
//    //得到结果  c:code  est.c
//    //转义字符顾名思义就是转变意思。
//
//    return 0;
//}

//
//
//===================================================================
//转义字符    |    释义
//===================================================================
//\?          |    在书写连续多个问号时使用，防止他们被解析成三字母词
//===================================================================
//\'          |    用于表示字符常量'
//===================================================================
//\"          |    用于表示一个字符串内部的双引号
//===================================================================
//\\          |    用于表示一个反斜杠，防止它被解释为一个转义序列符。
//===================================================================
//\a          |    警告字符，蜂鸣
//===================================================================
//\b          |    退格符
//===================================================================
//lf          |    进纸符
//===================================================================
//\n          |    换行
//===================================================================
//\r          |    回车
//===================================================================
//\t          |    水平制表符
//===================================================================
//\v          |    垂直制表符
//===================================================================
//\ddd        |    ddd表示1~3个八进制的数字。如:1130x
//===================================================================
//\xdd        |    dd表示2个十六进制数字。如:x300
//===================================================================
//



//#include <stdio.h>
//
//int main()
//{
//    //问题1：在屏幕上打印一个单引号'，怎么做？
//    //问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？
//    printf("%c\n", '\'');
//    printf("%s\n", "\"");
//    return 0;
//}




////笔试题
////程序输出的是什么？
//#include <stdio.h>
//
//int main()
//{
//    printf("%d\n",strlen("abcdef"));//输出的是6
//
//    // \32被解析成一个转义字符 ==> ASCII代码对照表示的 /32 对应的是 space（空格）
//    printf("%d\n",strlen("c:test\328\test.c"));//输出的是14     为什么是14？
//
//    return 0;
//}