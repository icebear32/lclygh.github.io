//指针运算

//指针+-整数


//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d \n", *p);
//		p++;//p = p + 1;
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *p);
//		p -= 2;
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//
//int main()
//{
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 1;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%f\n",values[i]);
//	}
//
//	return 0;
//}