#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

int main12(void)//12
{
	int a[5];//��̬����  ���intռ4���ֽڣ��������ܹ�������20���ֽڣ�ÿ4���ֽڱ�������һ��int������ʹ��
	int len;
	int* pArr;
	int i;

//��̬�Ĺ���һά����
	printf("��������Ҫ��ŵ�Ԫ�صĸ�����");
	scanf("%d",&len);
	pArr = (int*)malloc(4 * len);//��̬���죬��һά����ĳ����� len ���������� pArr��ÿ��Ԫ���� int ����  
	//������ int pArr[len];  a[i] ������ *(pArr + i)

//��һά������в���  �磺�Զ�̬һά������и�ֵ
	printf("��Զ�̬һά������и�ֵ��\n");
	for (i = 0; i < len; ++i)
		scanf("%d", &pArr[i]);

//��һά����������
	printf("һά����������ǣ�\n");
	for (i = 0; i < len; ++i)
		printf("%d ", pArr[i]);

	free(pArr);//�ͷŵ���̬���������  ��̬�����޷��ֶ��ͷ�
	// ��̬���� / ��С���� ����ʹ�ú��� realloc(pArr,100)  
	//�����Ϊ50���ֽڣ�������Ϊ100�ֽڣ�ǰ50�ֽ����ݱ����������Ϊ150���ֽڣ�����СΪ100�ֽڣ���50�ֽ����ݶ�ʧ


	return 0;
}