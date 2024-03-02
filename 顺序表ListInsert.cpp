//线性表的元素是从1 开始的没有0
/*初始条件：顺序线性表L已经存在，i<=i<=ListLength(L)*/
/*操作结果:在L中第i个位置之前插入新的数据元素e，L长度+1*/

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
	if (i<1 || i>L->Length + 1)//为什么要加1? 因为如果i =L-> Length+1  则i是插入该线性表的末尾 直接执行所有if以外的插入语句；

	{
		return ERROR;
	}
	if (i <= L->Length)//不在表尾
	{
		for (k = L->Length - 1; k >= i - 1; k--)
		{
			L->data[k + 1] = L->data[k];
		}
	}
	L->data[i - 1] = e;//将新元素插入
	L->length+0+;//容易忘记
	return OK;
}