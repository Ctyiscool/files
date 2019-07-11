#include <stdio.h>
#include <malloc.h>

void main()
{
	printf("Memory Management \n");

	// let's allocate 20 bytes dynamically
	void *ptr = malloc(20);

	printf("Allocated some bytes starting from address %p \n", ptr);
	
	printf("Size of integer: %d \n", (int) sizeof(int));

	// let's use that space for an integer array
	int *data = (int *) ptr;
	data[0] = 0;
	data[1] = 1;
	data[2] = 2;
	data[3] = 3;
	data[4] = 4;

	// trying to put data to a place outside the allocated space
	data[5] = 5;

	// let's print the data of the array (including illegal data point)
	printf("Printing the array: \n");
	for(int i=0; i<6; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");

	free(ptr);
}
