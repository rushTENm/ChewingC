//// �迭 ����
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("arr 3��° ���� : %d\n", arr[2]);
//
//	return 0;
//}

//// �迭 ����ϱ�
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 2,10,30,21,34,23,53,32,9,1 };
//	int i;
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("�迭�� %2d��° ���� : %2d\n", i+1, arr[i]);
//	}
//
//	return 0;
//}

//// ��� ���ϱ�
//#include <stdio.h>
//int main()
//{
//	int arr[5];
//	int i, sum = 0;
//
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%d��° �л��� ������? ", i + 1);
//		scanf_s("%d", &arr[i]);
//		sum += arr[i];
//	}
//
//	printf("��ü �л��� ��� : %d\n", sum / 5);
//
//	return 0;
//}

//// ģ���� ��Ź
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int sum=0, ave=0, i;
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%2d�� �л��� ���� : ", i + 1);
//		scanf_s("%3d", &arr[i]);
//		sum += arr[i];
//	}
//
//	ave = sum / 10;
//	printf("\n��ü �л��� ����� : %d\n\n", ave);
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%2d�� �л� : ", i + 1);
//		if (arr[i] >= ave)
//		{
//			printf("�հ�\n");
//		}
//		else
//		{
//			printf("���հ�\n");
//		}
//	}
//
//	return 0;
//}

//// �Ҽ� ã�� ���α׷�
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int arr[1000] = { 2,3 }, i, j, count = 2;
//
//	printf("   1��° �Ҽ� : %4d\n   2��° �Ҽ� : %4d\n", arr[0], arr[1]);
//
//	for (j = 5; count < 1000; j += 2)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			if (sqrt((double)j) < arr[i])
//			{
//				arr[count] = j;
//				count++;
//				printf("%4d��° �Ҽ� : %4d\n",count, j);
//				break;
//			}
//			else if (j % arr[i] == 0)
//			{
//				break;
//			}
//		}
//	}
//
//	return 0;
//}

//// ����1
//#include <stdio.h>
//int main()
//{
//	int arr[10], rank[10] = { 0 };
//	int sum = 0, ave = 0, i,j;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%2d�� �л��� ���� : ", i + 1);
//		scanf_s("%3d", &arr[i]);
//		sum += arr[i];
//	}
//
//	ave = sum / 10;
//	printf("\n��ü �л��� ����� : %d\n\n", ave);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%2d�� �л� : ", i + 1);
//		if (arr[i] >= ave)
//		{
//			printf("�հ�\n");
//		}
//		else
//		{
//			printf("���հ�\n");
//		}
//	}
//
//	printf("\n");
//
//	for ( i = 0; i < 10; i++)
//	{
//		for ( j = 0; j < 10; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				rank[j]++;
//			}
//		}
//	}
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%2d�� �л��� %2d���Դϴ�.\n", i+1, rank[i]+1);
//	}
//
//	printf("\n");
//
//	for ( i = 0; i < 10; i++)
//	{
//		for ( j = 0; j < 10; j++)
//		{
//			if (i == rank[j])
//			{
//				printf("%2d���� %2d�� �л��̰� %3d���Դϴ�.\n", i + 1, j + 1, arr[j]);
//			}
//		}
//	}
//
//	return 0;
//}

////����2
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int sum=0, ave=0, i, j;
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%2d�� �л��� ���� : ", i + 1);
//		scanf_s("%3d", &arr[i]);
//		sum += arr[i];
//	}
//
//	ave = sum / 10;
//	printf("\n��ü �л��� ����� : %d\n\n", ave);
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%2d�� �л� : ", i + 1);
//		if (arr[i] >= ave)
//		{
//			printf("�հ�\n");
//		}
//		else
//		{
//			printf("���հ�\n");
//		}
//	}
//
//	printf("\n");
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%2d�� �л� : ",i+1);
//		for ( j = 0; j < arr[i]/2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}