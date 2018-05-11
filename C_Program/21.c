#include <stdio.h>
#include <math.h>
//编写函数，将20个数读入计算机，并统计其中的正数，负数和零的个数
void main()
{
	float a;
	int b=0;//大于0的个数
	int c=0;//小于0的个数
	int d=0;//0的个数
	int i=0;//循环变量
	printf("请输入20个数：\n");
	for(i=0;i<20;i++)
	{
		scanf("%f",&a);
		if(a>0)
			b++;
		else if(a<0)
			c++;
		else 
			d++;
	}
	printf("大于0的个数有:%d个\n",b);
	printf("小于0的个数有:%d个\n",c);
	printf("0有：%d个\n",d);
}
