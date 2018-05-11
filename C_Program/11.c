#include <stdio.h>
//已知摄氏度与华氏度的换算公式C=5/9*(F-32)
//编写一个程序求华氏摄氏度为30F，70F，100F，150F时的摄氏温度
void main()
{	
	double c;
	float f=0.0;
	int i;
	for(i=0;i<=3;i++)
	{
		printf("请输入华氏摄氏度:\n");
		scanf("%f",&f);
		c=5*(f-32.0)/9;
		printf("当华氏温度为%5.2f时，摄氏温度为:%5.2f\n",f,c);
	};
	printf("\n"); 
}
