//�Զ��庯��

//	ret_type fun_name(para1, * )
//	{
//		statement;//�����
//	}
//	ret_type ��������
//	fun_name ������
//	para1    ��������

////��һ��дһ�����������ҳ����������е����ֵ��
//#include <stdio.h>
//
//int get_max(x, y)
//{
//	//if (x > y)
//	//{
//	//	return x;
//	//}
//	//else
//	//{
//	//	return y;
//	//}
//
//	//�Ż�����--��Ŀ������ʽ
//	return (x > y) ? (x) : (y);
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//
//	return 0;
//}





//дһ���������Խ����������ͱ��������ݡ�
//void swap1(x, y)//�����������
//{
//	int num = 0;
//	num = x;
//	x = y;
//	y = num;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	swap1(num1,num2);
//	printf("num1 = %d , num2 = %d \n", num1, num2);
//
//	return 0;
//}


//ָ�뷽�����
//#include <stdio.h>
//
//void swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	swap1(num1, num2);
//	printf("num1 = %d , num2 = %d \n", num1, num2);
//
//	return 0;
//}