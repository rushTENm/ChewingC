//// shift 연산으로 2의 멱수 나누기
//#include <stdio.h>
//int main()
//{
//	int i;
//
//	printf("정수를 입력하세요 : ");
//	scanf_s("%d", &i);
//
//	printf("%d를 32로 나누면 %d\n", i, i / 32);
//	printf("%d를 5칸 쉬프트하면 %d\n", i, i >> 5);
//
//	return 0;
//}

//// 비트연산의 활용
//#include <stdio.h>
//#define ALIVE 0x1		// 2진수로 1
//#define WALKING 0x2		// 2진수로 10
//#define RUNNING 0x4		// 2진수로 100
//#define JUMPING 0x8		// 2진수로 1000
//#define SLEEPING 0x10	// 2진수로 10000
//#define EATING	0x20	// 2진수로 100000
//
//int main()
//{
//	int my_status = ALIVE | WALKING | EATING;
//
//	if (my_status & ALIVE)
//	{
//		printf("I am ALIVE!\n");
//	}
//	if (my_status & WALKING)
//	{
//		printf("I am WALKING!\n");
//	}
//	if (my_status & RUNNING)
//	{
//		printf("I am RUNNING!\n");
//	}
//	if (my_status & JUMPING)
//	{
//		printf("I am JUMPING!\n");
//	}
//	if (my_status & SLEEPING)
//	{
//		printf("I am SLEEPING!\n");
//	}
//	if (my_status & EATING)
//	{
//		printf("I am EATING!\n");
//	}
//
//	return 0;
//}

//// 비트연산으로 홀짝 구분
//#include <stdio.h>
//int main()
//{
//	int i;
//
//	scanf_s("%d", &i);
//
//	if (i & 1)
//	{
//		printf("%d는 홀수입니다.\n", i);
//	}
//	else
//	{
//		printf("%d는 짝수입니다.\n");
//	}
//
//	return 0;
//}