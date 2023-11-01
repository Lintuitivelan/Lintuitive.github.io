#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main08(void)//08
{
	int i = 5;
	int j = 10;//i j 空间不连续 地址相减无意义
	int* p = &i;
	int* q = &j;
	int a[5];
	p = &a[1];
	q = &a[4];

	printf("p和q所指向的单元相隔 %d 个单元\n", (q - p));

	return 0;
}