#include <stdio.h>

double multiplyDouble(double myNumber)
{
    double twice=myNumber*2;
    return twice;
}

int main(int argc, char *argv[])
{
    int age=43;
    double salary=72.3;

    double myArray[]={10.3,33.2,345.2};

    printf("The twice is %.3f.\n",multiplyDouble(salary));

    return 0;
}
