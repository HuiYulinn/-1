#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int ElemType;

typedef int Status;
//Status 是函数类型 其值是函数结果状态代码，如ok等
//初始条件：顺序线性表L 已经存在，1<=i<=ListLength(L)
//操作结果：用e返回L中的第i个数据元素的值





Status GetElem(SqList L, int i, ElemType* e) {
	if (L.length == 0 || i<1 || i>L.length) {
		return ERROR;
	}
	*e = L.data[i - 1];
	return OK;
}