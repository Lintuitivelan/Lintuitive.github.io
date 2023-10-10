#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

bool IsPrime01(int val)//只判断，不处理，实现函数功能单一  用单独的来函数实现，代码的复用性高（可重用性提高）
{
	int i;

	for (i = 2; i < val; ++i)
	{
		if (val % i == 0)
			break;
	}
	if (i == val)
		return true;
	else
		return false;
}

int main04(void)//04
{
	int m;

	scanf("%d", &m);//scanf中尽量不要使用非输入控制符，尤其是不要用 \n

	if (IsPrime01(m))
		printf("Yes!\n");
	else
		printf("No!\n");

	float i = 99.9;
	printf("i = %f\n", i);//浮点数无法准确存储 输出结果为 i = 99.900002

	return 0;
}

