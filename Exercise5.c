#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() 
{
	char name[15];
	printf("Enter your last name:");
	scanf("%s", name);
	int namelength = strlen(name);	
	for(int i= namelength-1; i>=0; i--){
		printf("%c",name[i]);
}
}
	
