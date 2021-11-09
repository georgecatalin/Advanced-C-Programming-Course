#include <stdio.h>

int main(void)
{
    short int number1=43; //in binary 0010 1011
    short int number2=65; //in binary 0100 0001

    short int complement1=0;
     short int complement2=0;


     /* =================================================
     to obtain the decimal number from the binary complement= flip the bits , convert to binary and add +1
     ================================================== */

    complement1=~number1; // 1101 0100 which is decimal -44
    complement2=~number2; // 1011 1110 which is decimal -66
    printf("The binary operation ~%d & %d ; \t ~%d  is %d.\n", number1,complement1, number2, complement2);



    return 0;
}
