//������

//#include <stdio.h>
//
//int main()
//{
//	//�ַ�����
//	char arr[] = { 'a', 'b', 'c', 'd', 'e','f' };
//
//	//strlen ����ǳ��ȣ�����'\0'ֹͣ
//
//	printf("%d\n", strlen(arr));//���ֵ
//	/*
//		�������û��'\0'��strlen ����һֱ�������'\0'��
//		����'a', 'b', 'c', 'd', 'e','f'��ĳ��Ȳ����
//		���������ֵ
//	*/
//
//	printf("%d \n", strlen(arr + 0));//���ֵ 
//	/*
//	*	arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ
//	*	���� strlen ��������Ԫ�ؿ�ʼ�󳤶�
//		�������û��'\0'��һֱ�������'\0'��
//		����'a', 'b', 'c', 'd', 'e','f'��ĳ��Ȳ����
//		���������ֵ
//	*/
//
//	//printf("%d\n", strlen(*arr)); //err
//	// *arr ��arr��Ԫ�ص�ַ�������õõ���Ԫ�ص�ַ��'a'
//	// 'a'����ֵ�� '97'��strlen����ֱ�ӵ���'97'�ĵ�ַȥ�󳤶�
//	// ���ڷǷ����ã����Ѱַ
//
//	//printf("%d\n", strlen(arr[1])); //err
//	// arr[1] ��arr�ĵڶ���Ԫ�أ��õ�����'b'
//	// 'b'����ֵ�� '98'��strlen����ֱ�ӵ���'98'�ĵ�ַȥ�󳤶�
//	// ���ڷǷ����ã����Ѱַ
//
//	printf("%d\n", strlen(&arr));//���ֵ
//	//��Ԫ�ص�ַ��ʼ
//
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	//&arr����������ĵ�ַ��&arr+1������������
//	//����strlen(&arr + 1)�Ǵ�'f'��ʼ�󳤶�
//	//���������ֵ��6
//
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//	//&arr[0]������ĵ�һ��Ԫ�ص�ַ��&arr[0]+1���������һ��Ԫ��
//	//����strlen(&arr + 1)�Ǵ�'b'��ʼ�󳤶�
//	//���������ֵ��1
//
//	return 0;
//}