////산술 연산
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	a = 10;
//	b = 3;
//
//	printf("a + b는 : %d\n", a + b);
//	printf("a - b는 : %d\n", a - b);
//	printf("a * b는 : %d\n", a * b);
//	printf("a / b는 : %d\n", a / b);
//	printf("a %% b는 : %d\n", a % b);
//
//	printf("a / b는 : %f\n", (float)a / b); //변수형을 지키자
//	return 0;
//}

////산술 변환
//#include <stdio.h>
//int main()
//{
//	int a;
//	double b;
//
//	a = 10;
//	b = 3;
//
//	printf("a / b는 : %f\n", a / b);
//	printf("b / a는 : %f\n", b / a);
//
//	return 0;
//}

////대입 연산자
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	a = a + 3;
//
//	printf("a의 값은 : %d\n", a);
//
//	return 0;
//}

////더하기 1을 하는 방법
//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 1, c = 1, d = 1;
//
//	a = a + 1;
//	printf("a : %d\n", a);
//	b += 1;
//	printf("b : %d\n", b);
//	++c;
//	printf("c : %d\n", c);
//	d++;
//	printf("d : %d\n", d);
//
//	return 0;
//}

////prefix, postfix
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//
//	printf("++a : %d\n", ++a);
//
//	a = 1;
//
//	printf("a++ : %d\n", a++);
//	printf("a : %d\n", a);
//
//	return 0;
//}

////비트연산
//#include <stdio.h>
//int main()
//{
//	int a = 0xAF; //10101111
//	int b = 0xB5; //10110101
//
//	printf("%x\n", a & b); //a & b = 10100101
//	printf("%x\n", a | b); //a | b = 10111111
//	printf("%x\n", a ^ b); //a ^ b = 00011010
//	printf("%x\n", ~a); //~a = 1...1  01010000
//	printf("%x\n", a << 2); //a << 2 = 1010111100
//	printf("%x\n", b >> 3); //b >> 3= 00010110
//
//	return 0;
//}