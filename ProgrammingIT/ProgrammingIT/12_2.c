//// 상수 포인터
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	const int* pa = &a;
//
//	//*pa = 3;
//	pa = &b;
//
//	return 0;
//}

//// 상수 포인터
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	int* const pa = &a;
//
//	*pa = 3;
//	//pa = &b;
//
//	return 0;
//}

//// 포인터의 덧셈
//#include <stdio.h>
//int main()
//{
//	int a;
//	char b;
//	double c;
//	int* pa = &a;
//	char* pb = &b;
//	double* pc = &c;
//
//	printf("pa의 값 : %d\n", pa);
//	printf("(pa + 1)의 값 :%d\n", pa + 1);
//	printf("pb의 값 : %d\n", pb);
//	printf("(pb + 1)의 값 :%d\n", pb + 1);
//	printf("pc의 값 : %d\n", pc);
//	printf("(pc + 1)의 값 :%d\n", pc + 1);
//
//	return 0;
//}

//// 포인터의 뺄셈
//#include <stdio.h>
//int main()
//{
//	int a;
//	int* pa = &a;
//
//	printf("pa의 값 : %d\n", pa);
//	printf("(pa - 1)의 값 : %d\n", pa - 1);
//
//	return 0;
//}

//// 포인터의 대입
//#include <stdio.h>
//int main()
//{
//	int a;
//	int* pa = &a, *pb;
//
//	*pa = 3;
//	pb = pa;
//
//	printf("pa가 가리키고 있는 것 : %d\n", *pa);
//	printf("pb가 가리키고 있는 것 : %d\n", *pb);
//
//	return 0;
//}

//// 배열의 존재 상태
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("arr[%d]의 주소값 : %x\n", i, &arr[i]);
//	}
//
//	return 0;
//}

//// 배열의 원소를 가리키는 포인터
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* parr, i;
//
//	parr = &arr[0];
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("arr[%d]의 주소값 : %x ", i, &arr[i]);
//		printf("(parr + %d)의 값 : %x ", i, (parr + i));
//
//		if (&arr[i] == (parr + i))
//		{
//			printf("--> 일치\n");
//		}
//		else
//		{
//			printf("--> 불일치\n");
//		}
//	}
//
//	printf("arr[3] = %d, *(parr + 3) = %d\n", arr[3], *(parr + 3));
//
//	return 0;
//}

//// 배열의 이름은 포인터의 상수
//#include <stdio.h>
//int main()
//{
//	int arr[3] = { 1,2,3 };
//
//	printf("arr의 정체 : %x\narr[0]의 주소값 : %x\n", arr, &arr[0]);
//
//	return 0;
//}

//// []연산자
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	printf("a[3] : %d\n*(a+3) : %d\n", arr[3], *(arr + 3));
//
//	return 0;
//}

//// 신기한 [] 사용
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	printf("3[arr] : %d\n*(3+a) : %d\n", 3[arr], *(arr + 3));
//
//	return 0;
//}