//�Ż�ð������
//�������qsort�����ļ�
//void qsort(void base,
//	size_t num,
//	size_t width
//	int(*cmp)(const void* e1, const void* e2)
//);

////�ṹ���name ����
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
////ð������name������
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ���� ><= ���Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test4()
//{
//	struct Stu s[3] = { {"�ŷ�",20},{"����",30},{"����",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test4();
//
//	return 0;
//}