#define _CRT_SECURE_NO_WARNINGS
//// 헤더파일
//#include <stdio.h>
//#include "human.h"
//
//int main()
//{
//	struct Human Lee = CreateHuman("Lee", 40, MALE);
//
//	PrintHuman(&Lee);
//
//	return 0;
//}

//// 직접 만든 문자열 복사함수
//#include <stdio.h>
//#include "str.h"
//
//int main()
//{
//	char str1[20] = { "hi" }, str2[20] = "hello everyone";
//
//	str_copy(str1, str2);
//
//	printf("str1 : %s\n", str1);
//	
//	return 0;
//}

//// 라이브러리의 사용
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[20] = { "hi" }, str2[20] = { "hello everyone" };
//
//	strcpy(str1, str2);
//
//	printf("str1 : %s\n", str1);
//
//	return 0;
//}

//// strcmp 함수
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[20] = { "hi" }, str2[20] = { "hello everyone" }, str3[20] = { "hi" };
//
//	if (!strcmp(str1,str2))
//	{
//		printf("%s and %s is equal\n", str1, str2);
//	}
//	else
//	{
//		printf("%s and %s is NOT equal\n", str1, str2);
//	}
//
//	if (!strcmp(str1, str3))
//	{
//		printf("%s and %s is equal\n", str1, str3);
//	}
//	else
//	{
//		printf("%s and %s is NOT equal\n", str1, str3);
//	}
//
//	return 0;
//}

//// define
//#include <stdio.h>
//#define VAR 10
//int main()
//{
//	char arr[VAR] = { "hi" };
//	
//	printf("%s\n", arr);
//
//	return 0;
//}

//// ifdef, endif
//#include <stdio.h>
//#define A
//#define B
//int main()
//{
//#ifdef A
//	printf("A\n");
//#endif // A
//#ifdef B
//	printf("B\n");
//#endif // B
//	return 0;
//}