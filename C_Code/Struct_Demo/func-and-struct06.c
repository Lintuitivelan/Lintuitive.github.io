#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
ͨ��������ɶԽṹ���������������
*/

struct Student
{
	int age;
	char sex;
	char name[100];
};//�ֺŲ���ʡ

void InputStudent1(struct Student*);
void OutputStudent1(struct Student);

int main06(void)//06
{
	struct Student st;
	
	InputStudent1(&st);//�Խṹ���������  ���뷢��st�ĵ�ַ
//	printf("%d %c %s\n",st.age, st.sex, st.name);
	OutputStudent1(st);//�Խṹ��������  ���Է���st�ĵ�ַ��Ҳ����ֱ�ӷ���st������

	return 0;
}

void OutputStudent1(struct Student ss)
{
	printf("%d %c %s\n", ss.age, ss.sex, ss.name);
}

void InputStudent1(struct Student* pstu)//pstuֻռ8���ֽ�
{
	(*pstu).age = 10;
	strcpy(pstu->name, "����");
	pstu->sex = 'F';
}



/*
//�������޷��޸��������� st ��ֵ�����Ա������Ǵ����
void InputStudent(struct Student stu)
{
	stu.age = 10;
	strcpy(stu.name, "����");//�ַ�����������ʵ��  ����д�� stu.name = "����"; //�ַ����Ĵ���
	stu.sex = 'F';
}
*/