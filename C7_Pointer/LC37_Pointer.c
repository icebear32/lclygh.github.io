//������


//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", sizeof(p)); // 4/8 
//	//p��ŵ������飬����Ԫ�ص�ַ������ָ����� p����Ԫ�ص�ַ�� �Ĵ�С
//
//	printf("%d\n", sizeof(p + 1)); //4/8 - p+1 �õ������ַ�b�ĵ�ַ
//
//	printf("%d\n", sizeof(*p)); //1 *p �����ַ����ĵ�һ���ַ� - 'a'
//
//	printf("%d\n", sizeof(p[0])); // 1 int arr[10];   arr[0] == *(arr+0)   p[0] == *(p+0) == 'a'
//
//	printf("%d\n", sizeof(&p)); // 4/8 &p��һ��������Ԫ�ص�ַ
//
//	printf("%d\n", sizeof(&p + 1)); // 4/8 (&p + 1)������һ������ĵ�ַ
//
//	printf("%d\n", sizeof(&p[0] + 1)); // 4/8 (&p[0] + 1)������������һ��Ԫ�صĵ�ַ
//
//	return 0;
//}