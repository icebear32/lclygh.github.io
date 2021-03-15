//如何规避野指针

////指针初始化
//#include <stdio.h>
//
//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;//初始化
//	int* p = NULL;//NULL - 用来初始化指针的，给指针赋值
//
//	return 0;
//}


#include <stdio.h>

int main()
{
	//指针越界
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		//当指针指向的范围超出数组arr的范围时，p就是野指针
		*(p++) = i;
	}

	return 0;
}

////指针指向空间释放之后要让指针置NULL
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//
//	//用完设为NULL
//	pa = NULL;
//
//	return 0;
//}



////指针使用之前检查有效性
//#include <stdio.h>
//
//int main()
//{
//	int* p = NULL;
//	//
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//
//	return 0;
//}

