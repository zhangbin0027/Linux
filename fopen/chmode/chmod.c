#include <sys/stat.h>
#include <stdio.h>

int main(int argc,char *argv[]){
	if(argc!=2){
		printf("error args\n");
		return -1;
	}
	int ret;
	ret=chmod(argv[1],0777);
	if(-1==ret){
		perror("chmod");
		return -1;
	}
	return 0;
}
