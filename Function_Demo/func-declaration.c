#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void f05(void);//函数需要先定义后使用

void g(void)
{
	f();//因为函数f的定义放在了调用f语句的后面，所以语法出错
}

void f05(void)
{
	printf("haha!\n");
}

//void f(void);//函数声明，分号不能丢。

int main05(void)//05
{
	g();

	return 0;
}

