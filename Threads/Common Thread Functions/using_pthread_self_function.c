#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <pthread.h>


void * thread_function(void *argument)
{
    printf("In the thread, the id of the thread is %d.\n",pthread_self());
    pthread_exit(NULL);
    return NULL;
}

int main(int argc, char **argv)
{
    pthread_t this_thread;

    pthread_create(&this_thread,NULL,thread_function,NULL);
    pthread_join(this_thread,NULL);

    printf("In the main thread, the id of the thread is %d.\n",this_thread);

    pthread_exit(NULL);
    return 0;
}
