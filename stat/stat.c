#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("error args\n");
		return -1;
	}
	struct stat buf;
	memset(&buf,0,sizeof(buf));
	int ret;
	ret=stat(argv[1],&buf);
	if(-1==ret)
	{
		perror("stat");
		return -1;
	}
	printf("st_ino=%ld,st_mode=%x,st_nlink=%ld,st_uid=%s,st_gid=%s,st_size=%ld,st_mtime=%s\n",buf.st_ino,buf.st_mode,buf.st_nlink,getpwuid(buf.st_uid)->pw_name,getgrgid(buf.st_gid)->gr_name,buf.st_size,ctime(&buf.st_mtime));
	return 0;
}

