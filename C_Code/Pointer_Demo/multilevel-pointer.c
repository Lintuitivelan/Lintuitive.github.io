#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

//demo02
void f(int** q)
{
	//*q����p
}

void g()
{
	int i = 10;
	int* p = &i;//p��int* ���ͣ�&p ��int** ����

	f(&p);
}

int main13(void)//13
{
	g();
	return 0;
}


/*demo01
int main(void)//13
{
	int i = 10;
	int* p = &i;
	int** q = &p;
	int*** r = &q;//��ͼ���

//	r = &p;//error ��Ϊr�� int*** ���ͣ�ֻ�ܴ�� int** ���ͱ����ĵ�ַ
	printf("i = %d\n", ***r);//*r ������r������Ϊ��ַ�ı���

	return 0;
}
*/