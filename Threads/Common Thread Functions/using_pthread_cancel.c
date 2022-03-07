#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <pthread.h>

void *thread_function(void *argument)
{
    puts("Hello from thread.");
    int result=pthread_cancel(pthread_self());

    printf("Result=%d. >>>> I am dead now. I committed suicide\n",result);
    return NULL;
}

int main(int argc, char **argv)
{
    pthread_t thread;

    int result=pthread_create(&thread,NULL,thread_function,NULL);
    pthread_join(thread,NULL);

    puts("Hello from main thread");

    return 0;
}
