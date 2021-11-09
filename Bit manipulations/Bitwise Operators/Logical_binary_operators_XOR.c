#include <stdio.h>

int main(void)
{
    short int number1=43; //in binary 0010 1011
    short int number2=65; //in binary 0100 0001

    short int result=0;


    result=number1 ^ number2; //0110 1010 which is decimal 106
    printf("The binary operation %d ^ %d is %d .\n", number1,number2, result);


    /* =======================================
    note: one can use the XOR binary operator to compare numbers
     integer number ^ itself = 0
    ========================================== */

    return 0;
}
