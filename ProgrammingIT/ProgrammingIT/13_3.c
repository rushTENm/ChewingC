#define _CRT_SECURE_NO_WARNINGS
//// 포인터가 가리키는 변수를 서로 바꾼다
//#include <stdio.h>
//
//int pswap(int **ppa, int **ppb);
//int main()
//{
//	int a, b, *pa, *pb;
//
//	pa = &a;
//	pb = &b;
//
//	printf("pa가 가리키는 변수의 주소값 : %x\n", pa);
//	printf("pa의 주소값 : %x\n", &pa);
//	printf("pb가 가리키는 변수의 주소값 : %x\n", pb);
//	printf("pb의 주소값 : %x\n", &pb);
//
//	printf("\npswap호출\n");
//	pswap(&pa, &pb);
//	printf("pswap호출 완료\n\n");
//
//	printf("pa가 가리키는 변수의 주소값 : %x\n", pa);
//	printf("pa의 주소값 : %x\n", &pa);
//	printf("pb가 가리키는 변수의 주소값 : %x\n", pb);
//	printf("pb의 주소값 : %x\n", &pb);
//
//	return 0;
//}
//
//int pswap(int ** ppa, int ** ppb)
//{
//	int *temp = *ppa;
//
//	printf("ppa가 가리키는 변수의 주소값 : %x\n", ppa);
//	printf("ppb가 가리키는 변수의 주소값 : %x\n", ppb);
//
//	*ppa = *ppb;
//	*ppb = temp;
//
//	return 0;
//}

