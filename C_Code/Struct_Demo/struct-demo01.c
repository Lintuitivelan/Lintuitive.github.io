#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Student//������һ���������ͣ���������������Ͷ���������ͱ���
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