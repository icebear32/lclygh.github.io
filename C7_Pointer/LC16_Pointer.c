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
//	int (*pa)(int, int) = Add;//����ָ��
//	printf("%d\n", (*pa)(2, 3));//5	//���ú���ָ�룬�Բ������в���
//
//	return 0;
//}


////���ú���ָ��
//#include <stdio.h>
//
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello world");
//
//	return 0;
//}