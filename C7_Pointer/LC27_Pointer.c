////�Ż�ð������
////�������qsort�����ļ�
////void qsort(void base,
////	size_t num,
////	size_t width
////	int(*cmp)(const void* e1, const void* e2)
////);
//
////int ����
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int h = 0;
//	for (h = 0; h < sz; h++)
//	{
//		printf("%d ", arr[h]);
//	}
//}
//
//int main()
//{
//	test1();
//	
//	return 0;
//}