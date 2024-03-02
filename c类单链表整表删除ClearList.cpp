
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

Status ClearList(LinkList* L) {//������һֱ�о��Ǵ�ģ���Ϊ����ǰ��LinkList ��ָ�������������ﻹ��һ��*�����Ƕ���ָ�룻

	LinkList p, q;
	p = (*L)->next;
	while (p) {
		q = p->next;
		delete p;
		p = q;
	}
	(*L)->next = NULL;
	return OK;
}