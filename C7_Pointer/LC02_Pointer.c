//�ַ�ָ��


//#include <stdio.h>
////
//int main()
//{
//	char arr[] = "abcdef"; 
//	char* pc = arr;
//	//printf("%c\n", arr);
//	//printf("%c\n", pc);
//	printf("%s \n", arr); 
//	printf("%s \n", pc);
//
//	return 0;
//}


////��һ��д��
//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";//"abcdef"��һ�������ַ���
//	printf("%c\n",*p);//��ӡһ���ַ�
//	//printf("%s\n", *p);//err �����ṩ�����ַ����ĵ�ַ��*p����char
//	printf("%s\n", p);//��ӡ�����ַ���
//
//	return 0;
//}
///*
//	����char* p = "abcdef";�ر�������Ϊ�ǰ��ַ���abcdef�ŵ��ַ�ָ��p ���ˣ�
//	���Ǳ����ǰ��ַ���abcdef���ַ��ĵ�ַ�ŵ���p�С�
//*/





//�����ַ����Ĵ���д��
#include <stdio.h>

//����û�������б���
int main()
{
	char* p = "abcdef";//"abcdef"��һ�������ַ���
	*p = 'w';
	printf("%s\n", p);

	return 0;
}

////����
//#include <stdio.h>
//
//int main()
//{
//	//�Ӹ�const �� *p ��ɳ����������Ըı�ֵ(�ɼӿɲ��ӣ����Լ���)
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���
//	//*p = 'w';//����
//
//	printf("%s\n", p);
//
//	return 0;
//}
//
//// www.stackoverflow. com
//// Segmentation fault - �δ���
//// segmentfault.com
