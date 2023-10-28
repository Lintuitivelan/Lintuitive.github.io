#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main04(void)//04
{
	int a[5];
	int b[5];

//	a = b;//error a是常量
	printf("%#X\n",&a[0]);// %#X 表示以十六进制输出
	printf("%#X\n", a);

	return 0;
}