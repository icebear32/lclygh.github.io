//������

//#include <stdio.h>
//
//int main()
//{
//	//�ַ�����
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	printf("%d\n", sizeof(arr));			//sizeof��������������С��6 * 1 = 6�ֽ�
//
//	printf("%d\n", sizeof(arr + 0));		//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ��ַ�Ĵ�С��4/8�ֽ�
//
//	printf("%d\n", sizeof(*arr));			//1arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
//
//	printf("%d\n", sizeof(arr[1]));			//1
//
//	printf("%d\n", sizeof(&arr));			//4/8 &arr��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
//
//	printf("%d\n", sizeof(&arr + 1));		//4/8 &arr+1���������������ĵ�ַ����ַ��С��4/8���ֽ�
//
//	printf("%d \n", sizeof(&arr[0] + 1));	//4/8�ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}