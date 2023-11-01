#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main03(void)
{
	int i;
	int sum = 0;

	for (i = 3; i <= 12; ++i)
	{
		if (i % 3 == 0)//如果i能被3整除
			sum = sum + i;
	}
	printf("sum = %d\n",sum);

	return 0;
}