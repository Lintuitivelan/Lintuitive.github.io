#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)//13
{
	int i = 5;
	int j = 7;
	int k;

	k = i & j;
	printf("%d\n",k);

	k = i && j; //k 的值只能是1或0，因为&&是逻辑运算符，结果只能为真或假
	printf("%d\n", k);

	return 0;
}