#include <stdio.h>

void main()
{
	// variable
	char a = 'a';
	// printing the value of the variable
	printf("value of the variable 'a' = %c \n", a);
	// memory location where the value of the variable is stored
	printf("address of the variable 'a' = %p \n", &a);


	printf("\n");

	// a char pointer variable
	char *b;
	// point the pointer to the memory location of a
	b = &a;
	// address where the pointer's value is stored
	printf("address of the pointer 'b' = %p \n", &b); 
	// the value stored in the pointer variable
	printf("value stored in the pointer 'b' = %p \n", b);
	// variable value pointed by the pointer
	printf("variable value pointed by the pointer 'b' = %c \n", *b);
	
}
