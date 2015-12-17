#define _CRT_SECURE_NO_WARNINGS
//// 버퍼에 남아있는 \0 다음에 %s
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

//// 마지막 stdin 예제
//#include <stdio.h>
//int main()
//{
//	char str1[10], str2[10];
//
//	printf("문자열을 입력하세요 : ");
//	scanf("%s", str1);
//	printf("입력한 문자열 : %s\n", str1);
//
//	printf("문자열을 입력하세요 : ");
//	scanf("%s", str2);
//	printf("입력한 문자열 : %s\n", str2);
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
//	printf("숫자를 입력하세요 : ");
//	scanf("%d", &num);
//
//	getchar(); //fflush(stdin);
//
//	printf("문자를 입력하세요 : ");
//	scanf("%c", &c);
//
//	return 0;
//}

//// getchar()의 문제
//#include <stdio.h>
//int main()
//{
//	int num;
//	char c;
//
//	printf("숫자를 입력하세요 : ");
//	scanf("%d", &num);
//
//	getchar();
//
//	printf("문자를 입력하세요 : ");
//	scanf("%c", &c);
//
//	printf("\n입력한 문자 : %c\n", c);
//
//	printf("문자를 입력하세요 : ");
//	scanf("%c", &c);
//
//	printf("\n입력한 문자 : %c\n", c);
//
//	return 0;
//}