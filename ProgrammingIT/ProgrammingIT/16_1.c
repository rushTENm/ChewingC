#define _CRT_SECURE_NO_WARNINGS
//// 구조체의 도입
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
//	printf("Psi에 대한 정보\n");
//	printf("나이   : %d\n", Psi.age);
//	printf("키     : %d\n", Psi.height);
//	printf("몸무게 : %d\n", Psi.weight);
//
//	return 0;
//}

//// 구조체 예제
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
//	printf("제목   : %s\n", HarryPotter.title);
//	printf("저자   : %s\n", HarryPotter.author);
//	printf("출판사 : %s\n", HarryPotter.publisher);
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

//// 구조체 예제
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
//		printf("%d번째 책 정보 입력 : ",i + 1);
//		scanf("%s %s %s", Books[i].title, Books[i].author, Books[i].publisher);
//		Books[i].isBorrowed = 0;
//	}
//
//	for ( i = 0; i < 3; i++)
//	{
//		printf("\n%s의 정보\n저자 : %s\n출판사 : %s\n", Books[i].title, Books[i].author, Books[i].publisher);
//
//		if (Books[i].isBorrowed == 0)
//		{
//			printf("열람 가능\n");
//		}
//		else
//		{
//			printf("대출 중\n");
//		}
//	}
//
//	return 0;
//}

//// 구조체 포인터
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
//	printf("st의 맴버 a : %d\nst의 맴버 b : %d\n", st.a, st.b);
//
//	return 0;
//}

//// -> 연산자
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
//	printf("st의 맴버 a : %d\nst의 맴버 b : %d\n", st.a, st.b);
//
//	return 0;
//}