//��Ŀ������

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַ������
//	*p = 20;//�����ò�����
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof ���������ռ�ڴ�ռ�Ĵ�С
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof a);//��������ȥ����
//	printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof int);//���Ͳ���ȥ���ţ��ᱨ��
//
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));//1
//
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(char*));//4
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));//40
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//shortռ�����ֽ�
//	//sizeof����ı��ʽ����������
//	short s = 0;
//	int a = 10;
//
//	//shortռ�����ֽڣ����Ե�һ����ӡ����short�������ڴ�
//	printf("%d\n", sizeof(s = a + 5));
//	//sizeof����ı��ʽ����������,���Եڶ�����ӡ����s = 0��ֵ
//	printf("%d\n", s);
//
//	return 0;
//}


////sizeof������
//#include <stdio.h>
//
///*
//	(3)(4)��Ϊ��������������Ԫ�صĵ�ַ,
//	���Դ�ӡ���ǵ�ַռ�ô洢�Ĵ�С��ӡ����4����8���ֽ�,
//	�����ƽ̨�õ���32λ, ���Դ�ӡ4���ֽ�
//*/
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(3)==>4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)==>4
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	/*
//		(1)(2)��������������ַ�Ĵ�С
//	*/
//	printf("%d\n", sizeof(arr));//(1)==>40
//	printf("%d\n", sizeof(ch));//(2)==>10
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}