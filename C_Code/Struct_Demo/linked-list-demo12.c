/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

//未完成，未完成链表的创建
//定义了一个链表节点的数据类型
struct Node
{
	int data;//数据域
	struct Node* pNext;//指针域
};

//函数声明
struct Node* CreateList(void);
void TraverseList(struct Node*);

int main12(void)//12
{
	struct Node* pHead = NULL;//pHead 用来存放链表头节点的地址

	pHead = CreateList();//通过函数创建一个非循环单链表，并返回头节点地址
	TraverseList(pHead);//遍历输出链表

	return 0;
}

bool empty_list(struct Node* pHead)
{
	if (pHead->pNext == NULL)//pHead->pNext == (*pHead).pNext
		return true;
	else
		return false;
}

//遍历输出链表
void TraverseList(struct Node* PHead)
{

	struct Node* p = pHead->pNext;

	while (NULL != p)
	{
		printf("%d\n",p->data);
		p = p->pNext;
	}
	return;
}
*/