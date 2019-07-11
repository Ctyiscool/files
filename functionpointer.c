#include <stdio.h>

int getSum(int a, int b){
	int sum = a + b;
	return sum;
}

void main()
{
	// calling the function and getting the return value
	int result = getSum(10, 20);
	// printing the return value of the function
	printf("result = %d \n", result);

	// printing the address of the function
	printf("address of the function = %p \n", &getSum);	
	// declaring a function pointer with required nature
	int (*funcPtr)(int, int);
	// assigning the address of the function to the pointer
	funcPtr = &getSum;
	// printing the value stored in the pointer
	printf("value stored in the pointer = %p \n", funcPtr);
	
	// calling the function through the pointer
	result = funcPtr(20, 30);
	printf("result = %d \n", result);
}

