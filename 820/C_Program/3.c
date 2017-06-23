#include <stdio.h>
#include <math.h>
//编写一个求二元一次方程组的根的程序
void main()
{
	int a,b,c;
	float p,q,disc,x1,x2;
	printf("please input three number:\n");
	scanf("%d %d %d",&a,&b,&c);	
	disc=b*b-4*a*c;
	p=-b/(2*a);
	q=sqrt(disc)/(2*a);
	x1=p+q;
	x2=p-q;
	printf("x1=%5.2f\t x2=%5.2f\n",x1,x2);
	return 0;
}
