#define _CRT_SECURE_NO_WARNINGS 1

//����getchar����
//getchar()�����Ĺ�����һ��һ���ض�ȡ����������ַ�
//#include <stdio.h>
//
//int main()
//{
//	int ch = getchar();
//
//	putchar(ch);//����һ���ַ�����ӡ���
//	printf("%c\n", ch);//��ch���ַ���ӡ���
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int ch = 0;
//
//	//ctrl + z  ==> EOF
//	//EOF - end of file -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}




////ȷ������
//#include <stdio.h>
//
//int main()
//{
//	int ret = 0, ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//��������,�������passsword������
//
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//����һ��Y/N�ַ�
//	if (ret == 'Y')//�ж��Ƿ�������¡�Y��
//	{
//		printf("ȷ�ϳɹ�\n");//������롰Y���ַ������ȷ�ϳɹ�
//	}
//	else
//	{
//		printf("����ȷ��\n");//�������ȷ�ϳɹ�
//	}
//
//	return 0;
//}


////�޸Ĵ���--ȷ������
//#include <stdio.h>
//
//int main()
//{
//	int ret = 0, ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//��������,�������passsword������
//
//	//�޸�
//	//����������һ����\n������������getchar��ȡһ�¡�\n��
//	//�����������ʱ���пո񣬿ո�Ҳ�ǻ�ֹͣ��������
//	//�ո�������ܶ��ַ�����������һ��whileѭ����ȡ�ַ���
//	while ((ch = getchar()) != '\n')
//	{
//		;//����䣬��Ϊ�˴�����Ҫ�в���
//	}
//
//
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//����һ��Y/N�ַ�
//	if (ret == 'Y')//�ж��Ƿ�������¡�Y��
//	{
//		printf("ȷ�ϳɹ�\n");//������롰Y���ַ������ȷ�ϳɹ�
//	}
//	else
//	{
//		printf("����ȷ��\n");//�������ȷ�ϳɹ�
//	}
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int ch = 0;
//
//    while ((ch = getchar()) != EOF)//����EOFֹͣѭ��
//    {
//        if (ch < '0' || ch > '9')//�����������ֵ��ַ����������ѭ��
//            continue;
//        putchar(ch);//���������ַ��ʹ�ӡ���
//    }
//    return 0;
//}