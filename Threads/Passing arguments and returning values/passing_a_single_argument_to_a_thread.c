#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void *do_something_in_thread(void *thisPointer);

int main(int argc, char *argv[])
{
    pthread_t thread1, thread2;

    char *message1="Hello, Dacia!";
    char *message2="Hello, Renault!";

    int ret1=0;
    int ret2=0;

    ret1=pthread_create(&thread1,NULL,do_something_in_thread, (void *) message1);
    ret2=pthread_create(&thread2,NULL,do_something_in_thread, (void *) message2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Thread 1 returned this result -> %d.\n",ret1);
    printf("Thread 2 returned this result ->%d.\n", ret2);

    pthread_exit(NULL);


    return 0;
}

void *do_something_in_thread(void *thisPointer)
{
    char *this_message;
    this_message=(char *) thisPointer;

    printf("%s.\n",this_message);
}
