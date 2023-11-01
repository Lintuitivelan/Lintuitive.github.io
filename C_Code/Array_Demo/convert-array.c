#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main02(void)//02
{
	int a[7] = { 1,2,3,4,5,6,7 };
	int i, j;
	int t;

	i = 0;
	j = 6;
	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;

		i++;//++i
		--j;
	}
	
	for (i = 0; i < 7; ++i)
	{
		printf("a[%d] = %d\n",i, a[i] );
	}


	return 0;
}