//// 메모리 동적할당
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char **argv)
//{
//	int NumberOfElements;
//	int *arr;
//
//	printf("만들고 싶은 배열의 원소 수 : ");
//	scanf_s("%d", &NumberOfElements);
//
//	arr = (int *)malloc(sizeof(int)*NumberOfElements);
//
//	free(arr);
//
//	return 0;
//}

//// 동적할당의 활용
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char **argv)
//{
//	int students, i, sum = 0, *score;
//
//	printf("학생의 수를 입력하세요 : ");
//	scanf_s("%d", &students);
//
//	score = (int *)malloc(sizeof(int)*students);
//
//	for (i = 0; i < students; i++)
//	{
//		printf("%d번째 학생의 점수 : ", i+1);
//		scanf_s("%d", &score[i]);
//
//		sum += score[i];
//	}
//
//	printf("전체 학생의 평균 점수 : %d\n", sum / students);
//
//	return 0;
//}

//// 2차원 배열의 동적 할당
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char**argv)
//{
//	int i, x, y, **arr; // arr[x][y]
//
//	printf("arr[x][y]를 만들 것입니다 : ");
//	scanf_s("%d %d", &x, &y);
//
//	arr = (int**)malloc(sizeof(int)*x); // int *형 원소를 x개 가지는 1차원 배열 생성
//
//	for (i = 0; i < x; i++)
//	{
//		arr[i] = (int*)malloc(sizeof(int)*y);
//	}
//
//	printf("생성 완료!\n");
//
//	for ( i = 0; i < x; i++)
//	{
//		free(arr[i]);
//	}
//	free(arr);
//
//	printf("메모리 해제 완료\n");
//
//	return 0;
//}

//// 2차원 배열 동적 할당의 활용
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char**argv)
//{
//	int i, j, sum, subjects, students, **arr;
//
//	printf("과목 수 : ");
//	scanf_s("%d", &subjects);
//
//	printf("학생의 수 : ");
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
//		printf("-----%d번째 과목 점수------\n", i + 1);
//
//		for ( j = 0; j < students; j++)
//		{
//			printf("%d번째 학생 점수 입력 : ", j + 1);
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
//		printf("%d번째 과목 평균 점수 : %d\n", i+1, sum / students);
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
//		printf("%d번째 학생 평균 점수 : %d\n", j + 1, sum / subjects);
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

//// 동적할당한 2차원 배열 인자로 전달하기
//#include <stdio.h>
//#include <stdlib.h>
//
//void getSubjectAverage(int **arr, int students, int subjects);
//void getStudentAverage(int **arr, int students, int subjects);
//int main(int argc, char**argv)
//{
//	int i, j, subjects, students, **arr;
//
//	printf("과목 수 : ");
//	scanf_s("%d", &subjects);
//
//	printf("학생의 수 : ");
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
//		printf("-----%d번째 과목 점수------\n", i + 1);
//
//		for (j = 0; j < students; j++)
//		{
//			printf("%d번째 학생 점수 입력 : ", j + 1);
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
//		printf("%d번째 과목 평균 점수 : %d\n", i + 1, sum / students);
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
//		printf("%d번째 학생 평균 점수 : %d\n", j + 1, sum / subjects);
//	}
//}

//// 문제1
//#include <stdio.h>;
//#include <stdlib.h>;
//int main()
//{
//
//}
//// 문제2
//// 문제3