#include "stdio.h"
//用递归的方法求幂函数
float power(float m,int n)//递归函数
{
	if(n==0)
		return 1;
	else 
		return m*power(m,(n-1));	
}

void main()
{
	float m;
	int n;
	printf("请输入m:\n");
	scanf("%f",&m);
	printf("请输入n:\n");
	scanf("%d",&n);
	printf("%5.2f的%d次方为:%5.2f\n",m,n,power(m,n));
}
