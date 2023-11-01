#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main05(void)
{
	int a, b, c;
	int t;

	printf("请输入三个整数（中间以空格分隔）：");
	scanf("%d %d %d", &a, &b, &c);

	//编写代码完成 max = a，mid = b， min = c

	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}

	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}

	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}

	printf("max = %d, mid = %d, min = %d\n", a, b, c);

	return 0;
}