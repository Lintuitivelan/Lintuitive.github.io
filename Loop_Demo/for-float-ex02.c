/*
计算
1 + 1/2 + 1/3 +...+ 1/100
提示：强制类型转化
注意：循环中更新的变量不能定义成浮点型
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

	//  sum = sum + (float)(1 / i); 这样写是不对的
	//也可以但不推荐：sum = sum + 1 / (float)(i);
	}
	printf("sum = %f\n",sum);//float必须用 %f 输出

	return 0;
}