#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main08(void)//08
{
	int i = 5;
	int j = 10;//i j �ռ䲻���� ��ַ���������
	int* p = &i;
	int* q = &j;
	int a[5];
	p = &a[1];
	q = &a[4];

	printf("p��q��ָ��ĵ�Ԫ��� %d ����Ԫ\n", (q - p));

	return 0;
}