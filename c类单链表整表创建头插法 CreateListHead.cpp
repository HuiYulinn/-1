

#include<stdio.h>
#include<cstdlib> //srand���������ͷ�ļ�
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int ElemType;

typedef struct Node {
	ElemType data;//������
	struct Node* next;//ָ����
}Node;
typedef struct Node* LinkList;

void CreateListHead(LinkList *L, int n) {//����Ҫ��ָ������޸�Ҫ�ö���ָ��
	LinkList p;
	int i;

	srand(time(0));
	*L = new Node;
	(*L)->next = NULL;//ʲô��˼���ǳ�ʼ������˼��
	
	for (i = 0; i < n; i++) {
		p = new Node;
		p->data = rand() % 100 + 1;//�õ�1��100����  %100�ǵõ�0��99
		p->next = (*L)->next;
		(*L)->next = p->next;
		delete p;//��Ҫ��һ����

	}
}