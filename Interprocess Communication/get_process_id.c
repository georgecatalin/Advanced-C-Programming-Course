#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	int processId, parentProcessId;
	
	printf("This program is used to get process Id information.\n");
	processId=getpid();
	parentProcessId=getppid();
	
	printf("The process id is %d, while the parent process id is %d.\n",processId, parentProcessId);
	
	puts("One can cross verify the process ids by executing commands in the shell");
	system("ps -ef");
	
	
	
	
	return 0;
}
