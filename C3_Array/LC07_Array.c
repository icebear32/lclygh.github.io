////������Ϊ��������
//
//
////ð������
////����һ
//#include <stdio.h>
//
//void bubble_sort(int arr[])
//{
//	//ȷ��ð�����������
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������?//����--sizeof����һ��ֵ
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) 
//	{
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++) 
//		{
//			if (arr[j] > arr[j + 1]) 
//			{
//				int tmp = arr[j]; 
//				arr[j] = arr[j + 1]; 
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ&arr[0]
//	bubble_sort(arr);//ð��������
//	
//	//�Ƿ������������==������
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}





//
////���Ż�
///*
//	����flag=1����ѭ��ʱ��һ��if���ִ����flag=0���õڶ���if�������������������ڶ���if��������ֹѭ����
//	flag�Ǽ���Ƿ������򽻻��Ĳ�������û�����򽻻��Ϳ���ֱ���϶�����ɹ���������ѭ�����򣬲����˷�ʱ���������
//*/
//#include <stdio.h>
//
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);//ð��������
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	
//	printf ("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	
//	//printf("%d\n", *arr);//1
//
//	return 0;
//}