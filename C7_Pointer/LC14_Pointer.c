//ָ�����

//����ָ�봫��

////ʹ�ö���ָ�봫�����ĺ���
//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;//һ��ָ��
//	int** pp = &p;//����ָ��
//	test(pp);
//	test(&p);
//	return 0;
//}




////����ָ��
//#include <stdio.h>
//
//void test(int** p)//Ҫ��δ���һ��ָ����߶���ָ��ĵ�ַ
//{}
//
//int main()
//{
//	int* ptr;//һ��ָ��
//	int** pp = &ptr;//����ָ��
//	test(&ptr);
//	test(pp);
//
//	int* arr[10];
//	test(arr);//ָ������Ҳ����
//
//	return 0;
//}