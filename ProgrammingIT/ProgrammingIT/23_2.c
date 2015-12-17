#define _CRT_SECURE_NO_WARNINGS
//// ���� ��ġ ������
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

//// fseek �Լ� ����
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
//	printf("�Է� ���� ������ : %s\n", data);
//
//	printf("�� ������ �Է� ���� ���� : %c\n", fgetc(fp));
//
//	fseek(fp, -1, SEEK_CUR);
//
//	printf("fseek(fp, -1, SEEK_CUR); ���Ŀ� ���� ���� : %c\n", fgetc(fp));
//
//	fseek(fp, -1, SEEK_END);
//	
//	printf("���� ������ ���� : %c\n", fgetc(fp));
//
//	fclose(fp);
//
//	return 0;
//}

//// fopen�� "r+"����
//#include <stdio.h>
//int main()
//{
//	FILE *fp = fopen("a.txt", "r+");
//	char data[100];
//
//	fgets(data, 100, fp);
//	printf("���� ���Ͽ� �ִ� ���� : %s\n", data);
//
//	fseek(fp, 5, SEEK_SET);
//
//	fputs("is nothing on this file", fp);
//
//	fclose(fp);
//
//	return 0;
//}

//// ��ҹ��� ��ȯ
//#include <stdio.h>
//int main()
//{
//	FILE *fp = fopen("a.txt", "r+");
//	char c;
//
//	if (fp == NULL)
//	{
//		printf("���� ���⸦ �����Ͽ����ϴ�!\n");
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

//// fopen�� 'append' ��� ���
//#include <stdio.h>
//
//int main()
//{
//	FILE *fp = fopen("a.txt", "a");
//	char c;
//
//	if (fp == NULL)
//	{
//		printf("���� ���⸦ �����Ͽ����ϴ�.\n");
//		return 0;
//	}
//
//	fputs("\"This sentence has been appended by a\"", fp);
//
//	fclose(fp);
//
//	return 0;
//}

//// fscanf �̿��ϱ�
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
//	printf("�Է� ���� �ܾ��\n");
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

//// ���Ͽ��� 'this'�� 'that'���� �ٲٱ�
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

//// ����1
//#include <stdio.h>	
//int main()
//{
//
//}
//// ����2
//// ����3