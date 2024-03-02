
#include<stdio.h>
#include<cstdlib> //srand随机函数的头文件
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int ElemType;

typedef struct Node {
	ElemType data;//数据域
	struct Node* next;//指针域
}Node;
typedef struct Node* LinkList;

Status ClearList(LinkList* L) {//这里我一直感觉是错的，因为这里前面LinkList 是指针变量，因此这里还加一个*号则是二级指针；

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