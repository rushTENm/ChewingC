////for��
//#include <stdio.h>
//int main()
//{
//	int i;
//
//	for ( i = 0; i < 20; i++)
//	{
//		printf("���� : %d\n", i);
//	}
//
//	return 0;
//}

////1���� 19������ ��
//#include <stdio.h>
//int main()
//{
//	int i, sum = 0;
//
//	for ( i = 0; i < 20; i++)
//	{
//		sum = sum + i;
//	}
//	printf("1���� 19������ �� : %d\n", sum);
//	
//	return 0;
//}

////for�� ����
//#include <stdio.h>
//int main()
//{
//	int i, subject, score;
//	double sum_score = 0;
//
//	printf("�� ���� ���� ������ �Է��� ���ΰ���? ");
//	scanf_s("%d", &subject);
//	
//	printf("\n�� ������ ������ �Է����ּ���.\n");
//	for ( i = 1; i <= subject; i++)
//	{
//		printf("���� %d : ", i);
//		scanf_s("%d", &score);
//		sum_score = sum_score + score;
//	}
//
//	printf("\n��ü ������ ��� : %.2f\n", sum_score / subject);
//
//	return 0;
//}

////break��
//#include <stdio.h>
//int main()
//{
//	int usranswer;
//
//	printf("��ǻ�Ͱ� ������ ���ڸ� ���纸����!\n");
//
//	while (1)
//	{
//		scanf_s("%d", &usranswer);
//		if (usranswer == 3)
//		{
//			printf("���߼̱���!\n");
//			break;
//		}
//		else
//		{
//			printf("Ʋ�Ⱦ��!\n");
//		}
//	}
//
//	return 0;
//}

////5�� ����� ������ ���� ���
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

////������
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

//// while��
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
//	printf("1���� 100������ �� : %d\n", sum);
//
//	return 0;
//}

////����1, 2
//#include <stdio.h>
//void main()
//{
//	int i, j, k = 0, N;
//
//	printf("�ﰢ���� ũ�⸦ �Է��ϼ��� : ");
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

////����3
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
//	printf("1000 ������ 3 �Ǵ� 5�� ����� �ڿ��� ���� �� : %d\n", sum);
//}

////����4
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

////����5
//#include <stdio.h>
//void main()
//{
//	int i, input, factorial = 1;
//
//	printf("����� ���ϰ� ���� ���� �Է��ϼ��� : ");
//	scanf_s("%d", &input);
//
//	for ( i = 1; i <= input; i++)
//	{
//		factorial *= i;
//	}
//
//	printf("%d�� ����� %d�Դϴ�.\n", input, factorial);
//}

////����6
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

////����7
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