#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void f02(int* pArr, int len)
{
	pArr[3] = 88; //和15行 a[3] 是同一个变量，故可以改变该元素的值
}

int main06(void)//06
{
	int a[6] = { 1,2,3,4,5,6 };

	printf("%d\n", a[3]);//4
	f02(a, 6);
	printf("%d\n", a[3]);//a[3] 等价于 *(a+3)  等价于 pArr[3] 

	return 0;
}

/*
输出结果：
		4
		88
*/