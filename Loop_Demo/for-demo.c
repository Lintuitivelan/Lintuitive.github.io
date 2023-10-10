/*
	求1到100之间所有的奇数和
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main02(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 100; i += 2)
	{
		sum += i;
	}

	printf("sun = %d\n",sum);
	printf("i = %d\n", i);

	return 0;
}