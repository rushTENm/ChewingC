//// �Լ�
//#include <stdio.h>
//int print_hello()
//{
//	printf("Hello!\n");
//	return 0;
//}
//
//int main()
//{
//	printf("�Լ��� �ҷ����� : ");
//	print_hello();
//
//	printf("�� �θ��� : ");
//	print_hello();
//
//	return 0;
//}

//// �Լ��� ����
//#include <stdio.h>
//int return_func()
//{
//	printf("����ȴ�.\n");
//	return 0;
//	printf("������� �ʴ´�.\n");
//}
//
//int main()
//{
//	return_func();
//
//	return 0;
//}

//// ��ȯ��
//#include <stdio.h>
//int ret()
//{
//	return 1000;
//}
//
//int main()
//{
//	printf("ret() �Լ��� ��ȯ�� : %d\n", ret());
//
//	return 0;
//}

//// �Լ��� ����
//#include <stdio.h>
//int magicbox(int x)
//{
//	return x + 4;
//}
//
//int main()
//{
//	int x = 36;
//
//	printf("%d\n", magicbox(x));
//
//	return 0;
//}

//// ����1
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int x, y;
//
//	scanf_s("%d %d", &x, &y);
//
//	printf("%d\n", add(x, y));
//
//	return 0;
//}

//// ����2
//#include <stdio.h>
//int sum(int n)
//{
//	return (1 + n)*n / 2;
//}
//
//int main()
//{
//	int n;
//
//	scanf_s("%d", &n);
//
//	printf("%d\n", sum(n));
//
//	return 0;
//}

//// ����3
//#include <stdio.h>
//#include <math.h>
//int getPrime(int input);
//int main()
//{
//	int input;
//
//	scanf_s("%d", &input);
//	if (input < 3)
//	{
//		input = 3;
//	}
//
//	getPrime(input);
//
//	return 0;
//}
//
//int getPrime(int input)
//{
//	int arr[1000] = { 2,3 }, i, j, count = 2;
//
//	printf("   1��° �Ҽ� : %4d\n   2��° �Ҽ� : %4d\n", arr[0], arr[1]);
//
//	for (j = 5; j <= input; j += 2)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			if (sqrt((double)j) < arr[i])
//			{
//				arr[count] = j;
//				count++;
//				printf("%4d��° �Ҽ� : %4d\n", count, j);
//				break;
//			}
//			else if (j % arr[i] == 0)
//			{
//				break;
//			}
//		}
//	}
//
//	printf("%d���� �Ҽ��� %d��\n", input, count);
//
//	return 0;
//}

//// ����4
//#include <stdio.h>
//int factorize(int input);
//int main()
//{
//	int input;
//
//	scanf_s("%d", &input);
//
//	factorize(input);
//	
//	return 0;
//}
//
//int factorize(int input)
//{
//	int i;
//
//	printf("%d =", input);
//
//	if (input == 1)
//	{
//		printf(" %d", input);
//	}
//	else
//	{
//		for (i = 2; i <= input; i++)
//		{
//			while (input % i == 0)
//			{
//				input /= i;
//				if (input == 1)
//				{
//					printf(" %d", i);
//				}
//				else
//				{
//					printf(" %d *", i);
//				}
//			}
//		}
//	}
//
//	printf("\n");
//
//	return 0;
//}