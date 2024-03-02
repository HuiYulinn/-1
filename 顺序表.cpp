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
/*第二天*/
/********/
////InitList(*L):初始化操作，建立一个空的线性表
////ListEmpty(L):判断线性表是否为空，若线性表为空，则返回ture
////ClearList(*L):将线性表清空
////GetElem(L,i,*e):将线性表L中的第i个元素赋值返回给e
////LocateElem(L,e):在线性表L中查找与给定e相等的元素，成功则返回元素表中序号。
////ListInsert(*L,i,e):在线性表的第i个位置插入新元素e
////ListDelete:(*L,i,*e):删除线性表L中第i个元素，并用e返回其值
////ListLength(L):返回线性表L的元素个数

//求A和B的并集
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


