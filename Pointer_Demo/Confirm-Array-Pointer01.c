#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//f������������κ�һ��һά���������
void f01(int* pArr, int len)
{
	int i;

	for (i = 0; i < len; ++i)
		printf("%d ", *(pArr+i) );//*pArr  *(pArr+1)  *(pArr+2)
	printf("\n");
}

int main05(void)//05
{
	int a[5] = { 1,2,3,4,5 };
	int b[6] = { -1,-2,-3,4,5, -6 };
	int c[100] = { 1, 99, 22, 33 };

	f01(a, 5);//a��int *
	f01(b, 6);
	f01(c, 100);

	return 0;
}