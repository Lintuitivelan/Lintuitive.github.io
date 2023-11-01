#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;//������
    struct Node * pNext;//ָ����
}NODE, *PNODE;// NODE �ȼ��� struct Node��PNODE �ȼ��� struct Node *

//��������
PNODE create_List(void);
void traverse_List(PNODE pHead);
bool is_empty(PNODE pHead);
int length_List(PNODE);
bool insert_List(PNODE,int,int);//���ң�����λ��pos��ֵval  ��pHead��ָ������ĵ�pos���ڵ�ǰ����һ���µĽڵ㣬�ýڵ��ֵ��val������pos��ֵ�Ǵ�1��ʼ
bool delete_List(PNODE,int,int*);//ɾ�� delete_List(pHead, 3, &val);
void sort_List(PNODE);

int main(void)
{
    PNODE pHead = NULL;
    int val;

    pHead = create_List();//creat_List() ���ܣ�����һ����ѭ�������������������ͷ�ڵ�ĵ�ַ����pHead
    traverse_List(pHead);
    //insert_List(pHead,3,22);
    if( delete_List(pHead, 4, &val) )
    {
        printf("ɾ���ɹ�����ɾ����Ԫ���� %d\n",val);
    }
    else
    {
        printf("ɾ��ʧ�ܣ���ɾ����Ԫ�ز�����\n");
    }

    traverse_List(pHead);

/*    int len = length_List(pHead);
    printf("����ĳ����� %d \n",len);

    sort_List(pHead);
    printf("����\n");
    traverse_List(pHead);
*/

/*    if( is_empty(pHead) )
        printf("����Ϊ�գ�\n");
    else
        printf("�����գ�\n");
*/
    return 0;
}

PNODE create_List(void)
{
    int len;//��Ч�ڵ����
    int i;
    int val;//������ʱ����û�����Ľڵ��ֵ

    //������һ���������Ч���ݵ�ͷ�ڵ�
    PNODE pHead = (PNODE)malloc(sizeof(NODE));//������һ����ʱ�ڵ㣬�����践�ظ�ȫ�ֱ���pHead
    if(NULL == pHead)
    {
        printf("����ʧ�ܣ�������ֹ��\n");
        exit(-1);
    }
    PNODE pTail = pHead;//��Ϊ�ٶ�pTail��Զָ��β�ڵ㣬��ֻ��һ���ڵ�����£�pHead�������β�ڵ�
    pTail->pNext = NULL;

    printf("����������Ҫ���ɵ�����ڵ�ĸ�����len = ");
    scanf("%d",&len);

    for(i = 0; i < len; ++i)
    {
        printf("������� %d ���ڵ��ֵ��",i+1);
        scanf("%d",&val);

        PNODE pNew = (PNODE)malloc(sizeof (NODE));
        if(NULL == pNew)
        {
            printf("����ʧ�ܣ�������ֹ��\n");
            exit(-1);
        }
        pNew->data = val;
        pTail->pNext = pNew;
        pNew->pNext = NULL;
        pTail = pNew;
    }
    return pHead;

}

void traverse_List(PNODE pHead)
{
    PNODE p = pHead->pNext;

    while (NULL != p)
    {
        printf("%d ",p->data);
        p = p->pNext;
    }
    printf("\n");

    return;
}

bool is_empty(PNODE pHead)
{
    if(NULL == pHead->pNext)
        return true;
    else
        return false;
}

int length_List(PNODE pHead)
{
    PNODE p = pHead->pNext;
    int len = 0;

    while(NULL != p)
    {
        ++len;
        p = p->pNext;
    }
    return len;
}

void sort_List(PNODE pHead)
{
    int i, j, t;
    int len = length_List(pHead);//
    PNODE p, q;

    for(i=0, p = pHead->pNext; i<len-1; ++i, p = p->pNext)//
    {
        for(j=i+1, q = p->pNext; j<len; ++j,q = q->pNext)
        {
            if(p->data > q->data)//�����������еģ� a[i] > a[j]
            {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
        }
    }
    return;
}

//��pHead��ָ������ĵ�pos���ڵ�ǰ����һ���µĽڵ㣬�ýڵ��ֵ��val������pos��ֵ�Ǵ�1��ʼ
bool insert_List(PNODE pHead, int pos, int val)
{
    int i = 0;
    PNODE p = pHead;

    while(NULL != p && i < pos-1)
    {
        p = p->pNext;
        ++i;
    }

    if(i > pos-1 || NULL == p)
        return false;

    PNODE pNew = (PNODE)malloc(sizeof(NODE));
    if(NULL == pNew)
    {
        printf("��̬�ڴ����ʧ�ܣ�\n");
        exit(-1);
    }
    pNew->data = val;
    PNODE q = p->pNext;
    p->pNext = pNew;
    pNew->pNext = q;

    return true;
}

bool delete_List(PNODE pHead, int pos, int* pVal)
{
    int i = 0;
    PNODE p = pHead;

    while(NULL != p->pNext && i < pos-1)
    {
        p = p->pNext;
        ++i;
    }

    if(i > pos-1 || NULL == p->pNext)
        return false;

    PNODE q = p->pNext;
    *pVal = q->data;

    //ɾ��p�ڵ����Ľڵ�
    p->pNext = p->pNext->pNext;
    free(q);
    q = NULL;

    return true;
}