#include <stdio.h>
#include <math.h>
//给出一个不多于5位数的正整数；要求求出他是几位数；分别输出每一位数字；求出逆序数
void main()
{
	int x;
	int t;
	int a,b,c,d,e;
	printf("请输入一个不多于5位的正整数:");
	scanf("%d",&x);
	if((x>99999||x<=0))
		printf("输入的数据不合法，请重新输入\n");
	else{
		a=x%10;x=x/10;
		b=x%10;x=x/10;
		c=x%10;x=x/10;
		d=x%10;x=x/10;
		e=x%10;
	
		if(e>0)//万位数不为0
		{
			printf("每一位数字为：%d %d %d %d %d\n",e,d,c,b,a);
			printf("逆序为:%d %d %d %d %d\n",a,b,c,d,e);
			t=5;
		}else if(d>0)//千位数不为0
		{
			printf("每一位数字为:%d %d %d %d\n",d,c,b,a);
			printf("逆序为：%d %d %d %d\n",a,b,c,d);
			t=4;
		}else if(c>0)//百位数不为0
		{
			printf("每一位数字为:%d,%d,%d\n",c,b,a);
			printf("逆序为: %d %d %d\n",a,b,c);
		t=3;
		}else if(b>0)
		{
			printf("每一位数字为:%d,%d\n",b,a);	
			printf("逆序为:%d %d\n",a,b);
			t=2;
		}else
		{
			printf("每一位数字为:%d\n",a);	
			t=1;
		}
		printf("输入的位数为：%d\n",t);
	}
}
