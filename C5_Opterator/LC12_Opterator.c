//�±����á��������úͽṹ��Ա
//#include <stdio.h>
//
///*
//	1.	[ ]�±����ò�����
//		������:һ����������һ������ֵ
//*/
//int main()
//{
//	//int arr[10];//��������
//	//arr[9] = 10;//ʵ���±����ò�������[]��������������arr��9��
//
//	return 0;
//}


///*
//	()�������ò�������
//		()�������ò���������һ�����߶���������U
//		��һ���������Ǻ�������ʣ��Ĳ��������Ǵ��ݸ������Ĳ�����
//*/
//#include <stdio.h>
//
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();            //ʵ�ã�����Ϊ�������ò�������
//	test2("hello world");//ʵ�ã�����Ϊ�������ò�������
//
//	return 0;
//}


////�������ò�����
//get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú�����ʱ�򣨣����Ǻ������÷�
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}


////����һ���ṹ������ -struct Stu
//#include <stdio.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 0;
//	//ʹ��struct Stu������ʹ���һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "����",20,"20201128" };
//
//
//	//��ӡ�ṹ������
//	//�ṹ�����.��Ա�����ṹ����� �� ��Ա����
//	printf("%s\n",s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//
//	//�еㆪ��
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//
//	//���õĴ�ӡ����
//	//struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	return 0;
//}


//#include <stdio.h>
//
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//
//void set_age1(struct Stu stu)
//{
//	stu.age = 18;
//	printf("�Զ����set_age1������age = %d\n", stu.age);
//}
//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 19;//�ṹ��Ա����
//	printf("�Զ����set_age2������age = %d\n", pStu->age);
//};
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//
//	
//	stu.age = 20;
//	printf("age = %d\n", stu.age);
//	set_age1(stu);
//
//	pStu->age = 20;
//	printf("age = %d\n", pStu->age);
//	set_age2(pStu);
//	
//	return 0;
//}