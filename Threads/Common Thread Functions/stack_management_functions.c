#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <pthread.h>


pthread_attr_t thread_attributes;

void *thread_function(void *arguments)
{
    long thread_ID;
    size_t my_stack_size;

    pthread_attr_getstacksize(&thread_attributes,&my_stack_size);

    thread_ID=(long) arguments;

    printf("In the thread %lu: \t the stack size is %li Bytes",thread_ID,my_stack_size);

    pthread_exit(NULL);
}

int main(int argc, char **argv)
{
    pthread_t thread_id;
    size_t new_stacksize;
    int myVar=43;

    pthread_attr_init(&thread_attributes);
    pthread_attr_getstacksize(&thread_attributes,&new_stacksize);

    printf("Default stack size is %lu.\n",new_stacksize);

    new_stacksize=8000000;
    printf("The new thread needs to have the following stack size %lu.\n",new_stacksize);

    pthread_attr_setstacksize(&thread_attributes,new_stacksize);
    printf("At this point, we are creating a new thread with the stacksize of %lu Bytes.\n",new_stacksize);

    int result=pthread_create(&thread_id,&thread_attributes,thread_function,(void *) myVar);

    if(result)
    {
        printf("Error when creating the thread with %d.\n", errno);
        exit(-1);
    }

    pthread_join(thread_id,NULL);

    return 0;
}
