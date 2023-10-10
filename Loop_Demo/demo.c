#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main06(void) 
{
	int a = 1, b = 2;
	float re1, re2, re3;

	re1 = a % b;
	re2 = a / b;
	
	printf("re1 = %f,\nre2 = %f",re1,re2);

	return 0;
}