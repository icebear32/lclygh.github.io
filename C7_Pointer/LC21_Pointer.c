////ʹ�ú���ָ�������ʵ��


//#include <stdio.h>
//
//void menu()
//{
//	printf("*************************\n");
//	printf("**1:add           2:sub**\n");
//	printf("**3:mul           4:div**\n");
//	printf("******    0:exit  *******\n");
//	printf("*************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;//�Ӷ�һ�����������øĶ��ܶ���룬ֻ���ں���ָ��������Ӻ�����
//}
//
//
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	//int (*pf[5])(int x, int y) = { 0,Add,Sub,Mul,Div };//ת�Ʊ�
//	//��������š������������֣����㲻�����Ӻ���
//	int (*pf[])(int x, int y) = { 0,Add,Sub,Mul,Div,Xor };//ת�Ʊ�
//
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf_s("%d", &input);
//		if (input <= 4 && input >= 1)
//		{
//			printf("�������������");
//			scanf_s("%d%d", &x, &y);
//			ret = (*pf[input])(x, y);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		printf("ret = %d\n", ret);
//	} while (input);
//
//	return 0;
//}