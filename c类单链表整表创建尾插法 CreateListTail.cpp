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

void CreatListTail(LinkList* L, int n) {
	LinkList p, r;
	int i;
	srand(time(0));
	*L = new Node;
	r = *L;

	for (i = 0; i < n; i++) {
		p = new Node;
		p->data = rand() % 100 + 1;
		r->next = p;
		r = p;
	}
	r->next = NULL;


}