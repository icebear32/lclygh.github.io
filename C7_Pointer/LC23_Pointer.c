////�ص�����
////�ص����������ļ��������


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
//
////ͨ���� calc�������� һ������ָ�룬ȥ������һ������ -- �ص�����
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("��ѡ��������������>");
//	scanf_s("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);//��calc�������� Add�����ĵ�ַ
//			break;
//		case 2:
//			calc(Sub);//��calc�������� Sub�����ĵ�ַ
//			break;
//		case 3:
//			calc(Mul);//��calc�������� Mul�����ĵ�ַ
//			break;
//		case 4:
//			calc(Div);//��calc�������� DIv�����ĵ�ַ
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}