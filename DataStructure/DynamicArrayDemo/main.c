#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
/*
 Date：1026pm
 动态生成了一个数组，并对其进行了一系列操作
 */
//定义了一个数据类型，该数据类型名字为 struct Arr，含有三个成员
struct Arr
{
    int* pBase;//存储的是数组第一个元素的地址
    int len;//数组所容纳的最大元素的个数
    int cnt;//当前数组有效元素的个数
    //int increment;//自动增长因子
};

void init_arr(struct Arr* pArr,int length);
bool append_arr(struct Arr* pArr,int val);//追加
bool insert_arr(struct Arr* pArr,int pos,int val);//pos的值从1开始，在pos前插入val
bool delete_arr(struct Arr* pArr,int pos,int* pVal);//pVal返回删除的值，在函数内部 把待删除元素的值赋给pVal指向的变量
int get();
bool is_empty(struct Arr* pArr);
bool is_full(struct Arr* pArr);
void sort_arr(struct Arr* pArr);
void show_arr(struct Arr* pArr);
void inversion_arr(struct Arr* pArr);

int main()
{
    struct Arr arr;
    int val;

    init_arr(&arr,6);
    show_arr(&arr);
    append_arr(&arr,1);
    append_arr(&arr,10);
    append_arr(&arr,-3);
    append_arr(&arr,6);
    append_arr(&arr,88);
    append_arr(&arr,11);
//    insert_arr(&arr,2,99);
    if( delete_arr(&arr,4,&val) )
    {
        printf("删除成功\n");
        printf("删除的元素是：%d\n",val);
    }
    else
        printf("删除失败\n");

/*    append_arr(&arr,2);
    append_arr(&arr,3);
    append_arr(&arr,4);
    append_arr(&arr,5);
    insert_arr(&arr,2,99);
    append_arr(&arr,6);
    append_arr(&arr,7);
    if(append_arr(&arr,8))
    {
        printf("追加成功\n");
    }
    else
    {
        printf("追加失败\n");
    }
*/
    show_arr(&arr);
    inversion_arr(&arr);
    printf("倒置:\n");
    show_arr(&arr);
    sort_arr(&arr);
    printf("排序:\n");
    show_arr(&arr);

    //printf("len = %d\n",arr.len);

    return 0;
}

void init_arr(struct Arr *pArr,int length)
{
    pArr->pBase = (int*)malloc(sizeof(int) * length);
    if(NULL == pArr->pBase)
    {
        printf("动态内存分配失败！\n");
        exit(-1);//终止整个程序
    }
    else
    {
        pArr->len = length;
        pArr->cnt = 0;
    }
    return;
}

bool is_empty(struct Arr* pArr)
{
    if(0 == pArr->cnt)
        return true;
    else
        return false;
}

bool is_full(struct Arr* pArr)
{
    if(pArr->cnt == pArr->len)
        return true;
    else
        return false;
}

void show_arr(struct Arr* pArr)
{
    if(is_empty(pArr)) //pArr已经是地址，所以前面不需要加&
    {
     printf("数组为空!\n");
    }
    else
    {
        for(int i = 0; i < pArr->cnt; ++i)
            printf("%d ",pArr->pBase[i]);//int*
            printf("\n");
    }
}

bool append_arr(struct Arr* pArr,int val)
{
    //满时返回false
    if(is_full(pArr))
        return false;
    //不满时追加
    else
    {
        pArr->pBase[pArr->cnt] = val;
        (pArr->cnt)++;
        return true;
    }
}

bool insert_arr(struct Arr* pArr,int pos,int val)
{
    int i;

    if(is_full(pArr))
        return false;

    if(pos<1 || pos>pArr->cnt+1) //判断
        return false;

    for(i = pArr->cnt-1; i >= pos-1;--i)
    {
        pArr->pBase[i+1] = pArr->pBase[i];
    }
    pArr->pBase[pos-1] = val;
    pArr->cnt++;
    return true;
}

bool delete_arr(struct Arr* pArr,int pos,int* pVal)
{
    int i;

    if( is_empty(pArr) )
        return false;
    if(pos < 1 || pos > pArr->cnt)
        return false;

    *pVal = pArr->pBase[pos-1];//pos-1 为待删除元素下标
    for(i = pos; i < pArr->cnt; ++i)
    {
        pArr->pBase[i-1] = pArr->pBase[i];
    }
    pArr->cnt--;
    return true;
}

void inversion_arr(struct Arr* pArr)
{
    int i = 0;
    int j = pArr->cnt-1;
    int t;

    while(i < j)
    {
        t = pArr->pBase[i];
        pArr->pBase[i] = pArr->pBase[j];
        pArr->pBase[j] = t;
        ++i;
        --j;
    }
    return;
}

void sort_arr(struct Arr* pArr)
{
    int i, j, t;

    for(i = 0; i < pArr->cnt; ++i)
    {
        for(j = i+1; j < pArr->cnt; ++j)
        {
            if(pArr->pBase[i] > pArr->pBase[j])
            {
                t = pArr->pBase[i];
                pArr->pBase[i] = pArr->pBase[j];
                pArr->pBase[j] = t;
            }
        }
    }
}