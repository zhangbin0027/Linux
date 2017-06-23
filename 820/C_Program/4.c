#include <stdio.h>
#include <stdlib.h>

void main(){
//简单选择排序对任意输入的一个10元整数数组排序（从小到大）
	int a[10];
	int i,j,min,temp;
	printf("please input 10 integeer numbers:\n");
		for(i=0;i<10;i++)
	scanf("%d",&a[i]);
		for(i=0;i<10;i++){
			min=i;
		for(j=i+1;j<i;j++){
			if(a[j]<=a[min])
			min=j;	
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<10;i++)
	printf("%-4d",a[i]);
}
