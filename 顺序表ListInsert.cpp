//���Ա��Ԫ���Ǵ�1 ��ʼ��û��0
/*��ʼ������˳�����Ա�L�Ѿ����ڣ�i<=i<=ListLength(L)*/
/*�������:��L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L����+1*/

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;

Status ListInsert(SqList* L, int i, ElemType e)
{
	int k;
	if (L->length == MAXSIZE)
	{
		return ERROR;
	}
	if (i<1 || i>L->Length + 1)//ΪʲôҪ��1? ��Ϊ���i =L-> Length+1  ��i�ǲ�������Ա��ĩβ ֱ��ִ������if����Ĳ�����䣻

	{
		return ERROR;
	}
	if (i <= L->Length)//���ڱ�β
	{
		for (k = L->Length - 1; k >= i - 1; k--)
		{
			L->data[k + 1] = L->data[k];
		}
	}
	L->data[i - 1] = e;//����Ԫ�ز���
	L->length+0+;//��������
	return OK;
}