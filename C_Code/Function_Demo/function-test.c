#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//max�Ǻ��������֣�i��j����ʽ����������β� void��ʾ����û�з���ֵ
void max1(int i, int j)//�����ֵ�������䴦��
{
	if (i > j)
		printf("%d\n", i);
	else
		printf("%d\n", j);
}

int max2(int i, int j)//�����ֵ
{
	if (i > j)
		return i;
	else
		return j;
}


int main01(void)//01
{
	int a, b, c, d, e, f;

	a = 1, b = 2, c = 3, d = 9, e = -5, f = 100;//���ű���ʽ����ִ�е�һ��������ֵΪ���һ����ֵ��������i=()=100���˴�Ϊ��ʾ���㣬���Ƽ�����д��
	
	printf("%d\n", max2(a, b));
	printf("%d\n", max2(c, d));
	printf("%d\n", max2(e, f));


	/*
	max1(a, b);
	max1(c, d);
	max1(e, f);
	*/

/*
	if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);

	if (c > d)
		printf("%d\n", c);
	else
		printf("%d\n", d);

	if (e > f)
		printf("%d\n", e);
	else
		printf("%d\n", f);
*/

	return 0;
}