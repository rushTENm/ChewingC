//// ��� ������
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

//// ��� ������
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

//// �������� ����
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
//	printf("pa�� �� : %d\n", pa);
//	printf("(pa + 1)�� �� :%d\n", pa + 1);
//	printf("pb�� �� : %d\n", pb);
//	printf("(pb + 1)�� �� :%d\n", pb + 1);
//	printf("pc�� �� : %d\n", pc);
//	printf("(pc + 1)�� �� :%d\n", pc + 1);
//
//	return 0;
//}

//// �������� ����
//#include <stdio.h>
//int main()
//{
//	int a;
//	int* pa = &a;
//
//	printf("pa�� �� : %d\n", pa);
//	printf("(pa - 1)�� �� : %d\n", pa - 1);
//
//	return 0;
//}

//// �������� ����
//#include <stdio.h>
//int main()
//{
//	int a;
//	int* pa = &a, *pb;
//
//	*pa = 3;
//	pb = pa;
//
//	printf("pa�� ����Ű�� �ִ� �� : %d\n", *pa);
//	printf("pb�� ����Ű�� �ִ� �� : %d\n", *pb);
//
//	return 0;
//}

//// �迭�� ���� ����
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("arr[%d]�� �ּҰ� : %x\n", i, &arr[i]);
//	}
//
//	return 0;
//}

//// �迭�� ���Ҹ� ����Ű�� ������
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
//		printf("arr[%d]�� �ּҰ� : %x ", i, &arr[i]);
//		printf("(parr + %d)�� �� : %x ", i, (parr + i));
//
//		if (&arr[i] == (parr + i))
//		{
//			printf("--> ��ġ\n");
//		}
//		else
//		{
//			printf("--> ����ġ\n");
//		}
//	}
//
//	printf("arr[3] = %d, *(parr + 3) = %d\n", arr[3], *(parr + 3));
//
//	return 0;
//}

//// �迭�� �̸��� �������� ���
//#include <stdio.h>
//int main()
//{
//	int arr[3] = { 1,2,3 };
//
//	printf("arr�� ��ü : %x\narr[0]�� �ּҰ� : %x\n", arr, &arr[0]);
//
//	return 0;
//}

//// []������
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	printf("a[3] : %d\n*(a+3) : %d\n", arr[3], *(arr + 3));
//
//	return 0;
//}

//// �ű��� [] ���
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	printf("3[arr] : %d\n*(3+a) : %d\n", 3[arr], *(arr + 3));
//
//	return 0;
//}