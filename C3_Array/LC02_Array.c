//һά����ĳ�ʼ��

//#include <stdio.h>
//
//int main()
//{
//	//����һ������ - ������� - 10��
//	int arr[10] = {1, 2, 3};//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	
//	char arr2[5] = { 'a','b' };
//	//char arr2[5] = { 'a',98 };
//
//	char arr3[5] = "ab";//ok
//
//	//int n = 5;
//	//char ch = [n];//err
//	
//	char arr4[] = "abcdef";//[]����дҲ����
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char arr4[] = "abcdef";
//
//	//���⣺����Ĵ����ӡ��������ʲô��
//	printf("%d\n", sizeof(arr4));
//	//sizeoft��arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ�� - char 7 * 1 = 7
//	
//	printf("%d\n", strlen(arr4));
//	//strlen���ַ����ĳ��� - '\O��֮ǰ���ַ�����
//	//[a b c d e f /0]
//	//6
//	
//	// 1. strlen�� sizeofû����ô����
//	// 2. strlen�����ַ������ȵ� - ֻ������ַ����󳤶ȨC�⺯��-ʹ�õ���ͷ�ļ�
//	// 3. sizeof������������顢���͵Ĵ�С-��λ���ֽڨD������
//
//	return 0;
//}


////��ϰ
//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ
//
//	return 0;
//}