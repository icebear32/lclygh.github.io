////����ָ��
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	//int*** pppa = &ppa;//����ָ��
//
//	return 0;
//}
//
//
///*
//	���ڶ���ָ���������:
//	*ppa ͨ����ppa�еĵ�ַ���н����ã������ҵ����� pa , *ppa ��ʵ���ʵľ���pa.
//	int b = 20;
//	*ppa = &b; //�ȼ���pa = &b;
//	**ppa��ͨ��*ppa�ҵ�pa ,Ȼ���pa���н����ò�����*pa�����ҵ�����a.
//	*ppa = 30;
//	/�ȼ���*pa = 30;/�ȼ���a = 30 ;
//
//*/
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	//int*** pppa = &ppa;//����ָ��
//
//	//��ô�ö���ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	int b = 20;
//	*ppa = &b; //�ȼ���pa = &b;
//
//	*ppa = 30;
//	// �ȼ��� * pa = 30; // �ȼ���a = 30;
//
//
//	return 0;
//}