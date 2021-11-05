extern int myVariable; //this informs us that this variable is defined elsewhere as a global variable and can be accessed and modified from here
extern char myName[]; //this informs us that this variable is defined elsewhere as a global variable and can be accessed and modified from here

void foo(void)
{
	myVariable++;
}
