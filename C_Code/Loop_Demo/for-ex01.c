/*
��ϰ��
	��1��100֮�������֮��
	��1��100֮�����������
	��1��100֮���������ƽ��ֵ
	��1��100֮�������֮�� �� ż��֮��
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main04(void)//04
{
	int i;
	int sum = 0;
	int cnt = 0;//count
	float avg;//average

	for (i = 1; i <= 100; ++i)
	{
		if (i % 2 != 0)// % ȡ��  �� (i % 2 == 1)
		{
			sum = sum + i;// sum += i;
			cnt += 1;// ++cnt;
		}
	}
	avg = 1.0*sum / cnt;//1.0Ĭ����double����

	printf("sum = %d\n",sum);
	printf("cnt = %d\n", cnt);
	printf("avg = %f\n", avg);

	return 0;
}