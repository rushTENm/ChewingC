//// ��ũ�� �Լ�
//#include <stdio.h>
//#define square(x) (x)*(x)
//
//int main(int argc, char **argv)
//{
//	printf("square(3) : %d\n", square(3));
//	printf("square(3+1) : %d\n", square(3+1));
//
//	return 0;
//}

//// ȣ�������� ���ʺй����� �ٲٱ�
//#include <stdio.h>
//#define RADTODEG(x) ((x)*57.2957795130823)
//
//int main(int argc, char **argv)
//{
//	printf("5 rad�� %2.13f��\n", RADTODEG(5));
//
//	return 0;
//}

//// ������ �̸� ����ϱ�
//#include <stdio.h>
//#define PrintVariableName(var) printf(#var"\n");
//
//int main(int argc, char**argv)
//{
//	int a;
//
//	PrintVariableName(a);
//
//	return 0;
//}

//// ##�� ���
//#include <stdio.h>
//#define AddName(x,y) x##y
//
//int main(int argc, char **argv)
//{
//	int AddName(a, b);
//
//	ab = 3;
//
//	printf("%d\n", ab);
//
//	return 0;
//}

//// �ζ��� �Լ�
//#include <stdio.h>
//_inline int square(int a)
//{
//	return a*a;
//}
//_inline int max(int a, int b)
//{
//	if (a>b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//_inline int someFunction(int a)
//{
//	if (a == 0)
//	{
//		return 1;
//	}
//	else if (a == 1)
//	{
//		return 3;
//	}
//	else
//	{
//		return a * 2;
//	}
//}
//
//int main(int argc, char**argv)
//{
//	int a = 4;
//
//	printf("%d\n", square(3));
//	
//	printf("3�� 2 �߿��� �ִ밪 : %d\n", max(3, 2));
//	printf("%d\n", 3 > 2 ? 3 : 2);
//
//	printf("%d %d\n", someFunction(a), a ? (a > 1 ? a * 2 : 3) : 1);
//	return 0;
//}