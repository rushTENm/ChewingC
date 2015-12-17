//// &연산자
//#include <stdio.h>
//int main()
//{
//	int a;
//	a = 2;
//
//	printf("%x\n", &a);
//
//	return 0;
//}

//// 포인터의 시작
//#include <stdio.h>
//int main()
//{
//	int* p;
//	int a;
//
//	p = &a;
//
//	printf("포인터 p에 들어 있는 값 : %x\n", p);
//	printf("int 변수 a가 저장된 주소 : %x\n", &a);
//
//	return 0;
//}

//// 연산자의 이용
//#include <stdio.h>
//int main()
//{
//	int* p;
//	int a;
//
//	p = &a;
//	a = 2;
//
//	printf("a의 값 : %d\n", a);
//	printf("*p의 값 : %d\n", *p);
//
//	return 0;
//}

//// *연산자
//#include <stdio.h>
//int main()
//{
//	int* p;
//	int a;
//
//	p = &a;
//	*p = 3;
//
//	printf("a의 값 : %d\n", a);
//	printf("*p의 값 : %d\n", *p);
//
//	return 0;
//}

//// 포인터도 변수다
//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int* p;
//
//	p = &a;
//	*p = 2;
//	p = &b;
//	*p = 4;
//	
//	printf("a : %d\nb : %d\n",a, b);
//
//	return 0;
//}