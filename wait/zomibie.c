#include "func.h"

int main()
{
	if(!fork())
	{
		exit(0);
	}else{
		while(1);
	}
}
