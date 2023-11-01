#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void f03(void)
{
	int i;

	for (i = 0; i <= 5; ++i)
	{
		printf("Hi!\n");
		//break;
		return;
	}
	printf("ovo\n");
}

int main03(void)//03
{
	f03();

	return 0;
}