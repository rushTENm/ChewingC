////if���̶�?
//#include <stdio.h>
//int main()
//{
//	int i;
//
//	printf("�Է��ϰ� ���� ���ڸ� �Է��ϼ��� : ");
//	scanf_s("%d", &i);
//
//	if (i == 7)
//	{
//		printf("����� ����� ���� 7�� �Է��߽��ϴ�.\n");
//	}
//
//	return 0;
//}

////������ ����
//#include <stdio.h>
//int main()
//{
//	double i, j;
//
//	printf("������ ���� �� ������ �Է��ϼ��� : ");
//	scanf_s("%lf %lf", &i, &j);
//
//	if (j == 0)
//	{
//		printf("0���� ���� �� �����ϴ�.\n");
//		
//		return 0;
//	}
//	else
//	{
//		printf("%f�� %f�� ���� ����� : %f\n", i, j, i / j);
//	}
//
//	return 0;
//}

////�հ�? ���հ�?
//#include <stdio.h>
//int main()
//{
//	int score;
//
//	printf("����� ���������� �Է��ϼ��� : ");
//	scanf_s("%d", &score);
//
//	if (score >= 90)
//	{
//		printf("����� �հ��Դϴ�!\n");
//	}
//	else
//	{
//		printf("����� ���հ��Դϴ�.\n");
//	}
//
//	return 0;
//}

////ũ�� ���ϱ�
//#include <stdio.h>
//int main()
//{
//	int i, j;
//
//	printf("ũ�⸦ ���� �� ���� �Է����ּ��� : ");
//	scanf_s("%d %d", &i, &j);
//
//	if (i > j)
//	{
//		printf("%d�� %d���� Ů�ϴ�.\n", i, j);
//	}
//	if (i < j)
//	{
//		printf("%d�� %d���� �۽��ϴ�.\n", i, j);
//	}
//	if (i >= j)
//	{
//		printf("%d�� %d���� ũ�ų� �����ϴ�.\n", i, j);
//	}
//	if (i <= j)
//	{
//		printf("%d�� %d���� �۰ų� �����ϴ�.\n", i, j);
//	}
//	if (i == j)
//	{
//		printf("%d�� %d��(��) �����ϴ�.\n", i, j);
//	}
//	if (i != j)
//	{
//		printf("%d�� %d��(��) �ٸ��ϴ�\n", i, j);
//	}
//
//	return 0;
//}

////if-else�� �����ϱ�
//#include <stdio.h>
//int main()
//{
//	int num;
//
//	printf("�ƹ� ���ڳ� �Է��غ����� : ");
//	scanf_s("%d", &num);
//
//	if (num == 7)
//	{
//		printf("����� ���� 7�̱���!\n");
//	}
//	else
//	{
//		printf("�׳� ���� ������ %d�� �Է��߱���.\n", num);
//	}
//
//	return 0;
//}

////if-else ������ ����?
//#include <stdio.h>
//int main()
//{
//	int num;
//
//	printf("�ƹ� ���ڳ� �Է��غ����� : ");
//	scanf_s("%d", &num);
//
//	if (num == 7)
//	{
//		printf("����� ���� 7�̱���!\n");
//	}
//	else if (num == 4)
//	{
//		printf("������ ���� 4�ΰ��� ����\n");
//	}
//	else
//	{
//		printf("�׳� ���� ������ %d�� �Է��߱���.\n", num);
//	}
//
//	return 0;
//}

////if�� if-else�� ����
//#include <stdio.h>
//int main()
//{
//	int num;
//
//	printf("�ƹ� ���ڳ� �Է��غ����� : ");
//	scanf_s("%d", &num);
//
//	if (num == 7)
//	{
//		printf("a ����� ���� 7�̱���!\n");
//	}
//	else if (num == 7)
//	{
//		printf("b ����� ���� 7�̱���!\n");
//	}
//
//	//��
//	if (num == 7)
//	{
//		printf("c ����� ���� 7�̱���!\n");
//	}
//	if (num == 7)
//	{
//		printf("d ����� ���� 7�̱���!\n");
//	}
//
//	return 0;
//}

////if-else�� ������ ����
//#include <stdio.h>
//int main()
//{
//	float ave_score, math, english, science, programming;
//
//	printf("����, ����, ����, ���α׷��� ������ ���� �Է����ּ��� : ");
//	scanf_s("%f %f %f %f", &math, &english, &science, &programming);
//
//	ave_score = (math + english + science + programming) / 4;
//	printf("����� ��� ������ %f�Դϴ�.\n", ave_score);
//
//	if (ave_score >= 90)
//	{
//		printf("����� �����Դϴ�.\n");
//	}
//	else if (ave_score >= 30)
//	{
//		printf("���ݸ� ����ϼ���!\n");
//	}
//	else if (ave_score > 0)
//	{
//		printf("���θ� �߷� �մϱ�?\n");
//	}
//	else
//	{
//		printf("�λ��� �����ϼ̱���.\n");
//	}
//
//	return 0;
//}

////ũ�� ��
//#include <stdio.h>
//int main()
//{
//	int a;
//
//	printf("�ƹ� ���ڳ� �Է��ϼ��� : ");
//	scanf_s("%d", &a);
//
//	if (a >= 10 && a < 20)
//	{
//		printf("%d�� 10�̻�, 20�̸��� �� �Դϴ�.\n", a);
//	}
//
//	return 0;
//}

////����
//#include <stdio.h>
//int main()
//{
//	int height, weight;
//
//	printf("����� Ű�� �����Ը� ���� �Է����ּ��� : ");
//	scanf_s("%d %d", &height, &weight);
//
//	if (height >= 190 || weight >= 100)
//	{
//		printf("����� \"�ű�\"�Դϴ�.\n");
//	}
//
//	return 0;
//}

////������
//#include <stdio.h>
//int main()
//{
//	int height, weight;
//
//	printf("����� Ű�� �����Ը� ���� �Է����ּ��� : ");
//	scanf_s("%d %d", &height, &weight);
//
//	if (height >= 190 || weight >= 100)
//	{
//		printf("����� \"�ű�\"�Դϴ�.\n");
//	}
//	if (!(height >= 190 || weight >= 100))
//	{
//		printf("����� \"�ű�\"�� �ƴմϴ�.\n");
//	}
//
//	return 0;
//}