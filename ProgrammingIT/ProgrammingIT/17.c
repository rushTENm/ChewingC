//// 전역 변수
//#include <stdio.h>
//
//int global = 0;
//
//int function()
//{
//	global++;
//	
//	return 0;
//}
//int main()
//{
//	global = 10;
//	function();
//
//	printf("%d\n", global);
//
//	return 0;
//}

//// 전역 변수
//#include <stdio.h>
//
//int global;
//
//int function()
//{
//	global++;
//
//	return 0;
//}
//int main()
//{
//	function();
//
//	printf("%d\n", global);
//
//	return 0;
//}

//// 함수 호출 횟수 세기
//#include <stdio.h>
//
//int HowManyTimesThisFunctionCalled = 0;
//
//int function()
//{
//	HowManyTimesThisFunctionCalled++;
//	printf("Called : %d\n", HowManyTimesThisFunctionCalled);
//
//	return 0;
//}
//int main()
//{
//	function();
//	function();
//	function();
//	function();
//
//	return 0;
//}

//// 전역 변수의 문제점
//#include <stdio.h>
//
//int HowManyTimesThisFunctionCalled1 = 0;
//int HowManyTimesThisFunctionCalled2 = 0;
//
//int function1()
//{
//	HowManyTimesThisFunctionCalled1++;
//	printf("function 1 Called : %d\n", HowManyTimesThisFunctionCalled1);
//
//	return 0;
//}
//int function2()
//{
//	HowManyTimesThisFunctionCalled2++;
//	printf("function 2 Called : %d\n", HowManyTimesThisFunctionCalled2);
//
//	return 0;
//}
//int main()
//{
//	function1();
//	function2();
//	function1();
//	function2();
//	function2();
//	function2();
//	function1();
//	function2();
//	function1();
//
//	return 0;
//}

//// 전역 변수의 문제점
//#include <stdio.h>
//
//int function1()
//{
//	static int HowManyTimesThisFunctionCalled = 0;
//
//	HowManyTimesThisFunctionCalled++;
//	printf("function 1 Called : %d\n", HowManyTimesThisFunctionCalled);
//
//	return 0;
//}
//int function2()
//{
//	static int HowManyTimesThisFunctionCalled = 0;
//
//	HowManyTimesThisFunctionCalled++;
//	printf("function 2 Called : %d\n", HowManyTimesThisFunctionCalled);
//
//	return 0;
//}
//int main()
//{
//	function1();
//	function2();
//	function1();
//	function2();
//	function2();
//	function2();
//	function1();
//	function2();
//	function1();
//
//	return 0;
//}

//// 메모리의 배치 모습
//#include <stdio.h>
//
//int global = 3;
//
//int main()
//{
//	int i;
//	char *str = "Hello, Baby";
//	char arr[20] = "WhatTheHeck";
//
//	printf("gloval : %x\n", &global);
//	printf("i      : %x\n", &i);
//	printf("str    : %x\n", str);
//	printf("arr    : %x\n", arr);
//
//	return 0;
//}