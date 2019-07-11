#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[])
{
	// declaring strings
	char first_name[] = "Asanka";
	char last_name[] = "Sayakkara"; 

	// string copying
	char name[50];
	strcpy(name, first_name);
	printf("%s \n", name);

	// string concatination
	char full_name[50];
	strcpy(full_name, first_name);
	strcat(full_name, " ");
	strcat(full_name, last_name);
	printf("Fulll name: %s \n", full_name);

	// string comparison
	int answer = strcmp("Asanka", "Asankaa");
	if(answer == 0)
	{
		printf("Similar strings. \n");
	} else 
	{
		printf("Different strings. \n");
	}

	// string length
	int name_length = strlen(full_name);
	printf("Length is: %d \n", name_length);	
}



