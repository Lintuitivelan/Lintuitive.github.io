#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main04(void)//04
{
	int a[5];
	int b[5];

//	a = b;//error a�ǳ���
	printf("%#X\n",&a[0]);// %#X ��ʾ��ʮ���������
	printf("%#X\n", a);

	return 0;
}