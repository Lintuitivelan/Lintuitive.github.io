#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void f05(void);//������Ҫ�ȶ����ʹ��

void g(void)
{
	f();//��Ϊ����f�Ķ�������˵���f���ĺ��棬�����﷨����
}

void f05(void)
{
	printf("haha!\n");
}

//void f(void);//�����������ֺŲ��ܶ���

int main05(void)//05
{
	g();

	return 0;
}

