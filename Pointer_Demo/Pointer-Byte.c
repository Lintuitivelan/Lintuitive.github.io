#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main09(void)//09
{
	char ch = 'A';
	int i = 99;
	double x = 4.18;
	char* p = &ch;
	int* q = &i;
	double* r = &x;

	printf("%d %d %d\n", sizeof(p), sizeof(q), sizeof(r) );// 8 8 8

	return 0;
}