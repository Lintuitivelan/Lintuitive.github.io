#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//第一种方式
struct Student
{
	int age;
	float score;
	char sex;
};

//第二种方式 不推荐
struct Student2
{
	int age;
	float score;
	char sex;
}st2;

//第三种方式 不推荐
struct
{
	int age;
	float score;
	char sex;
}st3;

int main02(void)//02
{
	struct Student st = { 80,66.6,'F' };
	return 0;
}