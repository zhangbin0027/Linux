//请编写一个函数void fun(int m，int k，int xx[])，该函数的功能是：将大于整数m且紧靠m的k个素数存入xx所指的数组中。
//例如，若输入：17，5，则应输出：19，23，29，31，37
#include <stdio.h>

void fun(int m,int k,int xx[]){
	int cnt=0,num=m+1,i;
	while(cnt<k){
		for(i=2;i*i<num;++i){
			if(num%i==0)break;
		}
		if(num%i!=0)
			xx[cnt++]=num;
		++num;
	}
}

int main(){
	int xx[100],m=2,k=100,j;
	fun(m,k,xx);
	for(j=0;j<k;++j){
		printf("%d",xx[j]);
	}
	printf("\n");
	return 0;
}
