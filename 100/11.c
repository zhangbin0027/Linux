/*下列程序定义了NXN的二维数组，并在主函数中自动赋值。请编写函数fun(int a[][N]，该函数的功能是：使数组左下半三角元素中的值全部置成0。*/
#include <stdio.h>
#define N 4
void fun(int a[][N]){
	int i,j;
	for(i=1;i<N;i++){
		for(j=0;j<i;j++){
			a[i][j]=0;
		}
	}
}

int main(){
	int A[N][N]={
		1,2,3,4,
		5,6,7,8,
		9,8,7,6,
		5,4,3,2,
	};
	fun(A);
	int i,j;
	for(i=0;i<N;++i){
		for(j=0;j<N;++j)
			printf("%d",A[i][j]);
		printf("\n");
	}
	return 0;
}
