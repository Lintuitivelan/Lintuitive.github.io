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
	struct Student st = { 80,66.6,'F' };//��ʼ�� �����ͬʱ����ֵ
	struct Student* pst = &st;// &st ���ܸĳ�st  ��������һ��ָ�������

	pst->age = 88;//�ڶ��ַ�ʽ
	st.score = 66.6f;//��һ�ַ�ʽ  //66.6��C������Ĭ���� double ���ͣ����ϣ��һ��ʵ���� float ���ͣ��������ĩβ�� f �� F �����66.6��double���ͣ�66.6f��float����
	printf("%d %f\n",st.age,pst->score);

	return 0;
}