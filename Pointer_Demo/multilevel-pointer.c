#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

//demo02
void f(int** q)
{
	//*q就是p
}

void g()
{
	int i = 10;
	int* p = &i;//p是int* 类型，&p 是int** 类型

	f(&p);
}

int main13(void)//13
{
	g();
	return 0;
}


/*demo01
int main(void)//13
{
	int i = 10;
	int* p = &i;
	int** q = &p;
	int*** r = &q;//画图理解

//	r = &p;//error 因为r是 int*** 类型，只能存放 int** 类型变量的地址
	printf("i = %d\n", ***r);//*r 代表以r的内容为地址的变量

	return 0;
}
*/