#include<stdio.h>

void main()

{ 
	printf("Type your first name");
	char name[15];
	scanf("%s",name);
	printf("Type your surname");
	char surname[15];
	scanf("%s",surname);
	printf("Hi %s, %s Welcome to C programming.",name,surname);

}



