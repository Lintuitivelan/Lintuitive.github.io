#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int f2(void) //括号中的void表示该函数不能接收数据， int表示函数返回值是int类型的数据
{
	return 10;//向主调函数返回10
}

void g02(void)//函数名前面的void表示该函数没有返回值
{
//	return 10;//error 与9行行首的void相矛盾
}

int main02(void)//02
{
	int j = 88;
	
	j = f2();
	printf("%d\n", j);

//	j = g();//error 因为g函数没有返回值 

	return 0;
}