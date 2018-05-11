#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int num;
	char name[20];
	float score;
}stu;

int main(int argc,char *argv[]){
	stu s={1001,"xiongda",88.5};
	char buf[128]={0};
	sprintf(buf,"%d %s %5.2f",s.num,s.name,s.score);
	puts(buf);
	return 0;	
}
