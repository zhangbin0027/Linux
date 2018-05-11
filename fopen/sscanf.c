#include <stdio.h>
#include <string.h>

typedef struct{
	int num;
	char name[20];
	float score;
}stu;

int main(int argc,char *argv[]){
	stu s={1001,"xiongda",88.5};
	char buf[128]="1002 xionger 66.6";
	memset(&s,0,sizeof(s));
	sscanf(buf,"%d%s%f",&s.num,s.name,&s.score);
	printf("%d %s %5.2f\n",s.num,s.name,s.score);
	return 0;	
}
