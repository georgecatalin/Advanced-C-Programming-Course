#include <stdio.h>

union myUnion
{
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};


int main(void)
{
    union myUnion variable1;
    union myUnion variable2;

    variable1.letterGrade='s';
    variable1.roundedGrade=44;
    variable1.exactGrade=9.81;

    printf("The variable1.letterGrade=%c\n",variable1.letterGrade);
    printf("The variable1.roundedGrade=%d\n",variable1.roundedGrade);
    printf("The variable1.exactGrade=%f\n",variable1.exactGrade);


    variable2.letterGrade='G';
    printf("The variable2.letterGrade=%c\n",variable2.letterGrade);

    variable2.roundedGrade=10;
    printf("The variable2.letterGrade=%d\n",variable2.roundedGrade);

    variable2.exactGrade=3.14;
    printf("The variable2.letterGrade=%f\n",variable2.exactGrade);

    return 0;
}
