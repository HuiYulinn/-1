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
