#include <stdio.h>


int main(int argc, char **argv)
{
    int maxIterations=10;
    double number=0.0;
    double average=0.0;
    double sum=0.0;
    int i=0;

    for(i=1;i<=maxIterations;i++)
    {
        printf("Enter the number: \t");
        scanf("%lf",&number);

        if(number<0.0)
        {
            goto mylabel;
        }

        sum+=number;
    }

    mylabel:
        average=sum/(i-1);
        printf("The average for the numbers you entered is %.3f. \n",average);
        printf("The sum for the numbers you entered is %.3f. \n",sum);
        
    return 0;
}