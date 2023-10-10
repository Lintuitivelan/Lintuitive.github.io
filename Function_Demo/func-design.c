/*
	求1到某个数字之间（包括该数字）所有的素数，并将其输出
	只用main函数实现，有局限性：
	1.代码复用性不高; 2.代码不容易理解
	------------------------------------------------
	用一个函数来判断一个数字是否是素数：
	优点：代码可读性较高，复用性较高
	缺点：可复用性仍然不是非常高，如 求1000个数字的从1到其本身的素数 则仍需复写代码
	------------------------------------------------
	用两个函数来实现求1到某个数字之间所有的素数，并将其输出 和上一代相比较 代码量更少，可重用性更高
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

//本函数功能是 判断m是否是素数，是返回true，不是返回false
bool IsPrime(int m)
{
	int i;

	for (i = 2; i < m; ++i)
	{
		if (0 == m % i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}

//本函数功能是把1到n之间所有的素数在显示器上输出
void TraverseVal(int n)//遍历val
{
	int i;

	for (i = 2; i <= n; ++i)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
}

int main06(void)//06
{
	int val;

	scanf("%d",&val);
	TraverseVal(val);

	return 0;
}