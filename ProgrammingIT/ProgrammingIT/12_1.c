//// &������
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

//// �������� ����
//#include <stdio.h>
//int main()
//{
//	int* p;
//	int a;
//
//	p = &a;
//
//	printf("������ p�� ��� �ִ� �� : %x\n", p);
//	printf("int ���� a�� ����� �ּ� : %x\n", &a);
//
//	return 0;
//}

//// �������� �̿�
//#include <stdio.h>
//int main()
//{
//	int* p;
//	int a;
//
//	p = &a;
//	a = 2;
//
//	printf("a�� �� : %d\n", a);
//	printf("*p�� �� : %d\n", *p);
//
//	return 0;
//}

//// *������
//#include <stdio.h>
//int main()
//{
//	int* p;
//	int a;
//
//	p = &a;
//	*p = 3;
//
//	printf("a�� �� : %d\n", a);
//	printf("*p�� �� : %d\n", *p);
//
//	return 0;
//}

//// �����͵� ������
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