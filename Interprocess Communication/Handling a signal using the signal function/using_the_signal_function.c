#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void function_dividebyzero(int sig);

int main(void)
{
    int result=0;
    int a=0,b=0;

    a=125;
    b=0;

    void (*signalHandler) (int);
    signalHandler=signal(SIGFPE,function_dividebyzero);

    if(signalHandler==SIG_ERR)
    {
        perror("Error using signal function");
        return 1;
    }

    result=a/b;

    printf("Result of Divide by Zero is %d\n",result);

    return 0;
}

void function_dividebyzero(int sig)
{
    if(sig==SIGFPE)
    {
        puts("Divide by zero signal was raised");
        exit(0);
    }
    else
    {
        puts("Another signal was raised.");
    }
}
