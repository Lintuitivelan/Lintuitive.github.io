#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void f(int* pArr, int len)
{
	int i;
	
	for (i = 0; i < len; ++i)
		printf("%d ", pArr[i]);// *(pArr+i) �ȼ��� pArr[i]  Ҳ�ȼ��� b[i]  Ҳ�ȼ��� *(b+i)
	printf("\n");
}

int main07(void)//07
{
	int b[6] = { -1,-2,-3,4,5, -6 };

	f(b,6);

	return 0;
}