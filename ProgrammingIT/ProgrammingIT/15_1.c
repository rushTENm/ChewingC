#define _CRT_SECURE_NO_WARNINGS
//// Null
//#include <stdio.h>
//int main()
//{
//	char null_1 = '\0', null_2 = 0, null_3 = NULL;
//	char notNULL = '0';
//
//	printf("NULL의 아스키값 : %d, %d, %d\n", null_1, null_2, null_3);
//	printf("'0'의 아스키값 : %d\n", notNULL);
//
//	return 0;
//}

//// 문자열의 시작
//#include <stdio.h>
//int main()
//{
//	char sentence_1[4] = { 'P','s','i','\0' };
//	char sentence_2[4] = { 'P','s','i',0 };
//	char sentence_3[4] = { 'P','s','i',NULL };
//	char sentence_4[4] = { "Psi" };
//
//	printf("sentence_1 : %s\n", sentence_1);
//	printf("sentence_2 : %s\n", sentence_2);
//	printf("sentence_3 : %s\n", sentence_3);
//	printf("sentence_4 : %s\n", sentence_4);
//
//	return 0;
//}

//// 포인터 간단 복습
//#include <stdio.h>
//int main()
//{
//	char word[30] = { "long sentence" };
//	char *str = word;
//
//	printf("%s\n", str);
//
//	return 0;
//}

//// 문자열 바꾸기
//#include <stdio.h>
//int main()
//{
//	char word[] = { "long sentence" };
//
//	printf("조작 이전 : %s\n", word);
//
//	word[0] = 'a';
//	word[1] = 'b';
//	word[2] = 'c';
//	word[3] = 'd';
//
//	printf("조작 이후 : %s\n", word);
//
//	return 0;
//}

//// 문자열 길이
//#include <stdio.h>
//
//int str_length(char *str);
//int main()
//{
//	char str[] = { "What is your name?" };
//
//	printf("문자열의 길이 : %d\n", str_length(str));
//
//	return 0;
//}
//
//int str_length(char * str)
//{
//	int counter = 0;
//
//	while (str[counter])
//	{
//		counter++;
//	}
//
//	return counter;
//}

//// 문자열 입력
//#include <stdio.h>
//int main()
//{
//	char words[30];
//
//	printf("30자 이내의 문자열을 입력해주세요 : ");
//	scanf("%s", words);
//
//	printf("문자열 : %s\n", words);
//
//	return 0;
//}