// &������ VS ������



//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//
//	return 0;
//}
//�ó�����������&��������ӡ�ĵ�ַ��һ���ġ�



//#include <stdio.h>
//
//int main()
//{ 
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);//����һ������Ԫ�ص�ַ
//	printf("&arr+1= %p\n", &arr + 1);//����һ�������ַ
//
//	return 0;
//}
/*
	��������Ĵ������Ƿ��֣���ʵ &arr �� arr ����Ȼֵ��һ���ģ���������Ӧ�ò�һ���ġ�
	ʵ���ϣ� &arr ��ʾ��������ĵ�ַ��������������Ԫ�صĵ�ַ��
	��ϸϸ���һ�£� ����ĵ�ַ+1��������������Ĵ�С��
	���� &arr+1 ����� &arr �Ĳ�ֵ��40.
*/