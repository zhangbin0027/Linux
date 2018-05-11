#include <stdio.h>
#define pi 3.1415926
//已知地球半径为6371.0KM,编写一个程序计算地球表面积的近似值，并打印输出地球的半径、π的近似值，地球的表面积
void main()
{
	float r=6371.0;
	double s;
	s=4/3*pi*r*r;
	printf("地球半径为：%5.2f\nπ的值为：%5.2f\n地球的表面积为：%e\n\n",r,pi,s);
}
