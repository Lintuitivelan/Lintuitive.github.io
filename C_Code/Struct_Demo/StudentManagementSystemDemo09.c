/*
��̬������ѧ����Ϣ�Ľṹ������
��̬����һ�����飬���ѧ����Ϣ��Ȼ�󰴷����������
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

struct Student
{
	int age;
	char name[100];
	float score;
};

int main09(void)//09
{
	int len;
	struct Student* pArr;
	int i, j;
	struct Student t;

//	��̬����
	printf("������ѧ����������\n");//len
	scanf("%d", &len);
	pArr = (struct Student*)malloc(len * sizeof(struct Student));//��̬����ṹ��

//����ѧ����Ϣ
	for (i = 0; i < len; ++i)
	{
		printf("������� %d ��ѧ����Ϣ��\n", i + 1);
		printf("age = ");
		scanf("%d", &pArr[i].age);//pArr[i]Ϊ�ṹ���i������

		printf("name = ");
		scanf("%s", pArr[i].name);//name����������������������Ԫ�ص�ַ����������� & ��ȡ��ַ���������ܹ��ĳ� &pArr[i].name

		printf("score = ");
		scanf("%f", &pArr[i].score);//%f ��ʾ float ����
	}

	printf("\n\nѧ����Ϣ����\n");//���������ҳ����ƣ��� Html CSS Javascript ����

//���� ��ѧ���ɼ���������  ð���㷨
	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (pArr[j].score > pArr[j + 1].score)//�жϳɼ���С��> ���� < ���򣩣������ṹ�������������ǳɼ����� if body�ڲ������ .score 
			{
				t = pArr[j];
				pArr[j] = pArr[j + 1];
				pArr[j + 1] = t;
			}
		}
	}

//���ѧ����Ϣ
	for (i = 0; i < len; ++i)
	{
		printf("��%d��ѧ����Ϣ��\n", i + 1);
		printf("age = %d\n",pArr[i].age);
		printf("name = %s\n",pArr[i].name);
		printf("score = %f\n",pArr[i].score);
		printf("\n");
	}

	return 0;
}