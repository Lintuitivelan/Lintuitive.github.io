#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

enum WeekDay//只定义了一个数据类型，并没有定义变量，该数据类型的名字是 enum WeekDay
{
	Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday  //为枚举常量
}; //默认第一个值为0，如果 Monday=4 这样写，那么第一个值就是4，一般无实际意义。

int main10(void)//10
{
	//int day;//day定义成 int 类型不合适
	enum WeekDay day = Sunday;
	printf("%d\n",day);
	

	return 0;
}