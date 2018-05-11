//请编写函数fun，它的功能是：求出1到1000之内能被7或11整除、但不能同时被7和11整除的所有整数并将它们放在a所指的数组中，通过n返回这些数的个数

#include <stdio.h>

int fun(int a[],int *n){
	*n=0;
	int i;
	for(i=7;i<=100;++i){
		if((i%7==0||i%11==0) && i%77!=0){
			a[(*n)++]=i;
		}
	}
	return *n;
}

int main(){
	int A[100],n;
	fun(A,&n);
	printf("%d\n",n);
	int i;
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	return 0;
}
