#define _CRT_SECURE_NO_WARNINGS
//// 파일에 출력하기
//#include <stdio.h>
//
//int main()
//{
//	FILE *fp;
//	fp = fopen("a.txt", "w");
//
//	if (fp == NULL)
//	{
//		printf("Write Error!\n");
//		return 0;
//	}
//
//	fputs("Hello World!\n", fp);
//
//	fclose(fp);
//
//	return 0;\
//}

//// 파일에서 입력 받기
//#include <stdio.h>
//
//int main()
//{
//	FILE *fp = fopen("a.txt", "r");
//	char buf[20];
//
//	if (fp == NULL)
//	{
//		printf("READ ERROR!\n");
//		return 0;
//	}
//
//	fgets(buf, 20, fp);
//
//	printf("입력 받은 내용 : %s\n", buf);
//
//	fclose(fp);
//
//	return 0;
//}

//// 한 글자씩 입력받기
//#include <stdio.h>
//
//int main()
//{
//	FILE *fp = fopen("a.txt", "r");
//	char c;
//	int size = 0;
//
//	while ((c = fgetc(fp)) != EOF)
//	{
//		printf("%c", c);
//		size++;
//	}
//
//	printf("이 파일의 크기는 : %d bytes\n", size);
//
//	fclose(fp);
//
//	return 0;
//}

//// 파일 위치 지정자
//#include <stdio.h>
//int main()
//{
//	FILE *fp = fopen("a.txt", "r");
//
//	printf("%d\n", fgetc(fp));
//	printf("%d\n", fgetc(fp));
//	printf("%d\n", fgetc(fp));
//	printf("%d\n", fgetc(fp));
//
//	fseek(fp, 0, SEEK_SET);
//	printf("파일의 처음에서 입력 받는다면 : %c\n", fgetc(fp));
//
//	fclose(fp);
//
//	fp = fopen("a.txt", "w");
//
//	fputs("Psi is an excellent C programmer", fp);
//	fseek(fp, 0, SEEK_SET);
//	fputs("Is Psi", fp);
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