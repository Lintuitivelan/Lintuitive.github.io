#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

enum WeekDay//ֻ������һ���������ͣ���û�ж�����������������͵������� enum WeekDay
{
	Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday  //Ϊö�ٳ���
}; //Ĭ�ϵ�һ��ֵΪ0����� Monday=4 ����д����ô��һ��ֵ����4��һ����ʵ�����塣

int main10(void)//10
{
	//int day;//day����� int ���Ͳ�����
	enum WeekDay day = Sunday;
	printf("%d\n",day);
	

	return 0;
}