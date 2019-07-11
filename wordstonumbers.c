#include <stdio.h>
#include <stdlib.h>

void linearSearch(int arraysize, int search_value, int array[]) 
{
	for(int i =0; i<arraysize; i++){
		if(array[i] == search_value) {
			printf("We found it!");
			return;
		}
	}
	printf("We didn't find it!\n");
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

	
	printArray(data, (argc-1));
	
	printf("Enter your number: ");
	
	int number;
	
	scanf("%d", &number);
	
	int number = linearSearch(int arraysize, int search_value, int array[]);
	printf("we found your number \n");
}

{
}

