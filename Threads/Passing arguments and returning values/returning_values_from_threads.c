#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>

void function_in_thread(void *argument)
{
    char *message="Hello from thread.\n";

    char *temporary=strdup(message); //temporary is a pointer to a dynamically create copy of the message on the heap with malloc()

    return (void *) temporary;
}

int main(int argc, char **argv)
{
    char *temporary=NULL;
    pthread_t myThread;

    pthread_create(&myThread,NULL,function_in_thread,NULL);

    pthread_join(myThread,&temporary);

    printf("The thread returned this value: \t %s.\n",temporary);

    pthread_exit(NULL);

    puts("The thread is over, I am now in the main thread.");

    return 0;
}
