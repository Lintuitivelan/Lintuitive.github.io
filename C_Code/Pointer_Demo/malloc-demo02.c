#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

void change(int* q)
{
//	*p = 200;//error
//  q = 200;
//  **q = 200;//error
	*q = 200;
//	free(q);// ��q��ָ����ڴ��ͷŵ�
}

int main11(void)//11
{
	int* p = (int*)malloc(sizeof(int));//sizeof(int)����ֵ��int��ռ�ֽ���
	*p = 10;//*p ������ p ������Ϊ��ַ�ı���

	printf("%d\n", *p);//10
	change(p);//p�� int* ����
	printf("%d\n",*p);//200

	return 0;
}