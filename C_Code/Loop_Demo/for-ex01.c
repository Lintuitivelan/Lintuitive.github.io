/*
练习：
	求1到100之间的奇数之和
	求1到100之间的奇数个数
	求1到100之间的奇数的平均值
	求1到100之间的奇数之和 与 偶数之和
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main04(void)//04
{
	int i;
	int sum = 0;
	int cnt = 0;//count
	float avg;//average

	for (i = 1; i <= 100; ++i)
	{
		if (i % 2 != 0)// % 取余  或 (i % 2 == 1)
		{
			sum = sum + i;// sum += i;
			cnt += 1;// ++cnt;
		}
	}
	avg = 1.0*sum / cnt;//1.0默认是double类型

	printf("sum = %d\n",sum);
	printf("cnt = %d\n", cnt);
	printf("avg = %f\n", avg);

	return 0;
}