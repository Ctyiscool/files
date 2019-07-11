#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	int temp = atoi(argv[1]);
	printf("Commandline value: %d \n", temp);
	int sum = temp +10;
	printf("Sum: %d \n", sum);
	float Farenheit = temp*1.8 + 32;
	printf("Temperature in Farenheit %f \n",Farenheit);
} 
	
