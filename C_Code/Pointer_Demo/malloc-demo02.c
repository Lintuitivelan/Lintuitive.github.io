#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

void change(int* q)
{
//	*p = 200;//error
//  q = 200;
//  **q = 200;//error
	*q = 200;
//	free(q);// 把q所指向的内存释放掉
}

int main11(void)//11
{
	int* p = (int*)malloc(sizeof(int));//sizeof(int)返回值是int所占字节数
	*p = 10;//*p 代表以 p 的内容为地址的变量

	printf("%d\n", *p);//10
	change(p);//p是 int* 类型
	printf("%d\n",*p);//200

	return 0;
}