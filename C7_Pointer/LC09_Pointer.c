//����ָ���ڶ�ά������Ժܺ�����
//����ָ���ʹ��

////�������������ʽ
//#include <stdio.h>
//
//void print_arr1(int arr[3][5], int x, int y)//����ά����arr ���� print1 ������Ȼ��Ѷ�ά������������ָ�뵱��
//{
//    int i = 0;
//    int j = 0;
//    /*
//        ÿ��ѭ����ӡһ�У�
//        ��ά�����һ��Ԫ�ش�ӡ������ά�����һ��Ԫ�ؾ���һ��һά����
//    */
//    for (i = 0; i < x; i++)
//    {
//        for (j = 0; j < y; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6} ,{3,4,5,6,7} };
//    print_arr1(arr, 3, 5);
//
//    return 0;
//}



////������ָ�����ʽ
//#include <stdio.h>
//
//void print_arr2(int (*p)[5], int x, int y)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < x; i++)
//    {
//        for (j = 0; j < y; j++)
//        {
//            printf("%d ", *(*(p  + i) + j));
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6} ,{3,4,5,6,7} };
//    print_arr2(arr, 3, 5);
//
//    return 0;
//}