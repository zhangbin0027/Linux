//请编写函数void  fun(int x，int pp[]，int *n)，它的功能是：求出能整除x且不是偶数的各整数，并按从小到大的顺序放在pp所指的数组中，这些除数的个数通过形参n返回。
//例如，若x中的值为30，则有4个数符合要求，它们是1，3，5，15

#include <stdio.h>

void fun(int x,int pp[],int *n){
	int i;
	*n=0;
	for(i=1;i<=x;i+=2){
		if(x%i==0){
			pp[(*n)++]=i;
		}
	}
}

int main(){
	int x=30,pp[100],n,i;
	fun(x,pp,&n);
	for(i=0;i<n;i++){
		printf("%d ",pp[i]);
	}
	printf("\n");
	return 0;
}
