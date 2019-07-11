#include <stdio.h>
#include <stdlib.h>

void bubblesort(int array_length,int array[])
{int temp;
	for (int i=0; i<array_length; i++);
	{
		if(array[i]>array[i+1]);
		{
			temp = array[i]
			array[i] = array[i+1]
			array[i+1] = temp  		
		}
	}
	printf("\n");



}
void linearSearch(int array[], int size, int value)
{
	printf("Linear Search: \n");
	for(int i=0; i<size; i++)
	{
		if(array[i] == value)
		{
			printf("Value %d was found! \n", value);
			return;
		}
	}	
	printf("Value %d was not found! \n", value);
}

void binarySearch(int array[], int size, int value)
{
	printf("Binary Search: \n");

	int front, end, center;	
	front = 0;
	end = size -1;
	
	while(front<=end)
	{
		center = (front + end) / 2;
		if(array[center] == value)
		{
			printf("Found value %d \n", value);
			return;
		} else if (array[center] > value)
		{
			end = center - 1;	
		} else if(array[center] < value)
		{
			front = center + 1;	
		}
	}

	printf("Didn't find the value %d \n", value);
}


void printArray(int array[], int size)
{
	printf("Array Elements: ");
	for(int i=0; i<size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void main(int argc, char *argv[])
{
	printf("Algorithms\n");
	int data[argc-1];
	printf("Number of arguments: %d \n", argc);
	for(int i=1; i<argc; i++)
	{
		data[i-1] = atoi(argv[i]);
	}

	// priting the array
	printArray(data, (argc-1));

	// linear search
	linearSearch(data, (argc-1), 5);

	// binary search
	binarySearch(data, (argc-1), 5);
}






