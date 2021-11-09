#include <stdio.h>
#include <math.h>

long long convertDecimalToBinary(int decimalNumber);


int main(void)
{
    long long resultFromConversion;
    int decimalNumber=0;

    printf("Please enter the decimal number you wish to convert: ");
    scanf("%d",&decimalNumber);

    resultFromConversion=convertDecimalToBinary(decimalNumber);

    printf("The result from converting the decimal number ==>%d to a binary number is ==> %lld",decimalNumber,resultFromConversion);


    return 0;
}

long long convertDecimalToBinary(int decimalNumber)
{
    long long result=0;
    int remainder=0;
    int i=1;

      while(decimalNumber!=0)
    {
        remainder=decimalNumber%2;
        decimalNumber=decimalNumber/2;
        result+=remainder*i;
        i=i*10;
    }

    return result;
}
