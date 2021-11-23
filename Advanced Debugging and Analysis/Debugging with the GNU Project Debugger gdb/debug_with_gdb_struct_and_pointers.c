#include <stdio.h>
#include <stdlib.h>


struct date
{
    int day;
    int month;
    int year;
};

struct date incrementDay(struct date myCalendaristicDate)
{
    ++myCalendaristicDate.day;
    return myCalendaristicDate;
}

int main(void)
{
    struct date today={23,11,2021};
    int myArray[]={1,2,3,4,5};
    struct date *pointerDate=NULL;
    char *myString="Hello, C.";

    pointerDate=(struct date *) malloc(sizeof(struct date));
    pointerDate->day=25;
    pointerDate->month=12;
    pointerDate->year=2021;

    printf("The variable 'today' is %d - %d - %d.\n", today.day,today.month,today.year);
    printf("The variable behind 'pointerDate' is %d - %d - %d.\n", pointerDate->day,pointerDate->month,(*pointerDate).year);


    today=incrementDay(today);
    printf("The variable 'today' after change  is %d - %d - %d.\n", today.day,today.month,today.year);

    free(pointerDate);
    pointerDate=NULL;
}