#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h> 
#include <sys/wait.h>
#include <string.h>

void main() 
{ 
	char enteredText[20], arg1[10], arg2[10];
	char *command[20];
	while(1) {
	printf("ENTER A COMMAND😎️: \n"); 
	scanf("%s %s %s", enteredText, arg1, arg2);

	// starting a new process
	int pid = fork(); 


	// if return value is 0, that's child. Parent gets the child's id.
	if(pid == 0) {	
		if(strcmp(enteredText, "name") == 0){
			char *command[] = {"name",NULL};
			execve("./name", command, 0);		
		}else
		if(strcmp(enteredText, "add") == 0){
			char *command[] = {"add", arg1, arg2, NULL};
			execve("./add", command, 0);		
		}else 
		if(strcmp(enteredText, "man") == 0){
			char *command[] = {"man", arg1, arg2, NULL};
			execve("./man", command, 0);		
		}else 
		//char *command[] = {"ls", "-al", NULL};
		//execve("/bin/ls", command, 0);
		
		
		}
	} 
	 {
		int status;
		waitpid(pid, &status, 0);


	}
}
	
} 


