//	输入1，输出星期一
//	输入2，输出星期二
//	输入3，输出星期三
//	输入4，输出星期四
//	输入5，输出星期五
//	输入6，输出星期六
//	输入7，输出星期七

	//switch (整型表达式)
	//{
	//	语句项；
	//}
	//
	//语句项：
	//case 整型常量表达式
	//	语句;


//#include <stdio.h>
//int main()
//{
//    int day = 3;
//    switch (day)
//    {
//    case 1:
//        printf("星期一\n");
//        break;
//    case 2:
//        printf("星期二\n");
//        break;
//    case 3:
//        printf("星期三\n");
//        break;
//    case 4:
//        printf("星期四\n");
//        break;
//    case 5:
//        printf("星期五\n");
//        break;
//    case 6:
//        printf("星期六\n");
//        break;
//    case 7:
//        printf("星期天\n");
//        break;
//    default :
//        printf("输入错误");
//        break;
//    }
//    return 0;
//}



//练习
//#include <stdio.h>
//int main()
//{
//    int n = 1,m = 2;//开始：n =1,m =2
//    switch (n)//因为 n=1 所以执行case 1
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    /*
//        因为case 1没有加break，执行完case 1继续执行case 2
//        所以m++ ==> 3 n++ ==>2
//    */
//    case 3://因为case 2也没有加break，继续执行
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//        /*
//            继续执行switch语句
//            因为n = 2,所以执行case 2语句项m++ ==> 4 n++==>3
//            break退出
//            又因为case 3没有加break，继续执行case 4
//        */
//    case 4://执行case 4m++==> 5 遇到 break 退出
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);//打印m= 5, n = 3
//    return 0;
//}
