//// 문자열
//#include <stdio.h>
//int main()
//{
//	char str[] = "sentence";
//	char *pstr = "sentence";
//
//	printf("str : %s\n", str);
//	printf("pstr : %s\n", pstr);
//	printf("%d\n", "sentence");
//
//	return 0;
//}

//// copy_str 사용예제
//#include <stdio.h>
//
//char copy_str(char *src, char *dest);
//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "hi";
//
//	printf("복사 이전 : %s\n", str1);
//
//	copy_str(str2, str1);
//
//	printf("복사 이후 : %s\n", str1);
//
//	return 0;
//}
//
//char copy_str(char * src, char * dest)
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

//// str_add 만들기
//#include <stdio.h>
//
//int str_add(char *src, char *dest);
//int main()
//{
//	char str1[20] = "Hello, my name is ";
//	char str2[] = "Psi";
//
//	str_add(str2, str1);
//
//	printf("%s\n", str1);
//
//	return 0;
//}
//
//int str_add(char * src, char * dest)
//{
//	while (*dest)
//	{
//		dest++;
//	}
//
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

//// str_compare 만들기
//#include <stdio.h>
//
//int str_compare(char *str1, char *str2);
//int main()
//{
//	char str1[20] = "Hello, every1";
//	char str2[20] = "Hello, everyone";
//	char str3[20] = "Hello, every1 hi";
//	char str4[20] = "Hello, every1";
//
//	str_compare(str1, str2);
//	str_compare(str1, str3);
//	str_compare(str1, str4);
//
//	return 0;
//}
//
//int str_compare(char * str1, char * str2)
//{
//	char *copy1 = str1, *copy2 = str2;
//
//	while (*copy1)
//	{
//		if (*copy1 != *copy2)
//		{
//			printf("%s와 %s는 다르다.\n", str1, str2);
//			return 0;
//		}
//
//		copy1++;
//		copy2++;
//	}
//
//	if (*copy2 == '\0')
//	{
//		printf("%s와 %s는 같다.\n", str1, str2);
//		return 1;
//	}
//
//	printf("%s와 %s는 다르다.\n", str1, str2);
//	return 0;
//}

//// 문제1
//#include <stdio.h>
//int main()
//{
//
//}
//// 문제2
//// 문제3
//// 문제4
//// 문제5