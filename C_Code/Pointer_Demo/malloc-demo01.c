#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
int main10(void)//10
{
	int i = 5;//分配了4个字节 静态分配
	int* p = (int*)malloc(4);
	/*
	1. 要使用 malloc 函数，必须添加 malloc.h 头文件（but 现在好像不用了？
	2. malloc 函数只有一个形参，并且形参是整形
	3. 4表示请求系统为本程序分配4个字节
	4. malloc 函数只能返回第一个字节的地址
	5. 7行分配了8 + 4 = 12个字节，p变量占8个字节，p指向的内存占4个字节
	6. p本身所占的内存是静态分配的，p所指向的内存是动态分配的
	*/
	*p = 5;//*p 代表的就是一个int变量，只不过 *p 这个整型变量的内存分配方式和6行的 i 变量的内存分配方式不同
	free(p);//表示把 p所指向的内存 给释放掉，p本身的内存是静态的，不能由程序员手动释放，p本身的内存只能在p变量所在的函数运行终止时 由系统自动释放。

	printf("%d\n", sizeof(p));

	return 0;
}