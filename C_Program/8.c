#include <stdio.h>
//编写一个可以交换两个变量数值的函数
swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main()
{
	int a,b,*pa,*pb;
	printf("please input 2 integer numbers:\n");
	scanf("%d%d",&a,&b);
	pa=&a;
	pb=&b;
	swap(pa,pb);
	printf("%d %d",a,b);
	return 0;
}
