//ָ�����

//һ��ָ�봫��

////ʹ��һ��ָ�봫�����ĺ���
//#include <stdio.h>
//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}




//#include <stdio.h>
//
//void test1(int* p)//����һ�����͵�ַ
//{
//
//}
//
//void test2(char* p)//����һ��char���͵ĵ�ַ
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);//ok	&a	ȡ��ַa�ĵ�ַ
//	test1(p1);//ok	p1	a�ĵ�ַ
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok	&ch	ȡ��ַ ch �ĵ�ַ
//	test2(pc);//ok	pc	ch �ĵ�ַ
//
//	return 0;
//}