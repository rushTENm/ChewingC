#define _CRT_SECURE_NO_WARNINGS
//// ����ü�� ����
//#include <stdio.h>
//
//struct Human
//{
//	int age, height, weight;
//};
//int main()
//{
//	struct Human Psi;
//
//	Psi.age = 99;
//	Psi.height = 185;
//	Psi.weight = 80;
//
//	printf("Psi�� ���� ����\n");
//	printf("����   : %d\n", Psi.age);
//	printf("Ű     : %d\n", Psi.height);
//	printf("������ : %d\n", Psi.weight);
//
//	return 0;
//}

//// ����ü ����
//#include <stdio.h>
//
//struct Book
//{
//	char title[20], author[20], publisher[20];
//	int isBorrowed;
//};
//char str_copy(char *dest, char *src);
//int main()
//{
//	struct Book HarryPotter;
//
//	str_copy(HarryPotter.title, "Harry Potter");
//	str_copy(HarryPotter.author, "J.K. Rolling");
//	str_copy(HarryPotter.publisher, "Scholastic");
//	HarryPotter.isBorrowed = 0;
//
//	printf("����   : %s\n", HarryPotter.title);
//	printf("����   : %s\n", HarryPotter.author);
//	printf("���ǻ� : %s\n", HarryPotter.publisher);
//
//	return 0;
//}
//
//char str_copy(char * dest, char * src)
//{
//	while (*src)
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//
//	*dest = '\0';
//
//	return 0;
//}

//// ����ü ����
//#include <stdio.h>
//
//struct Book
//{
//	char title[20], author[20], publisher[20];
//	int isBorrowed;
//};
//int main()
//{
//	struct Book Books[3];
//	int i;
//
//	for ( i = 0; i < 3; i++)
//	{
//		printf("%d��° å ���� �Է� : ",i + 1);
//		scanf("%s %s %s", Books[i].title, Books[i].author, Books[i].publisher);
//		Books[i].isBorrowed = 0;
//	}
//
//	for ( i = 0; i < 3; i++)
//	{
//		printf("\n%s�� ����\n���� : %s\n���ǻ� : %s\n", Books[i].title, Books[i].author, Books[i].publisher);
//
//		if (Books[i].isBorrowed == 0)
//		{
//			printf("���� ����\n");
//		}
//		else
//		{
//			printf("���� ��\n");
//		}
//	}
//
//	return 0;
//}

//// ����ü ������
//#include <stdio.h>
//
//struct test
//{
//	int a, b;
//};
//int main()
//{
//	struct test st;
//	struct test *pst;
//
//	pst = &st;
//
//	(*pst).a = 1;
//	(*pst).b = 2;
//
//	printf("st�� �ɹ� a : %d\nst�� �ɹ� b : %d\n", st.a, st.b);
//
//	return 0;
//}

//// -> ������
//#include <stdio.h>
//
//struct test
//{
//	int a, b;
//};
//int main()
//{
//	struct test st;
//	struct test *pst;
//
//	pst = &st;
//
//	pst->a = 1;
//	pst->b = 2;
//
//	printf("st�� �ɹ� a : %d\nst�� �ɹ� b : %d\n", st.a, st.b);
//
//	return 0;
//}