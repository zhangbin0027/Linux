#include "stdio.h"
//用递归的方法编写程序，输入一个非负整数，结果输出这个数的逆序十进制数
void print(int x)
{
	if(x<10)
		printf("%d",x);
	else
	{
		printf("%d",x%10);
		print(x/10);
	}	
}

void main()
{
	int x;
	printf("请输入一个非负整数：\n");
	scanf("%d",&x);
	printf("逆序输出为：");
	print(x);
	printf("\n");
}
