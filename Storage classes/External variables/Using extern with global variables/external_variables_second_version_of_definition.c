#include <stdio.h>
#include "other.c"
#include "other_version_2.c"

extern int myVariable=43; //this is the second manner of defining an external variable; with 'extern' keyword and initialization
char myName[]="George Calin";

int main(void)
{
	
	printf("The value of the variable is %d.\n",myVariable);
	foo();
	printf("The value of the variable is %d.\n",myVariable);
	foo_2();
	printf("The value of the variable is..... %d.\n",myVariable);
	
	return 0;
}
