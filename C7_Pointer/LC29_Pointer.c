//�Ż�ð������
//�������qsort�����ļ�
//void qsort(void base,
//	size_t num,
//	size_t width
//	int(*cmp)(const void* e1, const void* e2)
//);

////�ṹ���age ����
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////�ṹ������
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////ð������age������
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test3()
//{
//	struct Stu s[3] = { {"�ŷ�",20},{"����",30},{"����",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	test3();
//
//	return 0;
//}
