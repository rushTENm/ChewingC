//// shift �������� 2�� ��� ������
//#include <stdio.h>
//int main()
//{
//	int i;
//
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d", &i);
//
//	printf("%d�� 32�� ������ %d\n", i, i / 32);
//	printf("%d�� 5ĭ ����Ʈ�ϸ� %d\n", i, i >> 5);
//
//	return 0;
//}

//// ��Ʈ������ Ȱ��
//#include <stdio.h>
//#define ALIVE 0x1		// 2������ 1
//#define WALKING 0x2		// 2������ 10
//#define RUNNING 0x4		// 2������ 100
//#define JUMPING 0x8		// 2������ 1000
//#define SLEEPING 0x10	// 2������ 10000
//#define EATING	0x20	// 2������ 100000
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

//// ��Ʈ�������� Ȧ¦ ����
//#include <stdio.h>
//int main()
//{
//	int i;
//
//	scanf_s("%d", &i);
//
//	if (i & 1)
//	{
//		printf("%d�� Ȧ���Դϴ�.\n", i);
//	}
//	else
//	{
//		printf("%d�� ¦���Դϴ�.\n");
//	}
//
//	return 0;
//}