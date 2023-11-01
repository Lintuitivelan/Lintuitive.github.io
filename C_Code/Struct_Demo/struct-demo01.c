#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Student//定义了一个数据类型，再用这个数据类型定义基本类型变量
{
	int age;
	float score;
	char sex;
};

int main01(void)//01
{
	struct Student st = {80, 66.6, 'F' };
	return 0;
}