#include <stdio.h>
//求一个3*3矩阵对角线元素之和
int main()
{
	int a[3][3]={{1,2,3},{2,3,1},{3,2,1}};
	int i,sum=0;
	for(i=0;i<3;i++)
		sum=sum+a[i][i];	
	printf("%d\n",sum);
	return 0;
}
