#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int f2(void) //�����е�void��ʾ�ú������ܽ������ݣ� int��ʾ��������ֵ��int���͵�����
{
	return 10;//��������������10
}

void g02(void)//������ǰ���void��ʾ�ú���û�з���ֵ
{
//	return 10;//error ��9�����׵�void��ì��
}

int main02(void)//02
{
	int j = 88;
	
	j = f2();
	printf("%d\n", j);

//	j = g();//error ��Ϊg����û�з���ֵ 

	return 0;
}