#define _CRT_SECURE_NO_WARNINGS
//// �����Ͱ� ����Ű�� ������ ���� �ٲ۴�
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
//	printf("pa�� ����Ű�� ������ �ּҰ� : %x\n", pa);
//	printf("pa�� �ּҰ� : %x\n", &pa);
//	printf("pb�� ����Ű�� ������ �ּҰ� : %x\n", pb);
//	printf("pb�� �ּҰ� : %x\n", &pb);
//
//	printf("\npswapȣ��\n");
//	pswap(&pa, &pb);
//	printf("pswapȣ�� �Ϸ�\n\n");
//
//	printf("pa�� ����Ű�� ������ �ּҰ� : %x\n", pa);
//	printf("pa�� �ּҰ� : %x\n", &pa);
//	printf("pb�� ����Ű�� ������ �ּҰ� : %x\n", pb);
//	printf("pb�� �ּҰ� : %x\n", &pb);
//
//	return 0;
//}
//
//int pswap(int ** ppa, int ** ppb)
//{
//	int *temp = *ppa;
//
//	printf("ppa�� ����Ű�� ������ �ּҰ� : %x\n", ppa);
//	printf("ppb�� ����Ű�� ������ �ּҰ� : %x\n", ppb);
//
//	*ppa = *ppb;
//	*ppb = temp;
//
//	return 0;
//}

//// 2���� �迭�� �� ���Ҹ� 1�� ������Ű�� �Լ�
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

//// �Լ� ������ ����
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

//// �Լ� ������
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

//// ����1
//#include <stdio.h>
//int main()
//{
//	int arr[5][4], rank[5] = { 0 }, i, j, aveStudent = 0;
//
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%d��° �л��� ���, ����, �ܱ��� ������ �Է��ϼ��� : ",i+1);
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
//				printf("%d�� - %d�� �л�", i + 1, j + 1);
//				if (arr[j][3] >= aveStudent)
//				{
//					printf(" : �հ�\n");
//				}
//				else
//				{
//					printf(" : ���հ�\n");
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//// ����2
//#include <stdio.h>
//#include <stdlib.h>
//int Euclidean(int a, int b);
//int main()
//{
//	int i, input, *arr;
//
//	printf("�ִ� ������� ���� ���� ������ �Է��ϼ��� : ");
//	scanf_s("%d", &input);
//	arr = (int*)malloc(sizeof(int)*input);
//
//	for (i = 0; i < input; i++)
//	{
//		printf("%d��° ���� �Է��ϼ��� : ", i + 1);
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
//	printf("�ִ����� : %d\n", arr[i + 1]);
//
//	return 0;
//}
//
//int Euclidean(int a, int b)
//{
//	return b ? Euclidean(b, a%b) : a;
//}

//// ����3
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

//// ���� 4
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
//		printf("ù��° ���� �Է��ϼ��� : ");
//		scanf_s("%lf", &x);
//		getchar();
//
//		while (1)
//		{
//			printf("�����ȣ�� �Է��ϼ��� : ");
//			scanf_s("%c", &operator);
//			getchar();
//
//			if (operator == 'c')
//			{
//				break;
//			}
//
//			printf("�ι�° ���� �Է��ϼ��� : ");
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
//				printf("��Ģ���� ��ȣ�� �Է����ּ���.\n");
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
//		printf("0���� ���� �� �����ϴ�.\n");
//		return x;
//	}
//}

//// ���� 5
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	int input, temp, n, m, i, digit = 0, conversion = 0, *arr;
//
//	// �� �������� Ȯ��
//	printf("�� �������� �Է��Ͻðڽ��ϱ�? ");
//	scanf_s("%d", &n);
//
//	// n�������� �Է� �޴� ô������ 16������ �޴´� 16������ 0 ~ F���� �Է� ����
//	printf("%d���� ���� �Է��ϼ��� : ", n);
//	scanf_s("%x", &input);
//
//	//2�������� 15���������� ������ �ʿ��ϴ�
//	if (2<=n&&n<15)
//	{
//		// 16������ �޾Ƶ� 10������ �����ϱ� ������ 16������ �� �ڸ������� ����
//		temp = input;
//		while (temp >= 1)
//		{
//			temp /= 16;
//			digit++;
//		}
//
//		// ���� �ڸ�����ŭ �迭�� ����
//		arr = (char*)malloc(sizeof(char)*digit);
//		// �� �ڸ��� �� �迭�� ����
//		for (i = 0; i < digit; i++)
//		{
//			arr[i] = (input % 16);
//			input /= 16;
//		}
//
//		// �� �ڸ��� ���� ���� n������ �°� �����ϰ� 10�������� conversion�� ����
//		for (i = 0; i < digit; i++)
//		{
//			conversion += arr[i] * (int)powf((float)n, (float)i);
//		}
//	}
//	// 16�������� �Է� ������ ���ϴ�
//	else if (n==16)
//	{
//		conversion = input;
//	}
//
//	// 10������ m��������
//	printf("�� �������� ��ȯ�ϰڽ��ϱ�? ");
//	scanf_s("%d", &m);
//
//	// 10������ ����ϱ� ����
//	if (m == 10)
//	{
//		printf("%d(10)\n", conversion);
//	}
//	// �������� ������ �ʿ��ϴ�
//	else
//	{
//		// m�������� �ʿ��� �ڸ��� ���
//		digit = 0;
//		temp = conversion;
//		while (temp >= 1)
//		{
//			temp /= m;
//			digit++;
//		}
//
//		// m�������� �ʿ��� �ڸ��� ��ŭ �迭 �����
//		arr = (char*)malloc(sizeof(char)*digit);
//		// m������ �°� �� �ڸ��� �� �迭�� ���ڷ� ����
//		for (i = 0; i < digit; i++)
//		{
//			arr[i] = (conversion % m) + '0';
//			// 11~37������ ���ؼ� ���ĺ� ó��
//			if (arr[i] > '9')
//			{
//				arr[i] = arr[i] - 10 - '0' + 'A';
//			}
//			conversion /= m;
//		}
//
//		// �迭�� ������ ���ڵ��� �������� ���
//		for (i = digit - 1; i >= 0; i--)
//		{
//			printf("%c", arr[i]);
//		}
//		printf("(%d)\n", m);
//	}
//
//	return 0;
//}

// ����6
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

	printf("   1��° �Ҽ� : %4d\n   2��° �Ҽ� : %4d\n", arr[0], arr[1]);

	for (j = 5; j <= input; j += 2)
	{
		for (i = 1; i <= j; i++)
		{
			if (sqrt((double)j) < arr[i])
			{
				arr[count] = j;
				count++;
				printf("%4d��° �Ҽ� : %4d\n", count, j);
				break;
			}
			else if (j % arr[i] == 0)
			{
				break;
			}
		}
	}

	printf("%d���� �Ҽ��� %d��\n", input, count);

	return 0;
}