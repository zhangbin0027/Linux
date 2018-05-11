#include <stdio.h>
//有3个数据a,b,c他们由键盘输入，编写程序将他们从大到小排序
void main()
{
	int a,b,c,t;
	printf("请输入三个数：\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a>=b)&&(a>=c))//若a最大
	{
		if(b<=c)//b和c交换
		{
			t=b;
			b=c;
			c=t;
		}	
	}
	if((b>=a)&&(b>=c))//若b最大
	{
		t=a;
		a=b;
		b=t;
		if(b<=c)
		{
			t=b;
			b=c;
			c=t;
		}
	}
	if((c>=a)&&(c>=b))//若c最大
	{
		t=a;
		a=c;
		c=t;
		if(b<=c)
		{
			t=b;
			b=c;
			c=t;
		}
	}
	printf("3个数由大到小的输出顺序为：%d<%d<%d\n",c,b,a);
}
