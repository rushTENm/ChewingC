////for문
//#include <stdio.h>
//int main()
//{
//	int i;
//
//	for ( i = 0; i < 20; i++)
//	{
//		printf("숫자 : %d\n", i);
//	}
//
//	return 0;
//}

////1부터 19까지의 합
//#include <stdio.h>
//int main()
//{
//	int i, sum = 0;
//
//	for ( i = 0; i < 20; i++)
//	{
//		sum = sum + i;
//	}
//	printf("1부터 19까지의 합 : %d\n", sum);
//	
//	return 0;
//}

////for문 응용
//#include <stdio.h>
//int main()
//{
//	int i, subject, score;
//	double sum_score = 0;
//
//	printf("몇 개의 과목 점수를 입력할 것인가요? ");
//	scanf_s("%d", &subject);
//	
//	printf("\n각 과목의 점수를 입력해주세요.\n");
//	for ( i = 1; i <= subject; i++)
//	{
//		printf("과목 %d : ", i);
//		scanf_s("%d", &score);
//		sum_score = sum_score + score;
//	}
//
//	printf("\n전체 과목의 평균 : %.2f\n", sum_score / subject);
//
//	return 0;
//}

////break문
//#include <stdio.h>
//int main()
//{
//	int usranswer;
//
//	printf("컴퓨터가 생각한 숫자를 맞춰보세요!\n");
//
//	while (1)
//	{
//		scanf_s("%d", &usranswer);
//		if (usranswer == 3)
//		{
//			printf("맞추셨군요!\n");
//			break;
//		}
//		else
//		{
//			printf("틀렸어요!\n");
//		}
//	}
//
//	return 0;
//}

////5의 배수를 제외한 숫자 출력
//#include <stdio.h>
//int main()
//{
//	int i;
//
//	for ( i = 0; i < 100; i++)
//	{
//		if (i % 5 == 0)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//
//	return 0;
//}

////구구단
//#include <stdio.h>
//int main()
//{
//	int i, j;
//
//	for ( i = 2; i < 10; i++)
//	{
//		for ( j = 2; j < 10; j++)
//		{
//			printf("%d x %d = %2d\n", i, j, i*j);
//		}
//	}
//
//	printf("\n");
//
//	for ( i = 2; i <10; i++)
//	{
//		for ( j = 2; j < 10; j++)
//		{
//			printf("%dx%d = %2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//// while문
//#include <stdio.h>
//int main()
//{
//	int i = 1, sum = 0;
//
//	while (i <= 100)
//	{
//		sum += i;
//		i++;
//	}
//
//	printf("1부터 100까지의 합 : %d\n", sum);
//
//	return 0;
//}

////문제1, 2
//#include <stdio.h>
//void main()
//{
//	int i, j, k = 0, N;
//
//	printf("삼각형의 크기를 입력하세요 : ");
//	scanf_s("%d", &N);
//
//	for (i = 1; i <= N; i++)
//	{
//		for (j = 0; j < (N - i); j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j < (2 * i - 1); j++)
//		{
//			printf("*");
//		}
//		printf("*\n");
//	}
//
//	for (i = N; i > 0; i--)
//	{
//		for (j = 0; j < k; j++)
//		{
//			printf(" ");
//		}
//		k++;
//		for (j = 0; j < (2 * i - 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

////문제3
//#include <stdio.h>
//void main()
//{
//	int i, sum = 0;
//
//	for (i = 1; i <= 1000; i++)
//	{
//		if (((i % 3) == 0) || (i % 5) == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("1000 이하의 3 또는 5의 배수인 자연수 들의 합 : %d\n", sum);
//}

////문제4
//#include <stdio.h>
//void main()
//{
//	int Fibonacci, turn = 2 , sum = 0, last = 1, beforeLast = 0;
//	
//	do
//	{
//		Fibonacci = last + beforeLast;
//		beforeLast = last;
//		last = Fibonacci;
//
//		if (turn % 2 == 0)
//		{
//			sum += Fibonacci;
//		}
//
//		turn++;
//	} while (Fibonacci <= 1000000);
//
//	printf("%d\n", sum);
//}

////문제5
//#include <stdio.h>
//void main()
//{
//	int i, input, factorial = 1;
//
//	printf("계승을 구하고 싶은 수를 입력하세요 : ");
//	scanf_s("%d", &input);
//
//	for ( i = 1; i <= input; i++)
//	{
//		factorial *= i;
//	}
//
//	printf("%d의 계승은 %d입니다.\n", input, factorial);
//}

////문제6
//#include <stdio.h>
//void main()
//{
//	int a = 1, b = 2, c = 1997, counter = 0;
//
//	for (a = 1; a + b + c == 2000;)
//	{
//		for (b = a + 1; a + b + c == 2000; b++, c--)
//		{
//			c = 2000 - a - b;
//			if (b < c)
//			{
//				printf("%3d %3d %4d    ", a, b, c);
//				counter++;
//			}
//			else
//			{
//				a++;
//				b = a + 1;
//				c = 2000 - a - b;
//				break;
//			}
//		}
//		if (a > c)
//		{
//			break;
//		}
//	}
//
//	printf("\n\n%d\n", counter);
//}

////문제7
//#include <stdio.h>
//void main()
//{
//	int input, i;
//
//	while (1)
//	{
//		scanf_s("%d", &input);
//
//		printf("%d =", input);
//
//		if (input == 1)
//		{
//			printf(" %d", input);
//		}
//		else
//		{
//			for (i = 2; i <= input; i++)
//			{
//				while (input % i == 0)
//				{
//					input /= i;
//					if (input == 1)
//					{
//						printf(" %d", i);
//					}
//					else
//					{
//						printf(" %d *", i);
//					}
//				}
//			}
//		}
//
//		printf("\n");
//	}
//}