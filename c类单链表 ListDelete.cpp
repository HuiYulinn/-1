/*操作条件：i存在于范围内*/
/*操作结果：删除L的第i个元素 并用e返回，L的长度-1 */
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

Status ListDelete(LinkList L, int i, ElemType *e) {
	int j = 1;
	LinkList p, q;
	
	while (p && j < i-1) {
		p = p->next;
		++j;
	}//从此循环出来后 j的值就是所需要删除元素的节点，p是所需删除节点的指针
	if (!p || j > i) {
		return ERROR;
	}
	*e = p->next->data;
	q = p->next;
	p->next = q->next;
	delete p;
}