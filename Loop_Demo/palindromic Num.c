//�ж��Ƿ��ǻ�����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main07(void)//07
{
	int val;//��Ŵ��жϵ�����
	int m;
	int sum = 0;

	printf("����������Ҫ�жϵ����֣�");
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