////��ϰ������д��������������ʱ���������ַ����ĳ��ȡ�
//#include <stdio.h>
//
///*
//	�ж� *str �Ƿ񲻵��� \0����������ѭ�����������ѭ��
//*/
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//
//	return 0;
//}




////������Ŀ��������������ʱ����
////�Ľ����룬�õݹ�ķ���
////#include <stdio.h>
////
/////*
////	�Ѵ��»�С���жϵ����ַ����Ƿ񲻵��ڡ�\0����
////	�����ھͽ��м�1�ͽ��еݹ飬ֱ��������\0����
////	���������мӷ�
////	my_strlen("bit");
////	1 + my_strlen("it");
////	1 + 1 + my_strlen("t");
////	1 + 1 + 1 + my_strlen("")
////	1 + 1 + 1 + 0
////	3
////*/
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//
//	return 0;
//}