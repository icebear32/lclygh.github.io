//野指针

////1.指针未初始化
//#include <stdio.h>
//
//int main()
//{
//	//指针未初始化
//	int* p;//局部变量指针未初始化，默认为随机值
//	*p = 20;
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	//指针越界
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        //当指针指向的范围超出数组arr的范围时，p就是野指针
//        *(p++) = i;
//    }
//
//	return 0;
//}


//#include <stdio.h>
//
//int* test()
//{
//    int a = 10;
//    return &a;
//}
//
//int main()
//{
//	//指针指向的空间释放
//    int* p = test();
//    printf("%d\n", *p);
//
//	return 0;
//}