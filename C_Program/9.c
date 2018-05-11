//求一个字符串的长度,在main函数中输入字符串,并输出其长度
#include <stdio.h>

int len(char *p)
{
	int n=0;
	while(*p!='\0')
	{
		n++;
		p++;
	}
	return (n);
}

void main()
{
	int length;
	char str[20];
	printf("please intput a string:\n");
	scanf("%s",str);
	length=len(str);
	printf("the length of the string is %d",length);
}
