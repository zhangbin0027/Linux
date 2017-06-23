#include <stdio.h>
//输入三个整数，将居中的值显示出来
int main(){
	int a, b, c;
	printf("please input three numbers:\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) {
		if (b > c) {
			printf("mid=%d\n", b);
		}else if (a > c) {
			printf("mid=%d\n", c);
		}else {
			printf("mid=%d", a);
		}
	}else if (a > c) {
		printf("mid=%d\n", a);
	}else if (b > c) {
		printf("mid=%d\n", c);
	}else {
		printf("mid=%d\n", b);
	}

	system("pause");
	return 0;
}
