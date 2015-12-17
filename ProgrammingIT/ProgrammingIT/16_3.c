//// 구조체 안의 구조체
//#include <stdio.h>
//struct employee
//{
//	int age, salary;
//};
//struct company
//{
//	struct employee data;
//	char name[10];
//};
//int main()
//{
//	struct company Kim;
//
//	Kim.data.age = 31;
//	Kim.data.salary = 3000000;
//
//	printf("Kim's age : %d\nKim's salary : %d$/year\n", Kim.data.age, Kim.data.salary);
//
//	return 0;
//}

//// 구조체를 반환하는 함수
//#include <stdio.h>
//struct AA
//{
//	int i;
//};
//struct AA function(int j);
//int main()
//{
//	struct AA a;
//
//	a = function(10);
//
//	printf("a.i : %d\n", a.i);
//
//	return 0;
//}
//
//struct AA function(int j)
//{
//	struct AA A;
//	
//	A.i = j;
//
//	return A;
//}

//// 구조체 변수의 정의 방법
//#include <stdio.h>	
//
//struct obj
//{
//	char name[20];
//	int x, y;
//} Ball;
//
//char str_copy(char *dest, char *src);
//int PrintObjStatus(struct obj OBJ);
//int main()
//{
//	Ball.x = 3;
//	Ball.y = 4;
//	str_copy(Ball.name, "RED BALL");
//
//	PrintObjStatus(Ball);
//
//	return 0;
//	{
//
//	};
//}
//
//char str_copy(char * dest, char * src)
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
//	return 0;
//}
//
//int PrintObjStatus(struct obj OBJ)
//{
//	printf("Location of %s : ", OBJ.name);
//	printf("(%d, %d)\n", OBJ.x, OBJ.y);
//
//	return 0;
//}

//// 구조체 쉽게 초기화하기
//#include <stdio.h>
//
//struct HUMAN
//{
//	int age, height, weight, gender;
//}Eve = { 27,166,48,1 };
//struct obj
//{
//	char name[20];
//	int x, y;
//} Ball = { "abc",10,2 };
//
//int PrintStatus(struct HUMAN human);
//int main()
//{
//	struct HUMAN Adam = { 31,182,75,0 };
//
//	PrintStatus(Adam);
//	PrintStatus(Eve);
//
//	return 0;
//}
//
//int PrintStatus(struct HUMAN human)
//{
//	if (human.gender == 0)
//	{
//		printf("MALE\n");
//	}
//	else
//	{
//		printf("FEMALE\n");
//	}
//
//	printf("Age : %d, Height : %d, Weight : %d\n", human.age, human.height, human.weight);
//
//	return 0;
//}

//// 공용체
//#include <stdio.h>
//union A
//{
//	int i;
//	char j;
//	short k;
//};
//int main()
//{
//	union A a;
//	
//	a.i = 0x12345678;
//
//	printf("%x, %x\n", a.j, a.k);
//
//	return 0;
//}

//// 열거형의 도입
//#include <stdio.h>
//enum { RED, BLUE, WHITE, BLACK };
//int main()
//{
//	int palette = RED;
//
//	switch (palette)
//	{
//	case RED:
//		printf("palette : RED\n");
//		break;
//	case BLUE:
//		printf("palette : BLUE\n");
//		break;
//	case WHITE:
//		printf("palette : WHITE\n");
//		break;
//	case BLACK:
//		printf("palette : BLACK\n");
//		break;
//	default:
//		break;
//	}
//}