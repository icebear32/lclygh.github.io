////ð������ͨ������

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////�Ƚ���������ֵ
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
////�Ƚ�����������ֵ
//int cmp_float(const void* e1, const void* e2)
//{
//	//if (*(float*)e1 == *(float*)e2)
//	//	return 0;
//	//else if (*(float*)e1 > *(float*)e2)
//	//	return 1;
//	//else
//	//	return -1;
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//
////�ṹ������
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////ð������ṹ������age������
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
////ð������ṹ������name������
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ���� ><= ���Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
///*
//	��һ������:�������������Ԫ�ص�ַ�ڶ�������:�����������Ԫ�ظ���
//	����������:�����������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//	���ĸ�����:�Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//			   ����ָ�������������:���Ƚϵ�����Ԫ�صĵ�ַ
//
//*/
//
//
////��������
///*
//	��������ע��㣺
//		void*���Ͳ��ܼӼ�����Ϊ��֪���������ʲô��������
//		ǿ������ת�������������������������͡������͡��ַ��ͣ��ͻ᲻����
//*/
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////ͨ��ð������
//void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1 - i; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
//				/*
//				��������ע��㣺
//					void*���Ͳ��ܼӼ�����Ϊ��֪���������ʲô��������
//					ǿ������ת�������������������������͡������͡��ַ��ͣ��ͻ᲻����
//				*/
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
///*
//	ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	��Ӧ��֪����αȽϴ����������е�Ԫ��	
//*/
////Ҫ��������ݣ�����ֵ
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//}
//
////Ҫ��������ݣ�������ֵ
//void test2()
//{
//	float f[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	bubble_sort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//	printf("\n");
//}
//
////Ҫ��������ݣ��ṹ������age������
//void test3()
//{
//	struct Stu s[3] = { {"�ŷ�",20},{"����",30},{"����",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
////Ҫ��������ݣ��ṹ������name������
//void test4()
//{
//	struct Stu s[3] = { {"�ŷ�",20},{"����",30},{"����",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
////main����������
//int main()
//{
//
//	test1();
//	test2();
//	test3();
//	test4();
//	
//	return 0;
//}