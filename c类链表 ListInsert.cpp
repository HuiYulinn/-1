/*��������:˳�����Ա�L�Ѵ��ڣ�i<=i<=ListLength*/
/*�������:��L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�һ*/
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

Status ListInsert(LinkList* L, int i, ElemType e) {
	int j;
	LinkList p, s;//sΪ����Ľڵ�
	p = *L;
	j = 1;

	while (p && j < i) {//����Ѱ��i����
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