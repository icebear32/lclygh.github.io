//#pragma warning(disable : 4996)

//λ������

//#include <stdio.h>
//
//int main()
//{
//	// & - ��2����λ��
//	int a = 3;
//	int b = 5; 
//	int c = a & b;
//	//
//	//�������бȽϣ��෴Ϊ0����ͬΪ1
//	//a = 3 - 00000000000000000000000000000011
//	//b = 5 - 00000000000000000000000000000101
//	//�������бȽϵõ�
//	//c = 1 - 00000000000000000000000000000001
//	//
//	printf("%d\n", c);//1
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	// | - ��2����λ��
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	//
//	//�������бȽϣ���ͬΪ1��ͬ0Ϊ0
//	//a = 3 - 00000000000000000000000000000011
//	//b = 5 - 00000000000000000000000000000101
//	//c = 7 - 00000000000000000000000000000111
//	//
//	printf("%d\n", c);//7
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//��2����λ���
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//
//	//��ͬΪ0������Ϊ1
//	//a = 3 - 00000000000000000000000000000011
//	//b = 5 - 00000000000000000000000000000101
//	//c = 6 - 00000000000000000000000000000110
//	//
//	printf("%d\n",c);//6
//
//	return 0;
//}


////���ܴ�����ʱ����(��������������ʵ���������Ľ�����
//#include <stdio.h>
//
//int main()
//{
//	//��ʱ�����ķ���
//	int a = 3;
//	int b = 5;
//	int tmp = 0;//��ʱ����
//	printf("before: a = %d b = %d\n",a,b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("after: a = %d b = %d\n", a, b);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//�Ӽ���
//	int a = 3;
//	int b = 5;
//	printf("before: a = %d b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("after: a = %d b = %d\n", a, b);
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	//���ķ���
//	int a = 3;
//	int b = 5;
//	printf("before: a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after: a = %d b = %d\n", a, b);
//
//	return 0;
//}




//��ϰ�ñ�д����ʵ��:��һ�������洢���ڴ��еĶ�������1�ĸ�����
//#include <stdio.h>
//
//int main()
//{	
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);//3 - 011
//
//	//ͳ��num�Ĳ����м���1
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//������
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);//-1
//
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//˼�����ܲ��ܸ����Ż����������ѭ��32�εġ�


//���������Ż�
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);//-1
//
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}