/*����������i�����ڷ�Χ��*/
/*���������ɾ��L�ĵ�i��Ԫ�� ����e���أ�L�ĳ���-1 */
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

Status ListDelete(LinkList L, int i, ElemType *e) {
	int j = 1;
	LinkList p, q;
	
	while (p && j < i-1) {
		p = p->next;
		++j;
	}//�Ӵ�ѭ�������� j��ֵ��������Ҫɾ��Ԫ�صĽڵ㣬p������ɾ���ڵ��ָ��
	if (!p || j > i) {
		return ERROR;
	}
	*e = p->next->data;
	q = p->next;
	p->next = q->next;
	delete p;
}