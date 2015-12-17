//// 구조체 포인터
//#include <stdio.h>
//struct TEST
//{
//	int c;
//};
//int main()
//{
//	struct TEST t;
//	struct TEST *pt = &t;
//
//	(*pt).c = 0;
//	printf("t.c : %d\n", t.c);
//
//	pt->c = 1;
//	printf("t.c : %d\n", t.c);
//
//	return 0;
//}

//// 구조체 연산자 우선순위
//#include <stdio.h>
//struct TEST
//{
//	int c, *pointer;
//};
//int main()
//{
//	struct TEST t, *pt = &t;
//	int i = 0;
//
//	t.pointer = &i;
//
//	*t.pointer = 3;
//
//	printf("i : %d\n", i);
//
//	*pt->pointer = 4;
//
//	printf("i : %d\n", i);
//
//	return 0;
//}

//// 구조체 포인터 연습
//#include <stdio.h>
//struct TEST
//{
//	int c;
//};
//int add_one(int *a);
//int main()
//{
//	struct TEST t, *pt = &t;
//
//	pt->c = 0;
//
//	add_one(&t.c);
//
//	printf("t.c : %d\n", t.c);
//
//	add_one(&pt->c);
//
//	printf("t.c : %d\n", t.c);
//
//	return 0;
//}
//
//int add_one(int * a)
//{
//	*a += 1;
//
//	return 0;
//}

//// 구조체의 대입
//#include <stdio.h>
//struct TEST
//{
//	int i;
//	char c;
//};
//int main()
//{
//	struct TEST st, st2;
//
//	st.i = 1;
//	st.c = 'c';
//
//	st2 = st;
//
//	printf("st2.i : %d\nst2.c : %c\n", st2.i, st2.c);
//
//	return 0;
//}

//// 문자열 맴버를 가진 구조체 대입
//#include <stdio.h>
//struct TEST
//{
//	int i;
//	char str[20];
//};
//char str_copy(char *dest, char *src);
//int main()
//{
//	struct TEST a, b;
//
//	b.i = 3;
//	str_copy(b.str, "Hello World!");
//
//	a = b;
//
//	printf("a.str : %s\na.i : %d\n", a.str,a.i);
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

//// 구조체를 인자로 전달하기
//#include <stdio.h>
//struct TEST
//{
//	int age, gender;
//};
//int set_human(struct TEST *a, int age, int gender);
//int main()
//{
//	struct TEST human;
//	
//	set_human(&human, 10, 1);
//
//	printf("나이 : %d, 성별 : %d\n", human.age, human.gender);
//
//	return 0;
//}
//
//int set_human(struct TEST * a, int age, int gender)
//{
//	a->age = age;
//	a->gender = gender;
//
//	return 0;
//}

//// 문자열 맴버를 가진 구조체를 인자로 전달하기
//#include <stdio.h>
//struct TEST
//{
//	int age, gender;
//	char name[20];
//};
//char str_copy(char *dest, char *src);
//int set_human(struct TEST *a, int age, int gender, char *name);
//int main()
//{
//	struct TEST human;
//
//	set_human(&human, 10, 1,"Lee");
//
//	printf("나이 : %d, 성별 : %d, 이름 : %s\n", human.age, human.gender, human.name);
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
//	return 1;
//}
//
//int set_human(struct TEST * a, int age, int gender, char *name)
//{
//	a->age = age;
//	a->gender = gender;
//	str_copy(a->name, name);
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