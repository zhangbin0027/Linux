//请编写一个函数void fun(char *tt，int pp[])，统计在tt字符串中“a”到“z”26个字母各自出现的次数，并依次放在pp所指数组中。
//例如，当输入字符串abcdefgabcdeabc后，程序的输出结果应该是：3 3 3 2 2 1 1 0 0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
#include <stdio.h>
#include <string.h>

void fun(char *tt,int pp[])
{
	int i=0;
	memset(pp,0,sizeof(int)*26);
	while(tt[i]!='\0')
	{
		if(tt[i]<='z'&&tt[i]>='a')
		{
			++pp[tt[i]-'a'];
		}
		++i;
	}
}
int main()
{
	char *str="abcdefghijklmnopqrstuvwxyzabcdefg";
	int cnt[26],i;
	fun(str,cnt);
	for(i=0;i<26;i++)
	{
		printf("%c: %d\n",'a'+i,cnt[i]);
	}
	return 0;
}

