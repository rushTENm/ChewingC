//// 포인터 매개 변수
//#include <stdio.h>
//int val_3(int *pi)
//{
//	printf("val_3 함수 시작\npi의 값 : %d\npi가 가리키는 것의 값 : %d\n", pi, *pi);
//
//	*pi = 3;
//
//	printf("val_3 함수 끝\n");
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	printf("변수 i의 주소값 : %d\n함수 호출 이전 i의 값 : %d\n", &i,i);
//	
//	val_3(&i);
//
//	printf("함수 호출 이후 i의 값 : %d\n", i);
//
//	return 0;
//}

//// swap 함수
//#include <stdio.h>
//int swap(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//	return 0;
//}
//
//int main()
//{
//	int i = 3, j = 5;
//
//	printf("SWAP 이전 i : %d, j : %d\n", i, j);
//
//	swap(&i, &j);
//
//	printf("SWAP 이후 i : %d, j : %d\n", i, j);
//
//	return 0;
//}

//// 함수의 원형
//#include <stdio.h>
//int swap(int *a, int *b);
//
//int main()
//{
//	int i = 3, j = 5;
//
//	printf("SWAP 이전 i : %d, j : %d\n", i, j);
//
//	swap(&i, &j);
//
//	printf("SWAP 이후 i : %d, j : %d\n", i, j);
//
//	return 0;
//}
//
//int swap(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//	return 0;
//}

//// 배열을 인자로 받기
//#include <stdio.h>
//
//int plus_1(int *parr);
//int main()
//{
//	int arr[3], i;
//
//	for ( i = 0; i < 3; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//	plus_1(arr);
//
//	printf("배열의 각 원소 : %d, %d, %d\n", arr[0], arr[1], arr[2]);
//
//	return 0;
//}
//
//int plus_1(int *parr)
//{
//	int i;
//
//	for ( i = 0; i < 3; i++)
//	{
//		parr[i]++;
//	}
//
//	return 0;
//}

//// 입력 받은 배열의 10개 원소 중 최대값을 출력
//#include <stdio.h>
//
//int max_number(int *parr);
//int main()
//{
//	int arr[10], i;
//
//	for ( i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//	printf("가장 큰 수 : %d\n", max_number(arr));
//
//	return 0;
//}
//
//int max_number(int *parr)
//{
//	int i, max = parr[0];
//
//	for ( i = 0; i < 10; i++)
//	{
//		if (parr[i] > max)
//		{
//			max = parr[i];
//		}
//	}
//
//	return max;
//}

//// 함수 이름짓기
//#include <stdio.h>
//
//int isdigit(char c);
//int main()
//{
//	char input;
//
//	scanf_s("%c", &input);
//
//	if (isdigit(input))
//	{
//		printf("%c는 숫자입니다.\n", input);
//	}
//	else
//	{
//		printf("%c는 숫자가 아닙니다.\n", input);
//	}
//
//	return 0;
//}
//
//int isdigit(char c)
//{
//	if (48 <= c && c <= 57)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//// 문제1
//#include <stdio.h>
//
//int max_number(int *parr);
//int main()
//{
//	int arr[10], i;
//
//	for ( i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//	max_number(arr);
//
//	return 0;
//}
//
//int max_number(int *parr)
//{
//	int i, j, temp;
//
//	for ( i = 0; i < 9; i++)
//	{
//		for ( j = 0; j < 9; j++)
//		{
//			if (parr[j] < parr[j+1])
//			{
//				temp = parr[j];
//				parr[j] = parr[j + 1];
//				parr[j + 1] = temp;
//			}
//		}
//	}
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", parr[i]);
//	}
//	printf("\n");
//
//	return temp;
//}

//// 문제2
//#include <stdio.h>
//void arrPlus(int (*arr)[2]);
//void main()
//{
//	int arr[2][2] = { 0 }, i, j;
//
//	arrPlus(arr);
//
//	for ( i = 0; i < 2; i++)
//	{
//		for ( j = 0; j < 2; j++)
//		{
//			printf("arr[%d][%d] : %d\n", i, j, arr[i][j]);
//		}
//	}
//}
//
//void arrPlus(int(*arr)[2])
//{
//	int i, j;
//
//	for ( i = 0; i < 2; i++)
//	{
//		for ( j = 0; j < 2; j++)
//		{
//			arr[i][j]++;
//		}
//	}
//}