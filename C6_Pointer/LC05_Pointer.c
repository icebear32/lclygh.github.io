//Ұָ��

////1.ָ��δ��ʼ��
//#include <stdio.h>
//
//int main()
//{
//	//ָ��δ��ʼ��
//	int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	//ָ��Խ��
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        //��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//        *(p++) = i;
//    }
//
//	return 0;
//}


//#include <stdio.h>
//
//int* test()
//{
//    int a = 10;
//    return &a;
//}
//
//int main()
//{
//	//ָ��ָ��Ŀռ��ͷ�
//    int* p = test();
//    printf("%d\n", *p);
//
//	return 0;
//}