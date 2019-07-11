#include <stdio.h>

void main()
{
	// integer variable
	int a = 10;
	// printing the value of the variable
	printf("value of the variable = %d \n", a);
	// memory location where the value of the variable is stored
	printf("address of the variable = %p \n", &a);

	printf("\n");

	// an integer pointer variable
	int *b;
	// point the pointer to the memory location of a
	b = &a;
	// address where the pointer's value is stored
	printf("address of the pointer = %p \n", &b); 
	// the value stored in the pointer variable
	printf("value stored in the pointer = %p \n", b);
	// variable value pointed by the pointer
	printf("variable value pointed by the pointer = %d \n", *b);
}

