#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <pthread.h>
#include <unistd.h>


void * thread_function(void *argument)
{
    pthread_detach(pthread_self());
    sleep(2);

    puts("Hello from the thread.");

    return NULL;
}

int main(int argc, char **argv)
{
    pthread_t myThread;

    int result=pthread_create(&myThread,NULL,thread_function,NULL);

    if(result==0)
    {
        puts("The new thread has been created correctly.");
    }
    else
    {
        puts("There was an error when creating the new thread");
        exit(1);
    }

    puts("Hello from the MAIN THREAD");

    pthread_join(myThread,NULL);


    return 0;
}
