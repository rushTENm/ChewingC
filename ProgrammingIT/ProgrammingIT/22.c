//// typedef
//#include <stdio.h>
//
//typedef struct HUMAN
//{
//	int age, height, weight, gender;
//}HUMAN;
//
//int PrintStatus(HUMAN human);
//int main()
//{
//	HUMAN Adam = { 31,182,75,0 }, Eve = { 27,166,48,1 };
//
//	PrintStatus(Adam);
//	PrintStatus(Eve);
//
//	return 0;
//}
//
//int PrintStatus(HUMAN human)
//{
//	printf("Age : %d, Height : %d, Weight : %d, Gender : ", human.age, human.height, human.weight);
//	if (human.gender == 0)
//	{
//		printf("MALE\n");
//	}
//	else
//	{
//		printf("FEMALE\n");
//	}
//
//	if (human.gender == 0 && human.height >= 180)
//	{
//		printf("He's over 180!\n");
//	}
//	else if (human.gender == 0 && human.height < 180)
//	{
//		printf("He's below 180.\n");
//	}
//
//	return 0;
//}

//// ������ ����
//#include <stdio.h>
//typedef int CAL_TYPE;
//int main()
//{
//	CAL_TYPE input, x, y;
//
//	while (1)
//	{
//		printf("-����-\n1. ����\n2. ����\n3. ����\n");
//		scanf_s("%d", &input);
//
//		if (input == 1)
//		{
//			printf("������ 2���� ������ �Է��ϼ��� : ");
//			scanf_s("%d %d", &x, &y);
//			printf("%d�� %d�� �� : %d\n\n", x, y, x + y);
//		}
//		else if (input == 2)
//		{
//			printf("������ 2���� ������ �Է��ϼ��� : ");
//			scanf_s("%d %d", &x, &y);
//			printf("%d�� %d�� �� : %d\n\n", x, y, x - y);
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	return 0;
//}

//// �Լ� ������, �迭 typedef
//#include <stdio.h>
//
//typedef int CAL_TYPE;
//typedef int(*padd)(int, int);
//typedef int Array[10];
//
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	CAL_TYPE a = 10;
//	Array arr = { 1,2,3,4,5,6,7,8,9,10 };
//	padd ptr = add;
//
//	printf("a : %d\n", a);
//	printf("arr[3] : %d\n", arr[3]);
//	printf("add(3, 5) : %d\n", ptr(3, 5));
//
//	return 0;
//}

//// volatile
//#include <stdio.h>
//typedef struct SENSOR
//{
//	int sensor_flag, data;
//}SENSOR;
//int main()
//{
//	volatile SENSOR *sensor;
//
//	while (!(sensor->sensor_flag))
//	{
//
//	}
//	printf("Data : %d\n", sensor->data);
//
//	return 0;
//}

//// pragma pack
//#include <stdio.h>
//#include "weird.h"
//#include "weird.h"
//
//int main()
//{
//	struct Weird a;
//	a.i = 3;
//	printf("Weird ����ü�� a.i : %d\n", a.i);
//	return 0;
//}