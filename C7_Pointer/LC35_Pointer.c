//������

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr)); //sizeof(arr)���������Ĵ�С����λ���ֽ�:7
//	/*
//		��Ϊarr��ŵ��� abcdef\0���������������߸�Ԫ�أ�
//		sizeof(arr)���������Ĵ�С�������� 7 * 1 = 7 �ֽ�
//	*/
//
//	printf("%d\n", sizeof(arr + 0)); // 4/8 ������ǵ�ַ�Ĵ�С - arr+ 0 ����Ԫ�صĵ�ַ����ַ��4/8���ֽ�
//
//	printf("%d\n", sizeof(*arr)); //1 *arr����Ԫ��'a',sizeof(*arr)������Ԫ�صĴ�С
//
//	printf("%d\n", sizeof(arr[1])); //1 arr[1]�ǵڶ���Ԫ��'b'��sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
//
//	printf("%d\n", sizeof(&arr)); // 4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4/8���ֽ�
//
//	printf("%d\n", sizeof(&arr + 1)); // 4/8 &arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ
//
//	printf("%d\n", sizeof(&arr[0] + 1)); // 4/8 &arr[0]+1�ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}