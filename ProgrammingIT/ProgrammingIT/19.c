//// void
//#include <stdio.h>
//
//void main()
//{
//	printf("Hello, World!\n");
//}

//// void ���� ����Ű�� ������
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

//// ������ �ּҰ� p�κ��� byte��ŭ �д� �Լ�
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

//// main �Լ��� ����
//#include <stdio.h>
//int main(int argc, char **argv)
//{
//	printf("���� ������ ���� : %d\n", argc);
//	printf("�� ���α׷��� ��� : %s\n", argv[0]);
//
//	return 0;
//}

//// main �Լ��� ����
//#include <stdio.h>
//int main(int argc, char **argv)
//{
//	int i;
//
//	printf("���� ������ ���� : %d\n", argc);
//
//	for ( i = 0; i < argc; i++)
//	{
//		printf("�� ���α׷��� ���� ���� : %s\n", argv[i]);
//	}
//
//	return 0;
//}