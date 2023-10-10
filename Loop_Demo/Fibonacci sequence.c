/*
斐波那契序列
 1 2 3 5 8 13 21...
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main08(void)//08
{
	int n;
	int f1, f2, f3;
	int i;

	f1 = 1;
	f2 = 2;


	printf("请输入您要求的数的序号:");
	scanf("%d",&n);

	if (1 == n)
	{
		f3 = 1;
	}
	else if (2 == n)
	{
		f3 = 2;
	}
	else
	{
		for (i = 3; i <= n; ++i)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
	}
	printf("%d \n",f3);

	return 0;
}