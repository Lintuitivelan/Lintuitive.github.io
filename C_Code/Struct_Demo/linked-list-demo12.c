/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

//δ��ɣ�δ�������Ĵ���
//������һ������ڵ����������
struct Node
{
	int data;//������
	struct Node* pNext;//ָ����
};

//��������
struct Node* CreateList(void);
void TraverseList(struct Node*);

int main12(void)//12
{
	struct Node* pHead = NULL;//pHead �����������ͷ�ڵ�ĵ�ַ

	pHead = CreateList();//ͨ����������һ����ѭ��������������ͷ�ڵ��ַ
	TraverseList(pHead);//�����������

	return 0;
}

bool empty_list(struct Node* pHead)
{
	if (pHead->pNext == NULL)//pHead->pNext == (*pHead).pNext
		return true;
	else
		return false;
}

//�����������
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