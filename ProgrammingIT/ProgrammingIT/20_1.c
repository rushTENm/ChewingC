//// �޸� �����Ҵ�
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char **argv)
//{
//	int NumberOfElements;
//	int *arr;
//
//	printf("����� ���� �迭�� ���� �� : ");
//	scanf_s("%d", &NumberOfElements);
//
//	arr = (int *)malloc(sizeof(int)*NumberOfElements);
//
//	free(arr);
//
//	return 0;
//}

//// �����Ҵ��� Ȱ��
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char **argv)
//{
//	int students, i, sum = 0, *score;
//
//	printf("�л��� ���� �Է��ϼ��� : ");
//	scanf_s("%d", &students);
//
//	score = (int *)malloc(sizeof(int)*students);
//
//	for (i = 0; i < students; i++)
//	{
//		printf("%d��° �л��� ���� : ", i+1);
//		scanf_s("%d", &score[i]);
//
//		sum += score[i];
//	}
//
//	printf("��ü �л��� ��� ���� : %d\n", sum / students);
//
//	return 0;
//}

//// 2���� �迭�� ���� �Ҵ�
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char**argv)
//{
//	int i, x, y, **arr; // arr[x][y]
//
//	printf("arr[x][y]�� ���� ���Դϴ� : ");
//	scanf_s("%d %d", &x, &y);
//
//	arr = (int**)malloc(sizeof(int)*x); // int *�� ���Ҹ� x�� ������ 1���� �迭 ����
//
//	for (i = 0; i < x; i++)
//	{
//		arr[i] = (int*)malloc(sizeof(int)*y);
//	}
//
//	printf("���� �Ϸ�!\n");
//
//	for ( i = 0; i < x; i++)
//	{
//		free(arr[i]);
//	}
//	free(arr);
//
//	printf("�޸� ���� �Ϸ�\n");
//
//	return 0;
//}

//// 2���� �迭 ���� �Ҵ��� Ȱ��
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char**argv)
//{
//	int i, j, sum, subjects, students, **arr;
//
//	printf("���� �� : ");
//	scanf_s("%d", &subjects);
//
//	printf("�л��� �� : ");
//	scanf_s("%d", &students);
//
//	arr = (int **)malloc(sizeof(int)*subjects);
//
//	for ( i = 0; i < subjects; i++)
//	{
//		arr[i] = (int*)malloc(sizeof(int)*students);
//	}
//
//	for ( i = 0; i < subjects; i++)
//	{
//		printf("-----%d��° ���� ����------\n", i + 1);
//
//		for ( j = 0; j < students; j++)
//		{
//			printf("%d��° �л� ���� �Է� : ", j + 1);
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//
//	printf("==========================\n");
//
//	for ( i = 0; i < subjects; i++)
//	{
//		sum = 0;
//
//		for ( j = 0; j < students; j++)
//		{
//			sum += arr[i][j];
//		}
//
//		printf("%d��° ���� ��� ���� : %d\n", i+1, sum / students);
//	}
//
//	printf("==========================\n");
//
//	for ( j = 0; j < students; j++)
//	{
//		sum = 0;
//
//		for ( i = 0; i < subjects; i++)
//		{
//			sum += arr[i][j];
//		}
//
//		printf("%d��° �л� ��� ���� : %d\n", j + 1, sum / subjects);
//	}
//
//	for ( i = 0; i < subjects; i++)
//	{
//		free(arr[i]);
//	}
//	free(arr);
//
//	return 0;
//}

//// �����Ҵ��� 2���� �迭 ���ڷ� �����ϱ�
//#include <stdio.h>
//#include <stdlib.h>
//
//void getSubjectAverage(int **arr, int students, int subjects);
//void getStudentAverage(int **arr, int students, int subjects);
//int main(int argc, char**argv)
//{
//	int i, j, subjects, students, **arr;
//
//	printf("���� �� : ");
//	scanf_s("%d", &subjects);
//
//	printf("�л��� �� : ");
//	scanf_s("%d", &students);
//
//	arr = (int **)malloc(sizeof(int)*subjects);
//
//	for (i = 0; i < subjects; i++)
//	{
//		arr[i] = (int*)malloc(sizeof(int)*students);
//	}
//
//	for (i = 0; i < subjects; i++)
//	{
//		printf("-----%d��° ���� ����------\n", i + 1);
//
//		for (j = 0; j < students; j++)
//		{
//			printf("%d��° �л� ���� �Է� : ", j + 1);
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//
//	printf("==========================\n");
//
//	getSubjectAverage(arr, students, subjects);
//
//	printf("==========================\n");
//
//	getStudentAverage(arr, students, subjects);
//
//	for (i = 0; i < subjects; i++)
//	{
//		free(arr[i]);
//	}
//	free(arr);
//
//	return 0;
//}
//
//void getSubjectAverage(int ** arr, int students, int subjects)
//{
//	int i, j, sum;
//
//	for ( i = 0; i < subjects; i++)
//	{
//		sum = 0;
//
//		for ( j = 0; j < students; j++)
//		{
//			sum += arr[i][j];
//		}
//
//		printf("%d��° ���� ��� ���� : %d\n", i + 1, sum / students);
//	}
//}
//
//void getStudentAverage(int ** arr, int students, int subjects)
//{
//	int i, j, sum;
//
//	for (j = 0; j < students; j++)
//	{
//		sum = 0;
//
//		for (i = 0; i < subjects; i++)
//		{
//			sum += arr[i][j];
//		}
//
//		printf("%d��° �л� ��� ���� : %d\n", j + 1, sum / subjects);
//	}
//}

//// ����1
//#include <stdio.h>;
//#include <stdlib.h>;
//int main()
//{
//
//}
//// ����2
//// ����3