#include<stdio.h>
#include<stack>
using namespace std;
stack<int> S;//定义一个堆栈
char str[110];//保存输入字符串
char ans[110];//保存输出字符串
int main()
{
	while(scanf("%s",str)!=EOF)//输入字符串
	{
		int i;
		for(i=0;str[i]!=0;i++)//从左到右遍历字符串
		{
			if(str[i]=='(')//若遇到左括号
			{
				S.push(i);//将其数组下标放入堆栈中
				ans[i]=' ';//暂且将对应的输出字符串位置改为空格
			}else if(str[i]==')'){//若遇到右括号
				if(S.empty()==false)//若此时堆栈非空
				{
					S.pop();//栈顶位置匹配，弹出
					ans[i]=' ';//修改输出中该位置为空格	
				}else ans[i]='?';//若堆栈为空，则无法找到左括号与其匹配
		}else ans[i]=' ';//若其为其他字符，与括号匹配无关，则修改输出为空格
	}
	while(!S.empty())
	{
		ans[S.top()]='$';//修改其在输出中的位置为"$"
		S.pop();//弹出
	}
	ans[i]=0;//为了使输出行成字符串，在其最后一个字符处，添加一个空字符
	puts(str);//输出原字符串
	puts(ans);//输出答案字符串
	}
	return 0;
}

