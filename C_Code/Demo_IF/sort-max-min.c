#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main05(void)
{
	int a, b, c;
	int t;

	printf("�����������������м��Կո�ָ�����");
	scanf("%d %d %d", &a, &b, &c);

	//��д������� max = a��mid = b�� min = c

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