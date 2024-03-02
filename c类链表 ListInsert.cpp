/*操作条件:顺序线性表L已存在，i<=i<=ListLength*/
/*操作结果:在L中第i个位置之前插入新的数据元素e。L的长度加一*/
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

Status ListInsert(LinkList* L, int i, ElemType e) {
	int j;
	LinkList p, s;//s为插入的节点
	p = *L;
	j = 1;

	while (p && j < i) {//用于寻找i在哪
		p = p->next;
		++j;
	}
	
	if (!p || j > i) {
		return ERROR;
	}
	s = new Node;
	s->next = p->next;
	p->next = s;
	s->data = e;

	return OK;

}