#define _CRT_SECURE_NO_WARNINGS
//// ���Ͽ� ����ϱ�
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

//// ���Ͽ��� �Է� �ޱ�
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
//	printf("�Է� ���� ���� : %s\n", buf);
//
//	fclose(fp);
//
//	return 0;
//}

//// �� ���ھ� �Է¹ޱ�
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
//	printf("�� ������ ũ��� : %d bytes\n", size);
//
//	fclose(fp);
//
//	return 0;
//}

//// ���� ��ġ ������
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
//	printf("������ ó������ �Է� �޴´ٸ� : %c\n", fgetc(fp));
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

//// ����1
//#include <stdio.h>
//int main()
//{
//
//}
//// ����2
//// ����3