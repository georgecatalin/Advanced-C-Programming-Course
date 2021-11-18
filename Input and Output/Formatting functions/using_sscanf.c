#include <stdio.h>
#include <stdlib.h>


/* =======================================================================================
Notes: sscanf() is a function that can be used to extract data from a string , rather from the standard input or the keyboard
- int sscanf(buffer, "%d %s", &age, name)
- the sscanf() goes from string scanf
- the sscand() returns an integer with the number of characters read or (-1) in case of error
 =========================================================================================== */

int main(void)
{
    char *myString="George Calin IT-Development-Manager 43";
    char name[30],surname[30],title[30];
    int age=0; 
    int return_value=0;

    return_value=sscanf(myString,"%s %s %s %d",name,surname,title,&age);

    printf("The name is %s.\n",name);
    printf("The surname is %s.\n",surname);
    printf("The title is %s. \n",title);
    printf("The age is %d.\n",age);

    return 0;
}