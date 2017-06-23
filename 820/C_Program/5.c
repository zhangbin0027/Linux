#include <stdio.h>
//利用冒泡法将10个数组元素按从小到大排序
void main(){
	int a[10];	
	int i,j,temp;
printf("please input 10 numbers:\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
		for(i=0;i<9;i++)
			for(j=0;j<9-i;j++)
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			for(i=0;i<10;i++)
			printf("%-4d",a[i]);
}
