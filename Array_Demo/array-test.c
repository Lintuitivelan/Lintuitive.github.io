#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main01(void)//01
{
	int a[5] = { 1,2,3,4,5 };
		//a���������֣�5��ʾ����Ԫ�صĸ�����������5��Ԫ�طֱ���a[0],a[1]...a[4]��ʾ
	int i;
	
	scanf("%d", &a[0]);
	printf("a[0] = %d\n",a[0]);

	
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);//a[i]��ʾ�� i+1 ��Ԫ��
	}
	
	return 0;
}