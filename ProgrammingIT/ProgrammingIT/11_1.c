//// 배열 기초
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("arr 3번째 원소 : %d\n", arr[2]);
//
//	return 0;
//}

//// 배열 출력하기
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 2,10,30,21,34,23,53,32,9,1 };
//	int i;
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("배열의 %2d번째 원소 : %2d\n", i+1, arr[i]);
//	}
//
//	return 0;
//}

//// 평균 구하기
//#include <stdio.h>
//int main()
//{
//	int arr[5];
//	int i, sum = 0;
//
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%d번째 학생의 성적은? ", i + 1);
//		scanf_s("%d", &arr[i]);
//		sum += arr[i];
//	}
//
//	printf("전체 학생의 평균 : %d\n", sum / 5);
//
//	return 0;
//}

//// 친구의 부탁
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int sum=0, ave=0, i;
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%2d번 학생의 성적 : ", i + 1);
//		scanf_s("%3d", &arr[i]);
//		sum += arr[i];
//	}
//
//	ave = sum / 10;
//	printf("\n전체 학생의 평균은 : %d\n\n", ave);
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%2d번 학생 : ", i + 1);
//		if (arr[i] >= ave)
//		{
//			printf("합격\n");
//		}
//		else
//		{
//			printf("불합격\n");
//		}
//	}
//
//	return 0;
//}

//// 소수 찾는 프로그램
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int arr[1000] = { 2,3 }, i, j, count = 2;
//
//	printf("   1번째 소수 : %4d\n   2번째 소수 : %4d\n", arr[0], arr[1]);
//
//	for (j = 5; count < 1000; j += 2)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			if (sqrt((double)j) < arr[i])
//			{
//				arr[count] = j;
//				count++;
//				printf("%4d번째 소수 : %4d\n",count, j);
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

//// 문제1
//#include <stdio.h>
//int main()
//{
//	int arr[10], rank[10] = { 0 };
//	int sum = 0, ave = 0, i,j;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%2d번 학생의 성적 : ", i + 1);
//		scanf_s("%3d", &arr[i]);
//		sum += arr[i];
//	}
//
//	ave = sum / 10;
//	printf("\n전체 학생의 평균은 : %d\n\n", ave);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%2d번 학생 : ", i + 1);
//		if (arr[i] >= ave)
//		{
//			printf("합격\n");
//		}
//		else
//		{
//			printf("불합격\n");
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
//		printf("%2d번 학생은 %2d등입니다.\n", i+1, rank[i]+1);
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
//				printf("%2d등은 %2d번 학생이고 %3d점입니다.\n", i + 1, j + 1, arr[j]);
//			}
//		}
//	}
//
//	return 0;
//}

////문제2
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int sum=0, ave=0, i, j;
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%2d번 학생의 성적 : ", i + 1);
//		scanf_s("%3d", &arr[i]);
//		sum += arr[i];
//	}
//
//	ave = sum / 10;
//	printf("\n전체 학생의 평균은 : %d\n\n", ave);
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%2d번 학생 : ", i + 1);
//		if (arr[i] >= ave)
//		{
//			printf("합격\n");
//		}
//		else
//		{
//			printf("불합격\n");
//		}
//	}
//
//	printf("\n");
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%2d번 학생 : ",i+1);
//		for ( j = 0; j < arr[i]/2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}