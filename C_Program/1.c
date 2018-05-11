#include <stdio.h>

void main(){
//编写一个程序，将输入的任意三个数颠倒过来
	int units,tens,hundreds,n;	
	printf("please input a number(100-999):");
	scanf("%d",&n);
	units=n%10;
	tens=(n%100)/10;
	hundreds=n/100;
	printf("the reverse of %3d is:%d %d %d\n",n,units,tens,hundreds);
}
