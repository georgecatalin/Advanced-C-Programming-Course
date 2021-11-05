/* The storage class refers to scope, visibility and life-time of a variable or of a function */

double multiply(double number);

int main(int argc, char *argv[])
{
	auto int x; //this is a local variable with an auto storage class, but the 'auto' keyword is not necessarily needed to be added as it is implicit for local variables

	return 0;
}

double multiply(double number)
{
	double twice; //this is a local variable with auto storage class
	
	twice=number*2;
	return twice;
}
