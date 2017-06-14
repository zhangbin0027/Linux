/*编写函数fun，它的功能是：利用以下所示的简单迭代方法求方程COS(X)-X=0的一个实根。
Xn+1=COS(Xn)
迭代步骤如下：
 (1)取x1初值为0.0；
 (2)x0=x1，把x1的值赋给x0；
 (3)x1=COS(x0)，求出一个新的x1；
 (4)若x0—x1的绝对值小于0.000001，则执行步骤(5)，否则执行步骤(2)；
 (5)所求x1就是方程COS(X)-X=0的一个实根，作为函数值返回。
程序将输出结果Root=0.739085。*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fun(){
	double x1=0,x0;
	do{
		x0=x1;
		x1=cos(x0);
	}while(fabs(x0-x1)>=0.000001);
	return x1;
}

int main(){
	printf("%f\n",fun());
	return 0;
}
