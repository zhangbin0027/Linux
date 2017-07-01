//请编写一个函数void fun(char a[]，char b[]，int n)，其功能是：删除一个字符串中指定下标的字符。其中，a指向原字符串，删除后的字符串存放在b所指的数组中，n中存放指定的下标。
//例如，输入一个字符串World，然后输入3，则调用该函数后的结果为Word。
#include <stdio.h>

void fun(char a[],char b[],int n){
	int i=0,j=0;
	while(a[i]!='\0'){
		if(i!=n){
			b[j++]=a[i];
		}
		++i;
	}
	b[j]='\0';
}

int main(){
	char *a="Hello World!",b[100];
	fun(a,b,5);
	printf("a: %s\nb: %s\n",a,b);
	return 0;
}