//// 2차원 배열의 각 원소를 1씩 증가시키는 함수
//#include <stdio.h>
//
//int add1_element(int(*arr)[2], int row);
//int main()
//{
//	int arr[3][2], i, j;
//
//	for ( i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 2; j++)
//		{
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//
//	add1_element(arr, 3);
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("arr[%d][%d] : %d\n", i, j, arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//
//int add1_element(int(*arr)[2], int row)		// (*arr)[2] == arr[][2]
//{
//	int i, j;
//
//	for ( i = 0; i < row; i++)
//	{
//		for ( j = 0; j < 2; j++)
//		{
//			arr[i][j]++;
//		}
//	}
//
//	return 0;
//}

//// 함수 포인터 선언
//#include <stdio.h>
//
//int max(int a, int b);
//int main()
//{
//	int a, b, (*pmax)(int, int);
//
//	pmax = max;
//
//	scanf_s("%d %d", &a, &b);
//	printf("max(a, b) : %d\n", max(a, b));
//	printf("pmax(a, b) : %d\n", pmax(a, b));
//
//	return 0;
//}
//
//int max(int a, int b)
//{
//	if (a>b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}

//// 함수 포인터
//#include <stdio.h>
//
//int max(int a, int b);
//int doNothing(int c, int k);
//int main()
//{
//	int a, b, (*pfunc)(int, int);
//
//	pfunc = max;
//
//	scanf_s("%d %d", &a, &b);
//	printf("max(a, b) : %d\n", max(a, b));
//	printf("pfunc(a, b) : %d\n", pfunc(a, b));
//
//	pfunc = doNothing;
//
//	printf("doNoting(1, 1) : %d\n", doNothing(1, 1));
//	printf("pfunc(1, 1) : %d\n", pfunc(1, 1));
//
//	return 0;
//}
//
//int max(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//
//int doNothing(int c, int k)
//{
//	return 1;
//}

//// 문제1
//#include <stdio.h>
//int main()
//{
//	int arr[5][4], rank[5] = { 0 }, i, j, aveStudent = 0;
//
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%d번째 학생의 언어, 수리, 외국어 점수를 입력하세요 : ",i+1);
//		scanf_s("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
//
//		arr[i][3] = (arr[i][0] + arr[i][1] + arr[i][2]) / 3;
//		aveStudent += arr[i][3];
//	}
//	aveStudent /= 5;
//
//	for ( i = 0; i < 5; i++)
//	{
//		for ( j = 0; j < 5; j++)
//		{
//			if (arr[i][3] > arr[j][3])
//			{
//				rank[j]++;
//			}
//		}
//	}
//
//	for ( i = 0; i < 5; i++)
//	{
//		for ( j = 0; j < 5; j++)
//		{
//			if (i == rank[j])
//			{
//				printf("%d등 - %d번 학생", i + 1, j + 1);
//				if (arr[j][3] >= aveStudent)
//				{
//					printf(" : 합격\n");
//				}
//				else
//				{
//					printf(" : 불합격\n");
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//// 문제2
//#include <stdio.h>
//#include <stdlib.h>
//int Euclidean(int a, int b);
//int main()
//{
//	int i, input, *arr;
//
//	printf("최대 공약수를 구할 수의 개수를 입력하세요 : ");
//	scanf_s("%d", &input);
//	arr = (int*)malloc(sizeof(int)*input);
//
//	for (i = 0; i < input; i++)
//	{
//		printf("%d번째 수를 입력하세요 : ", i + 1);
//		scanf_s("%d", &arr[i]);
//	}
//
//	for (i = 0; i < (input - 1); i++)
//	{
//		arr[i + 1] = Euclidean(arr[i], arr[i + 1]);
//		if (arr[i + 1] == 1)
//		{
//			break;
//		}
//	}
//
//	printf("최대공약수 : %d\n", arr[i + 1]);
//
//	return 0;
//}
//
//int Euclidean(int a, int b)
//{
//	return b ? Euclidean(b, a%b) : a;
//}

//// 문제3
//#include <stdio.h>
//int factorial(int input);
//int main()
//{
//	int input;
//
//	scanf_s("%d", &input);
//
//	printf("%d\n", factorial(input));
//
//	return 0;
//}
//
//int factorial(int input)
//{
//	return input <= 1 ? 1 : input * factorial(input - 1);
//}

//// 문제 4
//#include <stdio.h>
//
//double addition(double x, double y);
//double subtraction(double x, double y);
//double multiplication(double x, double y);
//double division(double x, double y);
//int main()
//{
//	double x, y, result;
//	char operator;
//
//	while (1)
//	{
//		printf("첫번째 항을 입력하세요 : ");
//		scanf_s("%lf", &x);
//		getchar();
//
//		while (1)
//		{
//			printf("연산기호를 입력하세요 : ");
//			scanf_s("%c", &operator);
//			getchar();
//
//			if (operator == 'c')
//			{
//				break;
//			}
//
//			printf("두번째 항을 입력하세요 : ");
//			scanf_s("%lf", &y);
//			getchar();
//
//			switch (operator)
//			{
//			case '+':
//				result = addition(x, y);
//				break;
//			case '-':
//				result = subtraction(x, y);
//				break;
//			case '*':
//				result = multiplication(x, y);
//				break;
//			case '/':
//				result = division(x, y);
//				break;
//			default:
//				printf("사칙연산 기호를 입력해주세요.\n");
//				break;
//			}
//
//			printf("%lf %c %lf = %lf\n", x, operator,y, result);
//			x = result;
//		}
//	}
//
//	return 0;
//}
//
//double addition(double x, double y)
//{
//	return x + y;
//}
//
//double subtraction(double x, double y)
//{
//	return x - y;
//}
//
//double multiplication(double x, double y)
//{
//	return x * y;
//}
//
//double division(double x, double y)
//{
//	if (y)
//	{
//		return x / y;
//	}
//	else
//	{
//		printf("0으로 나눌 수 없습니다.\n");
//		return x;
//	}
//}

//// 문제 5
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	int input, temp, n, m, i, digit = 0, conversion = 0, *arr;
//
//	// 몇 진법인지 확인
//	printf("몇 진법으로 입력하시겠습니까? ");
//	scanf_s("%d", &n);
//
//	// n진법으로 입력 받는 척하지만 16진수를 받는다 16진수라서 0 ~ F까지 입력 가능
//	printf("%d진법 수를 입력하세요 : ", n);
//	scanf_s("%x", &input);
//
//	//2진법부터 15진법까지는 연산이 필요하다
//	if (2<=n&&n<15)
//	{
//		// 16진수로 받아도 10진수로 저장하기 때문에 16진수로 몇 자리수인지 구함
//		temp = input;
//		while (temp >= 1)
//		{
//			temp /= 16;
//			digit++;
//		}
//
//		// 구한 자릿수만큼 배열을 생성
//		arr = (char*)malloc(sizeof(char)*digit);
//		// 한 자리씩 뜯어서 배열에 저장
//		for (i = 0; i < digit; i++)
//		{
//			arr[i] = (input % 16);
//			input /= 16;
//		}
//
//		// 한 자리씩 뜯은 수를 n진법에 맞게 복원하고 10진법으로 conversion에 저장
//		for (i = 0; i < digit; i++)
//		{
//			conversion += arr[i] * (int)powf((float)n, (float)i);
//		}
//	}
//	// 16진법으로 입력 받으면 편하다
//	else if (n==16)
//	{
//		conversion = input;
//	}
//
//	// 10진법을 m진법으로
//	printf("몇 진법으로 변환하겠습니까? ");
//	scanf_s("%d", &m);
//
//	// 10진법은 출력하기 쉽다
//	if (m == 10)
//	{
//		printf("%d(10)\n", conversion);
//	}
//	// 나머지는 연산이 필요하다
//	else
//	{
//		// m진법에서 필요한 자릿수 계산
//		digit = 0;
//		temp = conversion;
//		while (temp >= 1)
//		{
//			temp /= m;
//			digit++;
//		}
//
//		// m진법에서 필요한 자릿수 만큼 배열 재생성
//		arr = (char*)malloc(sizeof(char)*digit);
//		// m진법에 맞게 한 자리씩 뜯어서 배열에 문자로 저장
//		for (i = 0; i < digit; i++)
//		{
//			arr[i] = (conversion % m) + '0';
//			// 11~37진법을 위해서 알파벳 처리
//			if (arr[i] > '9')
//			{
//				arr[i] = arr[i] - 10 - '0' + 'A';
//			}
//			conversion /= m;
//		}
//
//		// 배열에 저장한 문자들을 역순으로 출력
//		for (i = digit - 1; i >= 0; i--)
//		{
//			printf("%c", arr[i]);
//		}
//		printf("(%d)\n", m);
//	}
//
//	return 0;
//}

// 문제6
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int getPrime(int input);
int main()
{
	int input;

	scanf_s("%d", &input);
	if (input < 3)
	{
		input = 3;
	}

	getPrime(input);

	return 0;
}

int getPrime(int input)
{
	int i, j, count = 2, *arr;

	arr = (int*)malloc(sizeof(int)*input * 3 / 4);
	arr[0] = 2;
	arr[1] = 3;

	printf("   1번째 소수 : %4d\n   2번째 소수 : %4d\n", arr[0], arr[1]);

	for (j = 5; j <= input; j += 2)
	{
		for (i = 1; i <= j; i++)
		{
			if (sqrt((double)j) < arr[i])
			{
				arr[count] = j;
				count++;
				printf("%4d번째 소수 : %4d\n", count, j);
				break;
			}
			else if (j % arr[i] == 0)
			{
				break;
			}
		}
	}

	printf("%d까지 소수는 %d개\n", input, count);

	return 0;
}