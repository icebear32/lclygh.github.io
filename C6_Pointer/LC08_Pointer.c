//ָ������

//ָ��-ָ��


//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 0;
//
//	//��ָ���Сָ��
//	num = &arr[9] - &arr[0];
//	printf("%d\n", num);
//
//	//Сָ�����ָ��
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//д������
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	//printf("%d\n", &arr[9] - &ch[0]);//err
//
//	return 0;
//}


//#include <stdio.h>
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	// strlen - ���ַ�������
//	//�ݹ�Cģ��ʵ����strlen - �������ķ�ʽ1���ݹ�ķ�ʽ2(֮ǰ)
//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}