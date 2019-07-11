#include <stdio.h>
#include <string.h>

void main(int argc,char argv[])
{
char man = argv[0]; //man
char name = argv[1]; //name


if(strcmp(name, "name") == 0){
	printf("This will tell you your name.\n");
	}
if(strcmp(name, "add") == 0){
	printf("This will allow you to add up to three numbers.\n");
	}
if(strcmp(name, "man") == 0){
	printf("This will allow you to look up other commands.\n");		
	}
}


