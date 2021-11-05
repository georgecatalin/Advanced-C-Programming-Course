void foo_2()
{
	extern int myVariable; //if the extern variable is only to be used in a single function, then it can be declared as extern just inside that function
	myVariable+=2;
}
