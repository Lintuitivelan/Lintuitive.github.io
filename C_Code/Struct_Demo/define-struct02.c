#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��һ�ַ�ʽ
struct Student
{
	int age;
	float score;
	char sex;
};

//�ڶ��ַ�ʽ ���Ƽ�
struct Student2
{
	int age;
	float score;
	char sex;
}st2;

//�����ַ�ʽ ���Ƽ�
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