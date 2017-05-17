//m个人的成绩存放在score数组中，请编写函数fun，它的功能是：将低于平均分的人数作为函数值返回，将低于平均分的分数放在below所指的数组中。
//例如，当score数组中的数据为10、20、30、40、50、60、70、80、90时，函数返回的人数应该是4，below中的数据应为10、20、30、40。

#include <stdio.h>
#define N 10

int fun(int score[],int n,int below[])
{
	double avg=0;
	int i;
	for(i=0;i<n;i++)
	{
		avg +=score[i];
	}
	avg/=n;
	int m=0;
	for(i=0;i<n;i++)
	{
		if(score[i]<avg)
		{
			below[m++]=score[i];
		}
	}
	return m;
}

int main()
{
	int score[N]={10,20,30,40,50,60,70,80,90,100},below[N];
	int ret=fun(score,N,below);
	printf("%d\n",ret);
	int i;
	for(i=0;i<ret;i++)
	{
		printf("%d",below[i]);
	}
	printf("\n");
	return 0;
}
