#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)//03
{
	float score ;

	printf("请输入你的考试成绩：");
	scanf("%f", &score);

	if (score > 100) {
		printf("这是在做梦！\n");
	}
	else if (score >= 90 && score <= 100) {  //不能写成90 <= score <= 100
		printf("优秀！\n");
	}
	else if (score >= 80 && score < 90) {
		printf("良好！\n");
	}
	else if (score >= 60 && score < 80) {
		printf("及格！\n");
	}
	else if (score >= 0 && score < 60) {
		printf("不及格！\n");
	}
	else  {
		printf("输入有误！请重新输入！\n");
	}

	return 0;
}