#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>
#include <math.h>


int convert_binary_to_decimal(long long binaryNumber);

int main(int argc, char **argv)
{
    long long inputBinaryNumber;
    int resultDecimalNumber;

    printf("Please enter the binary number you wish to convert to decimal: \t");
    scanf("%lld",&inputBinaryNumber);

    resultDecimalNumber=convert_binary_to_decimal(inputBinaryNumber);

    puts(" ");
    printf("The binary number ==> %lld converts to the following decimal number ==> %ld .\n",inputBinaryNumber,resultDecimalNumber);

    return 0;
}


int convert_binary_to_decimal(long long binaryNumber)
{
    int decimalNumber=0;
    int i=0;
    int remainder=0;

    while(binaryNumber!=0)
    {
        remainder=binaryNumber %10;
        binaryNumber=binaryNumber/10;
        decimalNumber+=remainder*pow(2,i);
        ++i;
    }

        return decimalNumber;
}
