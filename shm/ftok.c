#include "func.h"

int main(int argc,char* argv[])
{
	if(argc!=2)
	{
		printf("error args\n");
		return -1;
	}
	key_t k;
	k=ftok(argv[1],1);
	printf("k=%d\n",k);
	return 0;
}

