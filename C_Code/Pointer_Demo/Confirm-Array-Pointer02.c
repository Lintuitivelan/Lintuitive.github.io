#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void f02(int* pArr, int len)
{
	pArr[3] = 88; //��15�� a[3] ��ͬһ���������ʿ��Ըı��Ԫ�ص�ֵ
}

int main06(void)//06
{
	int a[6] = { 1,2,3,4,5,6 };

	printf("%d\n", a[3]);//4
	f02(a, 6);
	printf("%d\n", a[3]);//a[3] �ȼ��� *(a+3)  �ȼ��� pArr[3] 

	return 0;
}

/*
��������
		4
		88
*/