////문자를 저장하는 변수
//#include <stdio.h>
//int main()
//{
//	char a;
//	a = 'a';
//
//	printf("a의 값과 들어 있는 문자는? 값 : %d, 문자 : %c\n", a, a);
//
//	return 0;
//}

////섭씨 온도를 화씨로 바꾸기
//#include <stdio.h>
//int main()
//{
//	double celsius; //섭씨 온도
//
//	printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램입니다.\n");
//	printf("섭씨 온도를 입력해주세요 : ");
//	scanf_s("%lf", &celsius); //섭씨 온도를 입력 받는다.
//
//	printf("섭씨 %f도는 화씨로 %f도입니다.\n", celsius, 9 * celsius / 5 + 32);
//
//	return 0;
//}

////scanf 총 정리
//#include <stdio.h>
//int main()
//{
//	char ch; //문자
//
//	short sh; //정수
//	int i;
//	long lo;
//
//	float fl; //실수
//	double du;
//
//	printf("char형 변수 입력 : ");
//	scanf_s("%c", &ch);
//
//	printf("short형 변수 입력 : ");
//	scanf_s("%hd", &sh);
//	printf("int형 변수 입력 : ");
//	scanf_s("%d", &i);
//	printf("long형 변수 입력 : ");
//	scanf_s("%ld", &lo);
//
//	printf("float형 변수 입력 : ");
//	scanf_s("%f", &fl);
//	printf("double형 변수 입력 : ");
//	scanf_s("%lf", &du);
//
//	printf("char : %c, short :%d, int : %d, loing : %d, float : %f, double %f\n", ch, sh, i, lo, fl, du);
//
//	return 0;
//}