//// ����ü ���� �Ҵ�
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Something
//{
//	int a, b;
//};
//
//int main()
//{
//	struct Something *arr;
//	int size, i;
//
//	printf("���ϴ� ����ü �迭�� ũ�� : ");
//	scanf_s("%d", &size);
//
//	arr = (struct Something*)malloc(sizeof(struct Something)*size);
//
//	for ( i = 0; i < size; i++)
//	{
//		printf("arr[%d].a : ", i);
//		scanf_s("%d", &arr[i].a);
//		printf("arr[%d].b : ", i);
//		scanf_s("%d", &arr[i].b);
//	}
//
//	for ( i = 0; i < size; i++)
//	{
//		printf("arr[%d].a : %d, arr[%d].b : %d\n", i, arr[i].a, i, arr[i].b);
//	}
//
//	free(arr);
//
//	return 0;
//}

//// ���
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	struct Node *nextNode;
//};
//
//struct Node* CreateNode(int data);
//struct Node* InsertNode(struct Node *current, int data);
//void DestroyNode(struct Node *destroy, struct Node *head);
//void PrintNodeFrom(struct Node *from);
//
//int main()
//{
//	struct Node* Node1 = CreateNode(100);
//	struct Node* Node2 = InsertNode(Node1, 200);
//	struct Node* Node3 = InsertNode(Node2, 300);
//	struct Node* Node4 = InsertNode(Node2, 400);
//	
//	PrintNodeFrom(Node1);
//
//	DestroyNode(Node4, Node1);
//
//	PrintNodeFrom(Node1);
//
//	return 0;
//}
//
//struct Node * CreateNode(int data)
//{
//	struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
//
//	newNode->data = data;
//	newNode->nextNode = NULL;
//
//	return newNode;
//}
//
//struct Node * InsertNode(struct Node * current, int data)
//{
//	struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
//
//	newNode->data = data;
//	newNode->nextNode = current->nextNode;
//	
//	current->nextNode = newNode;
//
//	return newNode;
//}
//
//void DestroyNode(struct Node * destroy, struct Node *head)
//{
//	if (destroy == head)
//	{
//		free(destroy);
//		return;
//	}
//
//	struct Node *next = head;
//
//	while (next)
//	{
//		if (next->nextNode == destroy)
//		{
//			next->nextNode = destroy->nextNode;
//		}
//
//		next = next->nextNode;
//	}
//	free(destroy);
//}
//
//void PrintNodeFrom(struct Node * from)
//{
//	while (from)
//	{
//		printf("����� ������ : %d\n", from->data);
//		from = from->nextNode;
//	}
//}

//// memcpy �Լ�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[30] = "I love Chewing C hahaha", str2[30], str3[30];
//
//	memcpy(str2, str1, strlen(str1) + 1);
//	memcpy(str3, "hello", 6);
//
//	printf("%s\n%s\n%s\n", str1, str2, str3);
//
//	return 0;
//}

//// memmove �Լ�
//#include <stdio.h>
//#include <string.h>;
//
//int main()
//{
//	char str[30] = "I love Chewing C hahaha";
//
//	printf("%s\nmemmove ����\n", str);
//	memmove(str + 23, str + 17, 6);
//	printf("%s\n", str);
//
//	return 0;
//}

//// memcmp �Լ�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5 }, arr2[10] = { 1,2,3,4,5 };
//
//	if (memcmp(arr1,arr2,5)==0)
//	{
//		printf("arr1�� arr2�� ��ġ\n");
//	}
//	else
//	{
//		printf("arr1�� arr2�� ����ġ\n");
//	}
//
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