/*
	��1��ĳ������֮�䣨���������֣����е����������������
	ֻ��main����ʵ�֣��о����ԣ�
	1.���븴���Բ���; 2.���벻��������
	------------------------------------------------
	��һ���������ж�һ�������Ƿ���������
	�ŵ㣺����ɶ��Խϸߣ������Խϸ�
	ȱ�㣺�ɸ�������Ȼ���Ƿǳ��ߣ��� ��1000�����ֵĴ�1���䱾�������� �����踴д����
	------------------------------------------------
	������������ʵ����1��ĳ������֮�����е���������������� ����һ����Ƚ� ���������٣��������Ը���
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

//������������ �ж�m�Ƿ����������Ƿ���true�����Ƿ���false
bool IsPrime(int m)
{
	int i;

	for (i = 2; i < m; ++i)
	{
		if (0 == m % i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}

//�����������ǰ�1��n֮�����е���������ʾ�������
void TraverseVal(int n)//����val
{
	int i;

	for (i = 2; i <= n; ++i)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
}

int main06(void)//06
{
	int val;

	scanf("%d",&val);
	TraverseVal(val);

	return 0;
}