#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

int main12(void)//12
{
	int a[5];//静态构造  如果int占4个字节，则本数组总共包含有20个字节，每4个字节被当作了一个int变量来使用
	int len;
	int* pArr;
	int i;

//动态的构造一维数组
	printf("请输入您要存放的元素的个数：");
	scanf("%d",&len);
	pArr = (int*)malloc(4 * len);//动态构造，该一维数组的长度是 len ，数组名是 pArr，每个元素是 int 类型  
	//类似于 int pArr[len];  a[i] 类似于 *(pArr + i)

//对一维数组进行操作  如：对动态一维数组进行赋值
	printf("请对动态一维数组进行赋值：\n");
	for (i = 0; i < len; ++i)
		scanf("%d", &pArr[i]);

//对一维数组进行输出
	printf("一维数组的内容是：\n");
	for (i = 0; i < len; ++i)
		printf("%d ", pArr[i]);

	free(pArr);//释放掉动态分配的数组  静态数组无法手动释放
	// 动态扩充 / 缩小数组 可以使用函数 realloc(pArr,100)  
	//如果初为50个字节，则扩充为100字节，前50字节数据保留；如果初为150个字节，则缩小为100字节，后50字节数据丢失


	return 0;
}