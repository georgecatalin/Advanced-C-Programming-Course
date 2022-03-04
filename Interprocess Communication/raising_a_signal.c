#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main(void)
{
	pid_t processId;
	
	processId=getpid();
	
	printf("The process id is %d. We will test raising a SIGSTOP signal for this process and starting over this process from command line.\n",processId);
	
	int result=raise(SIGSTOP);
	
	printf("I am back after starting from the keyboard");
	
	return 0;
}
