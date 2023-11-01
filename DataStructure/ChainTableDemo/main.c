#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;//数据域
    struct Node * pNext;//指针域
}NODE, *PNODE;// NODE 等价于 struct Node，PNODE 等价于 struct Node *

//函数声明
PNODE create_List(void);
void traverse_List(PNODE pHead);
bool is_empty(PNODE pHead);
int length_List(PNODE);
bool insert_List(PNODE,int,int);//查找，链表，位置pos，值val  在pHead所指向链表的第pos个节点前插入一个新的节点，该节点的值是val，并且pos的值是从1开始
bool delete_List(PNODE,int,int*);//删除 delete_List(pHead, 3, &val);
void sort_List(PNODE);

int main(void)
{
    PNODE pHead = NULL;
    int val;

    pHead = create_List();//creat_List() 功能：创建一个非循环单链表，并将该链表的头节点的地址赋给pHead
    traverse_List(pHead);
    //insert_List(pHead,3,22);
    if( delete_List(pHead, 4, &val) )
    {
        printf("删除成功，您删除的元素是 %d\n",val);
    }
    else
    {
        printf("删除失败！您删除的元素不存在\n");
    }

    traverse_List(pHead);

/*    int len = length_List(pHead);
    printf("链表的长度是 %d \n",len);

    sort_List(pHead);
    printf("排序：\n");
    traverse_List(pHead);
*/

/*    if( is_empty(pHead) )
        printf("链表为空！\n");
    else
        printf("链表不空！\n");
*/
    return 0;
}

PNODE create_List(void)
{
    int len;//有效节点个数
    int i;
    int val;//用来临时存放用户输入的节点的值

    //分配了一个不存放有效数据的头节点
    PNODE pHead = (PNODE)malloc(sizeof(NODE));//生成了一个临时节点，将来需返回给全局变量pHead
    if(NULL == pHead)
    {
        printf("分配失败，程序终止！\n");
        exit(-1);
    }
    PNODE pTail = pHead;//因为假定pTail永远指向尾节点，在只有一个节点情况下，pHead本身就是尾节点
    pTail->pNext = NULL;

    printf("请输入你需要生成的链表节点的个数：len = ");
    scanf("%d",&len);

    for(i = 0; i < len; ++i)
    {
        printf("请输入第 %d 个节点的值：",i+1);
        scanf("%d",&val);

        PNODE pNew = (PNODE)malloc(sizeof (NODE));
        if(NULL == pNew)
        {
            printf("分配失败，程序终止！\n");
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
            if(p->data > q->data)//类似于数组中的： a[i] > a[j]
            {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
        }
    }
    return;
}

//在pHead所指向链表的第pos个节点前插入一个新的节点，该节点的值是val，并且pos的值是从1开始
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
        printf("动态内存分配失败！\n");
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

    //删除p节点后面的节点
    p->pNext = p->pNext->pNext;
    free(q);
    q = NULL;

    return true;
}