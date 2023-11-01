//判断是否是回文数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main07(void)//07
{
	int val;//存放带判断的数字
	int m;
	int sum = 0;

	printf("请输入您需要判断的数字：");
	scanf("%d", &val);

	m = val;
	while (m)
	{
		sum = sum * 10 + m % 10;
		m = m / 10;
	}
	
	if (sum == val)
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}