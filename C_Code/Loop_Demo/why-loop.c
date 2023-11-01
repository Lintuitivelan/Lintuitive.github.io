/*
	1+2+3+4+...+100
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main01(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 100; ++i)
		sum = sum + i;

	printf("sum = %d\n",sum);
		

	return 0;
}