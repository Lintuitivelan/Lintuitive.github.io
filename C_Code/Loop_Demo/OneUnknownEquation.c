#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)//09
{
	int a, b, c;
	double delta;
	double x1, x2;
	char ch;

	do
	{
		printf("������һԪ���η��̵�����ϵ����\n");
		printf("a = ");
		scanf("%d", &a);

		printf("b = ");
		scanf("%d", &b);

		printf("c = ");
		scanf("%d", &c);

		delta = b * b - 4 * a * c;

		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("�������⣬x1 = %lf,x2 = %lf\n", x1, x2);
		}
		else if (0 == delta)
		{
			x1 = x2 = (-b) / (2 * a);
			printf("��Ψһ�⣬x1 = x2 = %lf\n", x1);
		}
		else
		{
			printf("��ʵ����\n");
		}
		printf("�������ô��Y / N��:");
		scanf(" %c",&ch);//%cǰ����ü�һ���ո�ԭ�򣺿հ׷�
	} while ('y' == ch || 'Y' == ch);


	return 0;
}