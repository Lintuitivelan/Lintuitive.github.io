/*
动态构造存放学生信息的结构体数组
动态构造一个数组，存放学生信息，然后按分数排序输出
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

//	动态构造
	printf("请输入学生总人数：\n");//len
	scanf("%d", &len);
	pArr = (struct Student*)malloc(len * sizeof(struct Student));//动态构造结构体

//输入学生信息
	for (i = 0; i < len; ++i)
	{
		printf("请输入第 %d 个学生信息：\n", i + 1);
		printf("age = ");
		scanf("%d", &pArr[i].age);//pArr[i]为结构体第i个变量

		printf("name = ");
		scanf("%s", pArr[i].name);//name是数组名，本就是数组首元素地址，所以无需加 & （取地址符），不能够改成 &pArr[i].name

		printf("score = ");
		scanf("%f", &pArr[i].score);//%f 表示 float 类型
	}

	printf("\n\n学生信息如下\n");//输出窗口由页面控制，由 Html CSS Javascript 控制

//排序 按学生成绩升序排序  冒泡算法
	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (pArr[j].score > pArr[j + 1].score)//判断成绩大小（> 升序， < 降序），互换结构体变量整体而不是成绩，故 if body内部不需加 .score 
			{
				t = pArr[j];
				pArr[j] = pArr[j + 1];
				pArr[j + 1] = t;
			}
		}
	}

//输出学生信息
	for (i = 0; i < len; ++i)
	{
		printf("第%d个学生信息：\n", i + 1);
		printf("age = %d\n",pArr[i].age);
		printf("name = %s\n",pArr[i].name);
		printf("score = %f\n",pArr[i].score);
		printf("\n");
	}

	return 0;
}