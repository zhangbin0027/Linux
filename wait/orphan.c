#include "func.h"

int main()
{
	if(fork())
	{
		while(1);
	}else{
		exit(0);
	}
}
