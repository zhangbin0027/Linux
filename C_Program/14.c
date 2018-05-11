#include <stdio.h>
//设圆半径为1.5，圆柱高为h=3，求圆周长，圆面积，圆球表面积和圆柱体积
#define pi 3.14

void main()
{
	float r,h;
	double c,s,sr,v;
	printf("请输入圆的半径：\n");
	scanf("%f",&r);
	printf("请输入圆柱的高：\n");
	scanf("%f",&h);
	c=2*pi*r;//圆周长
	s=pi*r*r;//圆面积
	sr=4*pi*r*r;//圆球表面积
	v=pi*r*r*h;//圆柱体积
	printf("圆的周长为%5.2f\n",c);
	printf("圆的面积为%5.2f\n",s);
	printf("圆球的表面积为%5.2f\n",sr);
	printf("圆柱的体积为%5.2f\n",v);
}
