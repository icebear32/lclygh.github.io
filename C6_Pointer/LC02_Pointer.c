//	int num = 10;
//	int* p = &num;

#include <stdio.h>

int main()
{
	//ָ���ָ������
	char* pc = NULL;
	int* pi = NULL;
	short* ps = NULL;
	long* pl = NULL;
	float* pf = NULL;
	double* pd = NULL;

	return 0;
}



//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(long*));
//
//	return 0;
//}



//ָ�����͵�������ʲô��
//(ָ��ռ�õ��ֽڶ���һ���ģ��ǲ�ָͬ����ڵ�������ʲô��)

//#include <stdio.h>
//
//int main()
//{
//	/*
//		�������У����Ǳ����棬���Ͳ����ݣ����ǿ��Դ��
//		��ô�ǲ��Ǹ���֤����ָͬ���������?
//	*/
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	/*
//	* ���ԣ��鿴�ڴ�
//		ԭ����a
//			a	0x11223344
//		������
//			a	00 00 00 00
//			��ԭ����a�滻��O��ֵ��a
//		printf() ��ӡ a
//	*/
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	printf("%p\n", pa);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;
//
//	return 0;
//}


