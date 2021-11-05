#include <stdio.h>

/* ==========================================================
Notes: the static keyword has different meanings depending where it is applied
1. if the static keyword is applied to a  local variable , then that variable retains its value every time the function is re-appealed. The variable does not initialize
2. it the static keyword is applied to a global variable, then that variable can not be seen outside of the current file where the global variable is defined into
3. if the static keyword is applied to a function, then that function can only be used within that file
============================================================= */


foo()
{
    static int myStaticVariable=0;
    int myLocalVariable=0; //this is an auto variable, but the 'auto' keyword is implicit, there is no necessarily need to add it

    printf("The value of the static variable is : %d , and the value of the auto variable is %d. \n", myStaticVariable, myLocalVariable);

    myStaticVariable++;
    myLocalVariable++; //the auto variable gets reset anytime when the function exits.

    printf("The 2nd value of the static variable is : %d , and the value of the auto variable is %d. \n", myStaticVariable, myLocalVariable);
    puts("============================================");

}




int main(void)
{
    for(int i=0;i<=10;i++)
    {
        foo();
    }


    return 0;
}
