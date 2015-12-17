//// void
//#include <stdio.h>
//
//void main()
//{
//	printf("Hello, World!\n");
//}

//// void 형을 가리키는 포인터
//#include <stdio.h>
//int main()
//{
//	void* a;
//	double b = 123.4;
//
//	a = &b;
//
//	printf("%lf\n", *(double *)a);
//
//	return 0;
//}

//// 임의의 주소값 p로부터 byte만큼 읽는 함수
//#include <stdio.h>
//
//int read_char(void *p, int byte);
//int main()
//{
//	int arr[1] = { 0x12345678 };
//
//	printf("%x\n", arr[0]);
//
//	read_char(arr, 4);
//
//	return 0;
//}
//
//int read_char(void * p, int byte)
//{
//	do
//	{
//		printf("%x\n", *(char *)p);
//		byte--;
//
//	} while (((char *)p)++ && byte);
//	
//	return 0;
//}

//// main 함수의 인자
//#include <stdio.h>
//int main(int argc, char **argv)
//{
//	printf("받은 인자의 개수 : %d\n", argc);
//	printf("이 프로그램의 경로 : %s\n", argv[0]);
//
//	return 0;
//}

//// main 함수의 인자
//#include <stdio.h>
//int main(int argc, char **argv)
//{
//	int i;
//
//	printf("받은 인자의 개수 : %d\n", argc);
//
//	for ( i = 0; i < argc; i++)
//	{
//		printf("이 프로그램이 받은 인자 : %s\n", argv[i]);
//	}
//
//	return 0;
//}