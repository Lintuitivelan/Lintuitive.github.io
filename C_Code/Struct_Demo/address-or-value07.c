#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
ʾ����
	���͵�ַ���Ƿ�������
Ŀ�ģ�
	ָ����ŵ�֮һ��
		���ٵĴ�������
		�����ڴ�С
		ִ���ٶȿ�
*/

struct Student
{
	int age;
	char sex;
	char name[100];
};//�ֺŲ���ʡ

void InputStudent(struct Student*);
void OutputStudent(struct Student*);

int main07(void)//07
{
	struct Student st;
	printf("%d\n",sizeof(st));//stռ108���ֽ� �������룬������֣����ԭ���֪ʶ

	InputStudent(&st);//�Խṹ���������  ���뷢��st�ĵ�ַ
	OutputStudent(&st);//�Խṹ��������  ���Է���st�ĵ�ַ��Ҳ����ֱ�ӷ���st������
	//��Ϊ�˼����ڴ�ĺķѣ�ҲΪ�����ִ���ٶȣ��Ƽ����͵�ַ

	return 0;
}

void OutputStudent(struct Student *pst)
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
//	printf("%d\n", sizeof(pst));
}

void InputStudent(struct Student* pstu)//pstuֻռ8���ֽ�
{
	(*pstu).age = 10;
	strcpy(pstu->name, "����");
	pstu->sex = 'F';
}