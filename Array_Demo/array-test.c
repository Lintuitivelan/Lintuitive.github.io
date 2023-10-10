#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main01(void)//01
{
	int a[5] = { 1,2,3,4,5 };
		//a是数组名字，5表示数组元素的个数，并且这5个元素分别用a[0],a[1]...a[4]表示
	int i;
	
	scanf("%d", &a[0]);
	printf("a[0] = %d\n",a[0]);

	
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);//a[i]表示第 i+1 个元素
	}
	
	return 0;
}