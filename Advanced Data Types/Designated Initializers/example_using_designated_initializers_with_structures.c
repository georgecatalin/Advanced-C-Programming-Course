#include <stdio.h>

struct point
{
    int x;
    int y;
    int z;
};



int main(void)
{
    struct point p1={.x=12,.y=23};
    struct point p2={x:43,y:44};

    //the elements of the struct which are not initialized take the default value which is 0

    printf("The first element is %d,%d,%d \n",p1.x,p1.y,p1.z);
    printf("The second element is %d,%d,%d \n", p2.x,p2.y,p2.z);

    return 0;
}
