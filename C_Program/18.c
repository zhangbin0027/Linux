#include <stdio.h>
#define N 50
//编写一个函数,按参数n的要求打印出杨辉三角形
void main()
{
	int i,k;
	int n;
	int a[N][N];
	printf("请输入n：");
	scanf("%d",&n);
	for(i=0;i<N;i++)
		for(k=0;k<N;k++)
			a[i][k]=0;
	
	for(i=1;i<N;i++)
	{
		for(k=1;k<N;k++)
		{
			if(i==1&&k==N/2)
				a[i][k]=1;
			else
				a[i][k]=a[i-1][k-1]+a[i-1][k+1];
		}
	}
	printf("杨辉三角：\n");
	for(i=0;i<n+2;i++)
	{
		for(k=0;k<N;k++)
		{
			if(a[i][k]==0)
				printf(" ");
			else
				printf("%d",a[i][k]);
		}
		printf("\n");
	}
}
