#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
/*
 Date��1026pm
 ��̬������һ�����飬�����������һϵ�в���
 */
//������һ���������ͣ���������������Ϊ struct Arr������������Ա
struct Arr
{
    int* pBase;//�洢���������һ��Ԫ�صĵ�ַ
    int len;//���������ɵ����Ԫ�صĸ���
    int cnt;//��ǰ������ЧԪ�صĸ���
    //int increment;//�Զ���������
};

void init_arr(struct Arr* pArr,int length);
bool append_arr(struct Arr* pArr,int val);//׷��
bool insert_arr(struct Arr* pArr,int pos,int val);//pos��ֵ��1��ʼ����posǰ����val
bool delete_arr(struct Arr* pArr,int pos,int* pVal);//pVal����ɾ����ֵ���ں����ڲ� �Ѵ�ɾ��Ԫ�ص�ֵ����pValָ��ı���
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
        printf("ɾ���ɹ�\n");
        printf("ɾ����Ԫ���ǣ�%d\n",val);
    }
    else
        printf("ɾ��ʧ��\n");

/*    append_arr(&arr,2);
    append_arr(&arr,3);
    append_arr(&arr,4);
    append_arr(&arr,5);
    insert_arr(&arr,2,99);
    append_arr(&arr,6);
    append_arr(&arr,7);
    if(append_arr(&arr,8))
    {
        printf("׷�ӳɹ�\n");
    }
    else
    {
        printf("׷��ʧ��\n");
    }
*/
    show_arr(&arr);
    inversion_arr(&arr);
    printf("����:\n");
    show_arr(&arr);
    sort_arr(&arr);
    printf("����:\n");
    show_arr(&arr);

    //printf("len = %d\n",arr.len);

    return 0;
}

void init_arr(struct Arr *pArr,int length)
{
    pArr->pBase = (int*)malloc(sizeof(int) * length);
    if(NULL == pArr->pBase)
    {
        printf("��̬�ڴ����ʧ�ܣ�\n");
        exit(-1);//��ֹ��������
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
    if(is_empty(pArr)) //pArr�Ѿ��ǵ�ַ������ǰ�治��Ҫ��&
    {
     printf("����Ϊ��!\n");
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
    //��ʱ����false
    if(is_full(pArr))
        return false;
    //����ʱ׷��
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

    if(pos<1 || pos>pArr->cnt+1) //�ж�
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

    *pVal = pArr->pBase[pos-1];//pos-1 Ϊ��ɾ��Ԫ���±�
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