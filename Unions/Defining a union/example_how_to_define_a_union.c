#include <stdio.h>

/* ========================================================================================
Tips and tricks information: At this stage only the new data type is defined. There is no memory allocated for the union type.
The memory gets allocated once objects associated with the union are created
======================================================================================== */
union car
{
    int i_value; //size of float  is 4 bytes
    float f_value; // size of float is 4 bytes
    char brand[20]; // size if 20 * 1byte = 20 bytes
};

int main(void)
{
    /* ========================================
    Tips and tricks: once the objects are created, memory gets allocated for that object.
    ========================================== */

    union car dacia, renault, *audi;

    printf("The size occupied in memory by the object of type union is represented by the largest member of the union as all members of the union share a common memory space at a given time ====> %zd bytes. \n",sizeof(dacia)); //should display 20 bytes



    return 0;
}
