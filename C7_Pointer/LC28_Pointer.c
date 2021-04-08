//优化冒泡排序
//函数库的qsort函数的简化
//void qsort(void base,
//	size_t num,
//	size_t width
//	int(*cmp)(const void* e1, const void* e2)
//);

////folat 部分
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//
//void test2()
//{
//	float f[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//int main()
//{
//
//	test2();
//
//	return 0;
//}