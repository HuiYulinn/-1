#include<iostream>
using namespace std;
#include <string>

//typedef struct {
//	char name[8];
//	 int age;
//
//}Elem;
//
//typedef struct Lnode {
//	Elem data;
//	struct Lnode* next;
//
//}Londe;
//
//void initHead(Londe *L) {
//	L = new Londe;
//	L->next = NULL;
//}
//
//void initLnode(Londe *L) {
//	Londe* n1 = new Londe;
//	Londe* n2 = new Londe;
//	Londe* n3 = new Londe;
//	Londe* n4 = new Londe;
//	Londe* n5 = new Londe;
//	Londe* n6 = new Londe;
//	Londe* n7 = new Londe;
//	L->next = n1;
//
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = n5;
//	n5->next = n6;
//	n6->next = n7;
//	n7->next = NULL;
//	
//	strcpy(n1->data.name, "wo");
//	strcpy(n2->data.name, "y");
//	strcpy(n3->data.name, "d");
//	strcpy(n4->data.name, "c");
//	strcpy(n5->data.name, "!");
//	strcpy(n6->data.name, "!");
//	strcpy(n7->data.name, "!");
//}
//void printf(Londe *L) {
//	cout << L << endl;
//}
//int main()
//{
//	void initHead(Londe * L);
//	void initLnode(Londe * L);
//	void printf(Londe * L);
//	return 0;
//}


/********/
/*�ڶ���*/
/********/
////InitList(*L):��ʼ������������һ���յ����Ա�
////ListEmpty(L):�ж����Ա��Ƿ�Ϊ�գ������Ա�Ϊ�գ��򷵻�ture
////ClearList(*L):�����Ա����
////GetElem(L,i,*e):�����Ա�L�еĵ�i��Ԫ�ظ�ֵ���ظ�e
////LocateElem(L,e):�����Ա�L�в��������e��ȵ�Ԫ�أ��ɹ��򷵻�Ԫ�ر�����š�
////ListInsert(*L,i,e):�����Ա�ĵ�i��λ�ò�����Ԫ��e
////ListDelete:(*L,i,*e):ɾ�����Ա�L�е�i��Ԫ�أ�����e������ֵ
////ListLength(L):�������Ա�L��Ԫ�ظ���

//��A��B�Ĳ���
void unionL(List* La, List Lb) {
	int La_len, Lb_len, i;
	Elemtype e;
	La_len = ListLength(*La);
	Lb_len = ListLength(Lb);
	
	for (i = 1; i <= Lb_len; i++) { 
		GetElem(Lb, i, &e);
		if (!LocateElem(*La, e)) {
			ListInsert(*La, ++La_len, e);
		}
	}
}


