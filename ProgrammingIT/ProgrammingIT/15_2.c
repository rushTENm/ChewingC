#define _CRT_SECURE_NO_WARNINGS
//// ���ۿ� �����ִ� \0 ������ %s
//#include <stdio.h>
//int main()
//{
//	char str[30];
//	int i;
//
//	scanf_s("%d", &i);
//	scanf("%s", str);
//
//	printf("str : %s\n", str);
//
//	return 0;
//}

//// ������ stdin ����
//#include <stdio.h>
//int main()
//{
//	char str1[10], str2[10];
//
//	printf("���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", str1);
//	printf("�Է��� ���ڿ� : %s\n", str1);
//
//	printf("���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", str2);
//	printf("�Է��� ���ڿ� : %s\n", str2);
//
//	return 0;
//}

//// fflush, getchar()
//#include <stdio.h>
//int main()
//{
//	int num;
//	char c;
//
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &num);
//
//	getchar(); //fflush(stdin);
//
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%c", &c);
//
//	return 0;
//}

//// getchar()�� ����
//#include <stdio.h>
//int main()
//{
//	int num;
//	char c;
//
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &num);
//
//	getchar();
//
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%c", &c);
//
//	printf("\n�Է��� ���� : %c\n", c);
//
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%c", &c);
//
//	printf("\n�Է��� ���� : %c\n", c);
//
//	return 0;
//}