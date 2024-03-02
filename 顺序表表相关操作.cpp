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
