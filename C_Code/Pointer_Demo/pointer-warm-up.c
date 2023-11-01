#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main01(void)//01
{
	int* p;//p是变量的名字，int * 表示p变量存放的是int类型变量的地址
			//int *p；不表示定义了一个名字叫做*p的变量
			//int *p；应理解为 p是变量名，p变量的数据类型是 int* 类型
			//		所谓 int* 类型就是存放 int变量地址 的类型
	int i = 3;
	int j;

	//p = &i;//ok
	//p = i;//? error 因为类型不一致，p只能存放int类型变量的地址，不能存放int类型变量的值
	//p = 55;//? error 原因同上 but 2023年VS可以过编译ovo

	p = &i;
	/*
		1.p保存了i的地址，因此p指向i
		2.p不是i，i也不是p，更准确地说：修改 p 的值不影响 i 的值，修改 i 的值也不会影响 p 的值
		3.如果一个指针变量指向了某个普通变量，则
			*指针变量 就完全等同于 普通变量
		  例子：
				如果p是个指针变量，并且p存放了普通变量i的地址
				则p指向了普通变量i
				*p 就完全等同于 i
				或者说：在所有出现 *p 的地方都可以替换成 i
					   在所有出现 i 的地方都可以替换成 *p
				*p 就是以 p的内容（i） 为地址的变量
	*/

	j = *p;
	printf("i = %d, j = %d, *p = %d\n", i, j, *p);

	return 0;
}