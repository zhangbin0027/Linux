#include <stdio.h>
#include <math.h>
//已知三角形的面积公式，编写一个程序读入a,b,c的值，计算出面积F，并输出三条边及面积的值
void main()
{
	float a,b,c,s;
	double f;
	printf("请输入三条边的值:\n");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	f=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三条边长分别为:a=%5.2f,b=%5.2f,c=%5.2f\n",a,b,c);
	printf("三角形的面积为：f=%5.2f\n",f);
}
