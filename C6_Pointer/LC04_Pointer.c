//������

//#include <stdio.h>
//
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;   //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//	*pi = 0;   //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������-��Ԫ�ش�ĵ�ַ
//	int i = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}