#include <stdio.h>
#include "other.c"
#include "other_version_2.c"

int myVariable; //this is a global variable because it is defined outside of any function'

int main(void)
{
	myVariable=100;
	
	printf("The value of the variable is %d.\n",myVariable);
	foo();
	printf("The value of the variable is %d.\n",myVariable);
	foo_2();
	printf("The value of the variable is..... %d.\n",myVariable);
	
	return 0;
}
