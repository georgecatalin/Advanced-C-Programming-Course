#include <stdio.h>

int sum(int i, int j, int k)
{
    return(i+j+k);
}

int main(void)
{
    int i=0;
    int j=0;
    int k=0;
    int number_of_integers_read=0;

    number_of_integers_read=scanf("%d %d %d",&i,&j,&k);

    #ifdef DEBUG
        fprintf(stderr,"The number of integers read is %d.\n",number_of_integers_read);
        fprintf(stderr,"i=%d ; j=%d ; k=%d.\n",i,j,k);
    #endif

    printf("The sum of your numbers is %d.\n",sum(i,j,k));
    return 0;
}