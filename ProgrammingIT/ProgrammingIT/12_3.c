//// 1차원 배열 가리키기
//#include <stdio.h>
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int *parr;
//
//	parr = arr; // parr = &arr[0];
//
//	printf("arr[1] : %d\nparr[1] : %d\n", arr[1], parr[1]);
//
//	return 0;
//}

//// 포인터 이용하기
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 100,98,97,95,89,76,92,96,100,99 };
//
//	int *parr = arr;
//	int sum = 0;
//
//	while (parr - arr <= 9)
//	{
//		sum += (*parr);
//		parr++;
//	}
//
//	printf("평균 : %d\n", sum / 10);
//
//	return 0;
//}

//// 포인터의 포인터
//#include <stdio.h>
//int main()
//{
//	int a;
//	int *pa;
//	int **ppa;
//
//	pa = &a;
//	ppa = &pa;
//
//	a = 3;
//
//	printf("a : %d // *pa : %d // **ppa : %d\n", a, *pa, **ppa);
//	printf("&a : %d // pa : %d // *ppa : %d\n", &a, pa, *ppa);
//	printf("&pa : %d // ppa : %d\n", &pa, ppa);
//
//	return 0;
//}

//// 2차원 배열의 []연산자
//#include <stdio.h>
//int main()
//{
//	int arr[2][3];
//
//	printf("arr[0] : %x\n", arr[0]);
//	printf("&arr[0][0] : %x\n", &arr[0][0]);
//
//	printf("arr[1] : %x\n", arr[1]);
//	printf("&arr[1][0] : %x\n", &arr[1][0]);
//
//	return 0;
//}

//// 2차원 배열의 이름
//#include <stdio.h>
//int main()
//{
//	int arr[2][3];
//
//	printf("&arr[0] : %x\n", &arr[0]);
//	printf("arr : %x\n", arr);
//
//	return 0;
//}

//// 2차원 배열의 덧셈
//#include <stdio.h>
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6,} };
//
//	printf("arr : %x, arr + 1 : %x\n", arr, arr + 1);
//
//	return 0;
//}

//// 배열의 포인터
//#include <stdio.h>
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	int(*parr)[3];
//
//	parr = arr;
//
//	printf("parr[1][2] : %d, arr[1][2] : %d\n", parr[1][2], arr[1][2]);
//
//	return 0;
//}

//// 포인터 배열
//#include <stdio.h>
//int main()
//{
//	int *parr[3];
//	int a = 1, b = 2, c = 3;
//	parr[0] = &a;
//	parr[1] = &b;
//	parr[2] = &c;
//
//	printf("a : %d, *parr[0] : %d\n", a, *parr[0]);
//	printf("b : %d, *parr[1] : %d\n", b, *parr[1]);
//	printf("c : %d, *parr[2] : %d\n", c, *parr[2]);
//
//	printf("&a : %d, parr[0] : %d\n", &a, parr[0]);
//
//	return 0;
//}