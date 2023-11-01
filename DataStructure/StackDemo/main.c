#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node* pNext;
}NODE, * PNODE;

typedef struct Stack
{
    PNODE pTop;
    PNODE pBottom;//指向栈底元素下一个无实际含义的元素
}STACK, * PSTACK;

void init(PSTACK);//初始化
void push(PSTACK, int);
void traverse(PSTACK);
bool pop(PSTACK, int*);
bool empty(PSTACK );
void clear(PSTACK );//清空

int main(void)
{
    STACK S;//STACK 等价于 struct Stack
    int val;

    init(&S);//目的是造出一个空栈
    push(&S, 1);//压栈
    push(&S, 2);
    push(&S, 3);
    push(&S, 4);
    traverse(&S);//遍历输出
    clear(&S);
    traverse(&S);//遍历输出

    if( pop(&S, &val) )
    {
        printf("出栈成功，出栈的元素是 %d \n", val);
    }
    else
    {
        printf("出栈失败!\n");
    }

    traverse(&S);//遍历输出

    return 0;
}

void init(PSTACK pS)
{
    pS->pTop = (PNODE) malloc(sizeof(NODE));//无实际含义的 最后一个节点的下一个节点
    if(NULL == pS->pTop)
    {
        printf("动态内存分配失败！\n");
        exit(-1);
    }
    else
    {
        pS->pBottom = pS->pTop;
        pS->pTop->pNext = NULL;//pS->pBottom->pNext = NULL;
    }
}

void push(PSTACK pS, int val)
{
    PNODE pNew = (PNODE)malloc(sizeof(NODE));//创建一个新节点
    pNew->data = val;
    pNew->pNext = pS->pTop;// pS->pTop 不能改成 pBottom. pNew 节点的指针域指向 pTop
    pS->pTop = pNew;//pTop 指针上移

    return;
}

void traverse(PSTACK pS)
{
    PNODE p = pS->pTop;

    while (p != pS->pBottom)
    {
        printf("%d ",p->data);
        p = p->pNext;
    }
    printf("\n");
    return;
}

bool empty(PSTACK pS)
{
    if(pS->pTop == pS->pBottom)
        return true;
    else
        return false;
}


//把pS所指向的栈出栈一次，并把出栈的元素存入pVal形参所指向的变量中，如果出栈失败则返回false，否则返回true
bool pop(PSTACK pS, int* pVal)
{
    if( empty(pS) )//pS本身存放的就是栈S的地址
    {
        return false;
    }
    else
    {
        PNODE r = pS->pTop;
        *pVal = r->data;
        pS->pTop = r->pNext;
        free(r);
        r = NULL;

        return true;
    }
}

//clear 清空
void clear(PSTACK pS)
{
    if( empty(pS) )
    {
        return;
    }
    else
    {
        PNODE p = pS->pTop;
        PNODE q = NULL;

        while(p != pS->pBottom)
        {
            q = p->pNext;
            free(p);
            p = q;
        }
        pS->pTop = pS->pBottom;
    }

}