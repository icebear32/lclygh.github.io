//��ϰ

//дһ��������ʵ��һ��������������Ķ��ֲ���

//����ʵ��Ҫ��
//#include <stdio.h>
//
//int binary_search(int arr[], int k)
//{
//	//�㷨��ʵ��
//
//	//����㣺arr��Ԫ�ص�ַ/arr��Ԫ�� = 1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)//����������ʱ�˳�ѭ��
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//���ֲ���
//	//��һ�������������Ҿ����ĳ����
//	//����ҵ��˷��أ���������±�; �Ҳ����ķ��� - 1
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//		printf("�Ҳ���ָ��������\n");
//	else
//		printf("�ҵ��ˣ��±�ʱ��%d\n", ret);
//
//	return 0;
//}



////�Ż�����
//#include <stdio.h>
//
//int binary_search(int arr[], int k, int sz)
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)//����������ʱ�˳�ѭ��
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//���ֲ���
//	//��һ�������������Ҿ����ĳ����
//	//����ҵ��˷��أ���������±�; �Ҳ����ķ��� - 1
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("�Ҳ���ָ��������\n");
//	else
//		printf("�ҵ��ˣ��±�ʱ��%d\n", ret);
//
//	return 0;
//}