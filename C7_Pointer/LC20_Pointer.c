//����ָ������


///*
//	�����ظ�����
//*/
//
////switch����ʵ�ּ�����
//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//    int x, y;
//    int input = 1;
//    int ret = 0;
//    do
//    {
//        printf("***********************\n");
//        printf(" 1:add           2:sub \n");
//        printf(" 3:mul           4:div \n");
//        printf("******* 0:exit ********\n");
//        printf("***********************\n");
//        printf("��ѡ��");
//        scanf_s("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("�����������");
//            scanf_s("%d %d", &x, &y);
//            ret = add(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 2:
//            printf("�����������");
//            scanf_s("%d %d", &x, &y);
//            ret = sub(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 3:
//            printf("�����������");
//            scanf_s("%d %d", &x, &y);
//            ret = mul(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 4:
//            printf("�����������");
//            scanf_s("%d %d", &x, &y);
//            ret = div(x, y);
//            printf("ret = %d\n", ret);
//            break;
//        case 0:
//            printf("�˳�����\n");
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (input);
//
//    return 0;
//}
