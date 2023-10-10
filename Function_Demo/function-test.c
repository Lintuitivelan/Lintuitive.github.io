#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//max是函数的名字，i和j是形式参数，简称形参 void表示函数没有返回值
void max1(int i, int j)//找最大值，并对其处理
{
	if (i > j)
		printf("%d\n", i);
	else
		printf("%d\n", j);
}

int max2(int i, int j)//找最大值
{
	if (i > j)
		return i;
	else
		return j;
}


int main01(void)//01
{
	int a, b, c, d, e, f;

	a = 1, b = 2, c = 3, d = 9, e = -5, f = 100;//逗号表达式，先执行第一个，整体值为最后一个的值，即假设i=()=100，此处为演示方便，不推荐这样写。
	
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