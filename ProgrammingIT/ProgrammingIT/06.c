////if문이란?
//#include <stdio.h>
//int main()
//{
//	int i;
//
//	printf("입력하고 싶은 숫자를 입력하세요 : ");
//	scanf_s("%d", &i);
//
//	if (i == 7)
//	{
//		printf("당신은 행운의 숫자 7을 입력했습니다.\n");
//	}
//
//	return 0;
//}

////나눗셈 예제
//#include <stdio.h>
//int main()
//{
//	double i, j;
//
//	printf("나누고 싶은 두 정수를 입력하세요 : ");
//	scanf_s("%lf %lf", &i, &j);
//
//	if (j == 0)
//	{
//		printf("0으로 나눌 수 없습니다.\n");
//		
//		return 0;
//	}
//	else
//	{
//		printf("%f를 %f로 나눈 결과는 : %f\n", i, j, i / j);
//	}
//
//	return 0;
//}

////합격? 불합격?
//#include <stdio.h>
//int main()
//{
//	int score;
//
//	printf("당신의 수학점수를 입력하세요 : ");
//	scanf_s("%d", &score);
//
//	if (score >= 90)
//	{
//		printf("당신은 합격입니다!\n");
//	}
//	else
//	{
//		printf("당신은 불합격입니다.\n");
//	}
//
//	return 0;
//}

////크기 비교하기
//#include <stdio.h>
//int main()
//{
//	int i, j;
//
//	printf("크기를 비교할 두 수를 입력해주세요 : ");
//	scanf_s("%d %d", &i, &j);
//
//	if (i > j)
//	{
//		printf("%d는 %d보다 큽니다.\n", i, j);
//	}
//	if (i < j)
//	{
//		printf("%d는 %d보다 작습니다.\n", i, j);
//	}
//	if (i >= j)
//	{
//		printf("%d는 %d보다 크거나 같습니다.\n", i, j);
//	}
//	if (i <= j)
//	{
//		printf("%d는 %d보다 작거나 같습니다.\n", i, j);
//	}
//	if (i == j)
//	{
//		printf("%d는 %d와(과) 같습니다.\n", i, j);
//	}
//	if (i != j)
//	{
//		printf("%d는 %d와(과) 다릅니다\n", i, j);
//	}
//
//	return 0;
//}

////if-else문 시작하기
//#include <stdio.h>
//int main()
//{
//	int num;
//
//	printf("아무 숫자나 입력해보세요 : ");
//	scanf_s("%d", &num);
//
//	if (num == 7)
//	{
//		printf("행운의 숫자 7이군요!\n");
//	}
//	else
//	{
//		printf("그냥 보통 숫자인 %d를 입력했군요.\n", num);
//	}
//
//	return 0;
//}

////if-else 죽음의 숫자?
//#include <stdio.h>
//int main()
//{
//	int num;
//
//	printf("아무 숫자나 입력해보세요 : ");
//	scanf_s("%d", &num);
//
//	if (num == 7)
//	{
//		printf("행운의 숫자 7이군요!\n");
//	}
//	else if (num == 4)
//	{
//		printf("죽음의 숫자 4인가요 ㄷㄷ\n");
//	}
//	else
//	{
//		printf("그냥 보통 숫자인 %d를 입력했군요.\n", num);
//	}
//
//	return 0;
//}

////if와 if-else의 차이
//#include <stdio.h>
//int main()
//{
//	int num;
//
//	printf("아무 숫자나 입력해보세요 : ");
//	scanf_s("%d", &num);
//
//	if (num == 7)
//	{
//		printf("a 행운의 숫자 7이군요!\n");
//	}
//	else if (num == 7)
//	{
//		printf("b 행운의 숫자 7이군요!\n");
//	}
//
//	//비교
//	if (num == 7)
//	{
//		printf("c 행운의 숫자 7이군요!\n");
//	}
//	if (num == 7)
//	{
//		printf("d 행운의 숫자 7이군요!\n");
//	}
//
//	return 0;
//}

////if-else문 마지막 연습
//#include <stdio.h>
//int main()
//{
//	float ave_score, math, english, science, programming;
//
//	printf("수학, 영어, 과학, 프로그래밍 점수를 각각 입력해주세요 : ");
//	scanf_s("%f %f %f %f", &math, &english, &science, &programming);
//
//	ave_score = (math + english + science + programming) / 4;
//	printf("당신의 평균 점수는 %f입니다.\n", ave_score);
//
//	if (ave_score >= 90)
//	{
//		printf("당신의 우등생입니다.\n");
//	}
//	else if (ave_score >= 30)
//	{
//		printf("조금만 노력하세요!\n");
//	}
//	else if (ave_score > 0)
//	{
//		printf("공부를 발로 합니까?\n");
//	}
//	else
//	{
//		printf("인생을 포기하셨군요.\n");
//	}
//
//	return 0;
//}

////크기 비교
//#include <stdio.h>
//int main()
//{
//	int a;
//
//	printf("아무 숫자나 입력하세요 : ");
//	scanf_s("%d", &a);
//
//	if (a >= 10 && a < 20)
//	{
//		printf("%d는 10이상, 20미만인 수 입니다.\n", a);
//	}
//
//	return 0;
//}

////논리합
//#include <stdio.h>
//int main()
//{
//	int height, weight;
//
//	printf("당신의 키와 몸무게를 각각 입력해주세요 : ");
//	scanf_s("%d %d", &height, &weight);
//
//	if (height >= 190 || weight >= 100)
//	{
//		printf("당신은 \"거구\"입니다.\n");
//	}
//
//	return 0;
//}

////논리부정
//#include <stdio.h>
//int main()
//{
//	int height, weight;
//
//	printf("당신의 키와 몸무게를 각각 입력해주세요 : ");
//	scanf_s("%d %d", &height, &weight);
//
//	if (height >= 190 || weight >= 100)
//	{
//		printf("당신은 \"거구\"입니다.\n");
//	}
//	if (!(height >= 190 || weight >= 100))
//	{
//		printf("당신은 \"거구\"가 아닙니다.\n");
//	}
//
//	return 0;
//}