////数组作为函数参数
//
//
////冒泡排序
////方法一
//#include <stdio.h>
//
//void bubble_sort(int arr[])
//{
//	//确定冒泡排序的趟数
//	int sz = sizeof(arr) / sizeof(arr[0]);//这样对吗?//不对--sizeof是另一个值
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) 
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++) 
//		{
//			if (arr[j] > arr[j + 1]) 
//			{
//				int tmp = arr[j]; 
//				arr[j] = arr[j + 1]; 
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
//	bubble_sort(arr);//冒泡排序函数
//	
//	//是否可以正常排序？==》不行
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}





//
////再优化
///*
//	加入flag=1，若循环时第一个if语句执行则将flag=0，让第二个if语句条件不成立，反则第二个if语句成立终止循环。
//	flag是检测是否有排序交换的操作，若没有排序交换就可以直接认定排序成功，不用再循环排序，不用浪费时间继续排序。
//*/
//#include <stdio.h>
//
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	
//	printf ("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	
//	//printf("%d\n", *arr);//1
//
//	return 0;
//}