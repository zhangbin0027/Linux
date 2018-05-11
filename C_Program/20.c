#include "stdio.h"
#include "math.h"
#define pi 3.1415926
//编写程序，从0-180度每隔5度输出该角度的正弦和余弦的函数值
int main()
{
	double x,y;
	int i;
	double t,s;//i为角度值，t为弧度值
	for(i=0;i<36;i++)
	{
		s=5*(i+1);//将角度划分
		t=s*pi/180;//转化为弧度制
		x=sin(t);
		y=cos(t);
	printf("当x=%2.0f度时,sin(x)=%5.4f,cos(x)=%5.4f\n",s,x,y);
	}		
}

