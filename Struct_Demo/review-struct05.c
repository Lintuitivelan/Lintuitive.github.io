#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Student
{
	int age;
	char sex;
	char name[100];
};//分号不能省。只是定义了一个数据类型，而不是一个变量。

int main05(void)//05
{
	struct Student st = {20,'F',"小王"};
	struct Student* pst = &st;

	printf("%d %c %s\n", st.age, st.sex, st.name);
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);//pst->age 转化成 (*pst).age 等价于 st.age

	return 0;
}