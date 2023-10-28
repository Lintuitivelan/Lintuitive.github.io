#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
示例：
	发送地址还是发送内容
目的：
	指针的优点之一：
		快速的传递数据
		耗用内存小
		执行速度快
*/

struct Student
{
	int age;
	char sex;
	char name[100];
};//分号不能省

void InputStudent(struct Student*);
void OutputStudent(struct Student*);

int main07(void)//07
{
	struct Student st;
	printf("%d\n",sizeof(st));//st占108个字节 机器对齐，填充数字，组成原理的知识

	InputStudent(&st);//对结构体变量输入  必须发送st的地址
	OutputStudent(&st);//对结构体变量输出  可以发送st的地址，也可以直接发送st的内容
	//但为了减少内存的耗费，也为了提高执行速度，推荐发送地址

	return 0;
}

void OutputStudent(struct Student *pst)
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
//	printf("%d\n", sizeof(pst));
}

void InputStudent(struct Student* pstu)//pstu只占8个字节
{
	(*pstu).age = 10;
	strcpy(pstu->name, "张三");
	pstu->sex = 'F';
}