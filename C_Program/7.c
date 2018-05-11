#include <stdio.h>
//用指针设计一个可以计算字符串长度的程序
int strlen(s)
char *s;
{
	char *p=s;
	while(p!='\0')
		*p++;
	return (p-s);
}
