#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};


int main04(void)//04
{
	struct Student st = { 80,66.6,'F' };//初始化 定义的同时赋初值
	struct Student* pst = &st;// &st 不能改成st  （定义了一个指针变量）

	pst->age = 88;//第二种方式
	st.score = 66.6f;//第一种方式  //66.6在C语言中默认是 double 类型，如果希望一个实数是 float 类型，则必须在末尾加 f 或 F ，因此66.6是double类型，66.6f是float类型
	printf("%d %f\n",st.age,pst->score);

	return 0;
}