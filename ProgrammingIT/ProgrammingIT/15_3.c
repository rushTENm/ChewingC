//// ���ڿ�
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

//// copy_str ��뿹��
//#include <stdio.h>
//
//char copy_str(char *src, char *dest);
//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "hi";
//
//	printf("���� ���� : %s\n", str1);
//
//	copy_str(str2, str1);
//
//	printf("���� ���� : %s\n", str1);
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

//// str_add �����
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

//// str_compare �����
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
//			printf("%s�� %s�� �ٸ���.\n", str1, str2);
//			return 0;
//		}
//
//		copy1++;
//		copy2++;
//	}
//
//	if (*copy2 == '\0')
//	{
//		printf("%s�� %s�� ����.\n", str1, str2);
//		return 1;
//	}
//
//	printf("%s�� %s�� �ٸ���.\n", str1, str2);
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
//// ����4
//// ����5