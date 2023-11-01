#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int*, int*);

int main02(void)//02
{
	int a = 3;
	int b = 5;

	swap(&a,&b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

//可以完成互换
void swap(int* p, int* q)//形参名字是p和q，接收实参数据的是p和q，而不是 *p 和 *q
{
	int t;//如果要互换 *p 和 *q 的值，则t必须定义成int，不能定义成int *，否则语法会出错（现在好像没有出错==

	t = *p; //p是int*，*p 是int
	*p = *q;
	*q = t;

	return;
}

//不能完成互换功能
void swap02(int* p, int* q)
{
	int* t;//如果要互换p和q的值，则t必须是int *，不能是int

	t = p;
	p = q;
	q = t;

	return;
}