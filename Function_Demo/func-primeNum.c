#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

bool IsPrime01(int val)//ֻ�жϣ�������ʵ�ֺ������ܵ�һ  �õ�����������ʵ�֣�����ĸ����Ըߣ�����������ߣ�
{
	int i;

	for (i = 2; i < val; ++i)
	{
		if (val % i == 0)
			break;
	}
	if (i == val)
		return true;
	else
		return false;
}

int main04(void)//04
{
	int m;

	scanf("%d", &m);//scanf�о�����Ҫʹ�÷�������Ʒ��������ǲ�Ҫ�� \n

	if (IsPrime01(m))
		printf("Yes!\n");
	else
		printf("No!\n");

	float i = 99.9;
	printf("i = %f\n", i);//�������޷�׼ȷ�洢 ������Ϊ i = 99.900002

	return 0;
}

