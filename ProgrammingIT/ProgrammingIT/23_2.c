#define _CRT_SECURE_NO_WARNINGS
//// 파일 위치 지시자
//#include <stdio.h>
//
//int main()
//{
//	FILE *fp = fopen("a.txt", "r");
//	char c;
//
//	if (fp == NULL)
//	{
//		printf("File open error!\n");
//		return 0;
//	}
//
//	while ((c = fgetc(fp)) != EOF)
//	{
//		printf("%c", c);
//	}
//
//	return 0;
//}

//// fseek 함수 예제
//#include <stdio.h>
//int main()
//{
//	FILE *fp = fopen("a.txt", "r");
//	char data[10];
//
//	if (fp == NULL)
//	{
//		printf("File open error!\n");
//		return 0;
//	}
//
//	fgets(data, 5, fp);
//	printf("입력 받은 데이터 : %s\n", data);
//
//	printf("그 다음에 입력 받은 문자 : %c\n", fgetc(fp));
//
//	fseek(fp, -1, SEEK_CUR);
//
//	printf("fseek(fp, -1, SEEK_CUR); 이후에 받은 문자 : %c\n", fgetc(fp));
//
//	fseek(fp, -1, SEEK_END);
//	
//	printf("파일 마지막 문자 : %c\n", fgetc(fp));
//
//	fclose(fp);
//
//	return 0;
//}

//// fopen의 "r+"인자
//#include <stdio.h>
//int main()
//{
//	FILE *fp = fopen("a.txt", "r+");
//	char data[100];
//
//	fgets(data, 100, fp);
//	printf("현재 파일에 있는 내용 : %s\n", data);
//
//	fseek(fp, 5, SEEK_SET);
//
//	fputs("is nothing on this file", fp);
//
//	fclose(fp);
//
//	return 0;
//}

//// 대소문자 변환
//#include <stdio.h>
//int main()
//{
//	FILE *fp = fopen("a.txt", "r+");
//	char c;
//
//	if (fp == NULL)
//	{
//		printf("파일 열기를 실패하였습니다!\n");
//		return 0;
//	}
//
//	while ((c = fgetc(fp)) != EOF)
//	{
//		if (65 <= c && c <= 90)
//		{
//			fseek(fp, -1, SEEK_CUR);
//			fputc(c + 32, fp);
//			fseek(fp, 0, SEEK_CUR);
//		}
//		else if (97 <= c && c <= 122)
//		{
//			fseek(fp, -1, SEEK_CUR);
//			fputc(c - 32, fp);
//			fseek(fp, 0, SEEK_CUR);
//		}
//	}
//
//	fclose(fp);
//
//	return 0;
//}

//// fopen의 'append' 기능 사용
//#include <stdio.h>
//
//int main()
//{
//	FILE *fp = fopen("a.txt", "a");
//	char c;
//
//	if (fp == NULL)
//	{
//		printf("파일 열기를 실패하였습니다.\n");
//		return 0;
//	}
//
//	fputs("\"This sentence has been appended by a\"", fp);
//
//	fclose(fp);
//
//	return 0;
//}

//// fscanf 이용하기
//#include <stdio.h>
//
//int main()
//{
//	FILE *fp = fopen("a.txt", "r");
//	char data[100];
//
//	if (fp == NULL)
//	{
//		printf("File open ERROR!");
//		return 0;
//	}
//
//	printf("입력 받은 단어들\n");
//
//	while (fscanf(fp,"%s",data) != EOF)
//	{
//		printf("%s\n", data);
//	}
//
//	fclose(fp);
//
//	return 0;
//}

//// 파일에서 'this'를 'that'으로 바꾸기
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	FILE *fp = fopen("a.txt", "r+");
//	char data[100];
//
//	if (fp == NULL)
//	{
//		printf("File open ERROR!\n");
//		return 0;
//	}
//
//	while (fscanf(fp,"%s",data)!= EOF)
//	{
//		if (strcmp(data,"this") == 0)
//		{
//			fseek(fp, -(long)strlen("this"), SEEK_CUR);
//			fputs("that", fp);
//
//			fseek(fp, 0, SEEK_CUR);
//		}
//	}
//
//	fclose(fp);
//
//	return 0;
//}

//// 문제1
//#include <stdio.h>	
//int main()
//{
//
//}
//// 문제2
//// 문제3