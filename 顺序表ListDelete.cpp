
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int ElemType;



Status ListDelete(SqList* L, int i,ElemType *e) {
	if (i<1 || i>L->Length) {
		return ERROR;
	}
	if (L->Length == 0) //== ����ȫ�Ⱥ�
	{
		return ERROR;
	}

	*e = L->data[i - 1];

	if (i < L->Length) {
		for (int k = i; k <= L->Length - 1; k++)
		{
			L->data[k - 1] = L->data[k];
		}
	} 
	//ɾ��Ԫ�ز���
	L->Length--;
	return OK;
}