#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)//13
{
	int i = 5;
	int j = 7;
	int k;

	k = i & j;
	printf("%d\n",k);

	k = i && j; //k ��ֵֻ����1��0����Ϊ&&���߼�����������ֻ��Ϊ����
	printf("%d\n", k);

	return 0;
}