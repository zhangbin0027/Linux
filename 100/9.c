//编写函数fun，它的功能是：根据以下公式求p的值，结果由函数值带回。m与n为两个正整数且要求m>n
/*
      M!
  ----------
   N!(M-N)!

     ||

          M*(M-1)*...*(M-(N-1))
  ----------------------------------
      (M-N)*(M-(N+1))*...*(M-(M-1))

 */
#include <stdio.h>

double fun(int m,int n){
	int a=1,b=1,i;
	for(i=0;i<=n-1;++i){
		a*=m-i;
	}
	for(i=n;i<=m-1;++i){
		b*=m-i;
	}
	return (double)a/b;
}

int main(){
	double res=fun(12,8);
	printf("%.2f\n",res);
	return 0;
}
