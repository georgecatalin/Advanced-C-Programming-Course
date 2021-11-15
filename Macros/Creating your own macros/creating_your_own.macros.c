#include <stdio.h>

#define PI 3.14
#define AREA_CIRCLE(r)  ((PI)*(r)*(r)) //place the variable between parentheses to keep the order of operations when replacing it with expressions


int main(void)
{

    double area=0.0;
    area=AREA_CIRCLE(4);

    printf("The area of the circle is %f.\n",area);

    int c=2;
    area=AREA_CIRCLE(c+5);

    printf("The area of the circle is %f.\n",area);

    return 0;
}