/*
����
1 + 1/2 + 1/3 +...+ 1/100
��ʾ��ǿ������ת��
ע�⣺ѭ���и��µı������ܶ���ɸ�����
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main05(void)//05
{
	int i;
	//float i;
	float sum = 0;

	for (i = 1; i <= 100; ++i)
	{
		sum = sum + 1.0 / i;

	//  sum = sum + (float)(1 / i); ����д�ǲ��Ե�
	//Ҳ���Ե����Ƽ���sum = sum + 1 / (float)(i);
	}
	printf("sum = %f\n",sum);//float������ %f ���

	return 0;
}