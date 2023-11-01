#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
通过函数完成对结构体变量的输入和输出
*/

struct Student
{
	int age;
	char sex;
	char name[100];
};//分号不能省

void InputStudent1(struct Student*);
void OutputStudent1(struct Student);

int main06(void)//06
{
	struct Student st;
	
	InputStudent1(&st);//对结构体变量输入  必须发送st的地址
//	printf("%d %c %s\n",st.age, st.sex, st.name);
	OutputStudent1(st);//对结构体变量输出  可以发送st的地址，也可以直接发送st的内容

	return 0;
}

void OutputStudent1(struct Student ss)
{
	printf("%d %c %s\n", ss.age, ss.sex, ss.name);
}

void InputStudent1(struct Student* pstu)//pstu只占8个字节
{
	(*pstu).age = 10;
	strcpy(pstu->name, "张三");
	pstu->sex = 'F';
}



/*
//本函数无法修改主函数中 st 的值，所以本函数是错误的
void InputStudent(struct Student stu)
{
	stu.age = 10;
	strcpy(stu.name, "张三");//字符串拷贝函数实现  不能写成 stu.name = "张三"; //字符串的处理
	stu.sex = 'F';
}
*/