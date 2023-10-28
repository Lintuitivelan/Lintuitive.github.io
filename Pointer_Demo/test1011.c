#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swapdemo(int* , int* );

int main03(void)//03
{
	int a = 4;
	int b = 18;

	swapdemo(&a, &b);
	printf("a = %d,b = %d\n",a,b);

	return 0;
}

void swapdemo(int* p, int* q)//
{
	int t;

	t = *p;
	*p = *q;
	*q = t;

	return;

}