#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int*, int*);

int main02(void)//02
{
	int a = 3;
	int b = 5;

	swap(&a,&b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

//������ɻ���
void swap(int* p, int* q)//�β�������p��q������ʵ�����ݵ���p��q�������� *p �� *q
{
	int t;//���Ҫ���� *p �� *q ��ֵ����t���붨���int�����ܶ����int *�������﷨��������ں���û�г���==

	t = *p; //p��int*��*p ��int
	*p = *q;
	*q = t;

	return;
}

//������ɻ�������
void swap02(int* p, int* q)
{
	int* t;//���Ҫ����p��q��ֵ����t������int *��������int

	t = p;
	p = q;
	q = t;

	return;
}