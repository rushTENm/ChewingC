//// ������ �Ű� ����
//#include <stdio.h>
//int val_3(int *pi)
//{
//	printf("val_3 �Լ� ����\npi�� �� : %d\npi�� ����Ű�� ���� �� : %d\n", pi, *pi);
//
//	*pi = 3;
//
//	printf("val_3 �Լ� ��\n");
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	printf("���� i�� �ּҰ� : %d\n�Լ� ȣ�� ���� i�� �� : %d\n", &i,i);
//	
//	val_3(&i);
//
//	printf("�Լ� ȣ�� ���� i�� �� : %d\n", i);
//
//	return 0;
//}

//// swap �Լ�
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
//	printf("SWAP ���� i : %d, j : %d\n", i, j);
//
//	swap(&i, &j);
//
//	printf("SWAP ���� i : %d, j : %d\n", i, j);
//
//	return 0;
//}

//// �Լ��� ����
//#include <stdio.h>
//int swap(int *a, int *b);
//
//int main()
//{
//	int i = 3, j = 5;
//
//	printf("SWAP ���� i : %d, j : %d\n", i, j);
//
//	swap(&i, &j);
//
//	printf("SWAP ���� i : %d, j : %d\n", i, j);
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

//// �迭�� ���ڷ� �ޱ�
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
//	printf("�迭�� �� ���� : %d, %d, %d\n", arr[0], arr[1], arr[2]);
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

//// �Է� ���� �迭�� 10�� ���� �� �ִ밪�� ���
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
//	printf("���� ū �� : %d\n", max_number(arr));
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

//// �Լ� �̸�����
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
//		printf("%c�� �����Դϴ�.\n", input);
//	}
//	else
//	{
//		printf("%c�� ���ڰ� �ƴմϴ�.\n", input);
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

//// ����1
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

//// ����2
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