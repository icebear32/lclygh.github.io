//����ָ��

////���ú���ָ��
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));//���һ��
//	printf("%d\n", (***pa)(2, 3));//���һ��
//
//	return 0;
//}



////���ú���ָ��
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));//һ����õ�ַ,����ʹ�ò�ͬ�����ҵ�:
//	printf("%d\n", Add(2, 3));//һ����õ�ַ,����ʹ�ò�ͬ�����ҵ�:
//	
//	//printf("%d\n", *pa(2, 3));//err	���󣬼��Ѱַ
//	
//	printf("%d\n", (*pa)(2, 3));//һ����õ�ַ,����ʹ�ò�ͬ�����ҵ�:
//
//
//	return 0;
//}