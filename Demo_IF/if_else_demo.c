#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main02(void)
{
	double delta = -2;

	if (delta > 0)
		printf("有两个解！\n");
	else if (delta == 0)
		printf("有一个唯一解！\n");
	else
		printf("无解！\n");

	return 0;
}