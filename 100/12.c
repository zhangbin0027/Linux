/*下列程序定义了NXN的二维数组，并在主函数中赋值。请编写函数fun，函数的功能是：求出数组周边元素的平均值并作为函数值返回给主函数中的s。*/
#include <stdio.h>
#define N 4

void fun(int a[][N],int *s){
	int i,j;
	*s=0;
	for(i=0;i<N;i++){
		*s+=a[0][i]+a[N-1][i];
	}
	for(j=1;j<N-1;++j){
		*s+=a[j][0]+a[j][N-1];
	}
	*s/=N*4-4;
}

int main(){
	int A[N][N]={
		1,2,3,4,
		5,6,7,8,
		9,8,7,6,
		5,4,3,2
	};
	int avg;
	fun(A,&avg);
	printf("%d\n",avg);
	return 0;
}
