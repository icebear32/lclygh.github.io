//��ι��Ұָ��

////ָ���ʼ��
//#include <stdio.h>
//
//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	int* p = NULL;//NULL - ������ʼ��ָ��ģ���ָ�븳ֵ
//
//	return 0;
//}


#include <stdio.h>

int main()
{
	//ָ��Խ��
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
		*(p++) = i;
	}

	return 0;
}

////ָ��ָ��ռ��ͷ�֮��Ҫ��ָ����NULL
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//
//	//������ΪNULL
//	pa = NULL;
//
//	return 0;
//}



////ָ��ʹ��֮ǰ�����Ч��
//#include <stdio.h>
//
//int main()
//{
//	int* p = NULL;
//	//
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//
//	return 0;
//}

