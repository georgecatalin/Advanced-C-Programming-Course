#include <stdio.h>
#include <assert.h>
#include <math.h>


int main(void)
{
    puts("Enter two numbers:");
    
    double a=0.0;
    double b=0.0;
    double z=0.0;

    int number_of_integers=scanf("%lf %lf",&a,&b);

    while( number_of_integers==2 && (a!=0 || b!=0) )
    {
        z=a*a-b*b;
        assert(z>=0);

        printf("The result is z=%f", z);
 
    }

        puts("Enter the next numbers.");
        puts("Done");

    return 0;
}