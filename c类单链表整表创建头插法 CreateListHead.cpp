

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

void CreateListHead(LinkList *L, int n) {//这里要对指针进行修改要用二级指针
	LinkList p;
	int i;

	srand(time(0));
	*L = new Node;
	(*L)->next = NULL;//什么意思，是初始化的意思吗
	
	for (i = 0; i < n; i++) {
		p = new Node;
		p->data = rand() % 100 + 1;//得到1到100的数  %100是得到0到99
		p->next = (*L)->next;
		(*L)->next = p->next;
		delete p;//需要这一步吗？

	}
}