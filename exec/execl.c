#include "func.h"

int main()
{
	printf("I will execl\n");
	execl("./add","add","3","4",NULL);
	printf("you can't see me\n");
	return 0;
}
