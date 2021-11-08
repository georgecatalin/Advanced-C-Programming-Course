#include <stdio.h>


struct point
{
    int x;
    int y;
    int z;
};




int main(void)
{
    struct point myArrayOfStructs[5]={[1].x=43, [1].y=44, [1].z=66};

    for(int i=0;i<5;i++)
    {
        printf("%d \t %d \t %d\n", myArrayOfStructs[i].x,myArrayOfStructs[i].y,myArrayOfStructs[i].z);
    }

    return 0;
}
