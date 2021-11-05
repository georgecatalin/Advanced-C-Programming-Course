#include <stdio.h>
#include <stdlib.h>

double multiplyDouble(double *myNumber)
{
	double *twice=(double *) malloc(1*sizeof(double));
	*twice=*myNumber*2;
	return *twice;
}

int main(int argc, char *argv[])
{
	int *age=(int *) malloc(1*sizeof(int));
	*age=30;
	
	double *salary=(double *) malloc(1*sizeof(double));
	*salary=72.4;
	
	double *myArray=(double *) malloc(3*sizeof(double));
	myArray[0]=23.4;
	myArray[1]=44.3;
	myArray[2]=22.3;
	
	double *twice=(double *) malloc(1*sizeof(double));
	*twice=multiplyDouble(salary);
	
	printf("The double is %.3f .\n",*twice);
	
	free(twice);
	free(myArray);
	free(salary);
	free(age);
	
	return 0;

}
