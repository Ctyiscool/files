#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h> 
#include <sys/wait.h>

void main() 
{ 
	printf("Program started - parent process id: %d \n", getpid()); 

	// starting a new process
	int pid = fork(); 

	// printing a message
	printf("Hello world! \n");  

	// if return value is 0, that's child. Parent gets the child's id.
	if(pid == 0)
	{
		printf("I'm the child process! - id: %d \n", getpid());

		// executing a new program
		//char *command[] = {"ls", "-al", NULL};
		//execve("/bin/ls", command, 0);
		
		char *command[] = {"helloworld", "1", "2", NULL};
		execve("./helloworld", command, 0); // ./helloworld 1 2


	} else
	{
		int status;
		printf("I'm the parent process! - id: %d \n", getpid());
		waitpid(pid, &status, 0);

/*
		Subtract numbers?
*/
	}
} 


