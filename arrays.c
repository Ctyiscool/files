#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	// declaring an integer array - method 1
	//int values[3];
	//values[0] = 37;
	//values[1] = 62;
	//values[2] = 89;

	// declaring an integer array - method 2
	//int values[] = {37, 62, 89};

	// accessing an integer array
	//printf("%d \n", values[0]);
	//printf("%d \n", values[1]);
	//printf("%d \n", values[2]);

	/*
	int i = 0;
	int array_length = sizeof(values)/sizeof(int);
	while(i<array_length)
	{
		printf("%d \n", values[i]);
		i = i + 1;
	}
	*/

	// declaring a two dimensional array - method 1
	char array2[2][3];
	array2[0][0] = 1;
	array2[0][1] = 2;
	array2[0][2] = 3;
	array2[1][0] = 4;
	array2[1][1] = 5;
	array2[1][2] = 6;
	

	// declaring a two dimensional array - method 2
	//int array2[2][3] = {{1,2,3}, {4,5,6}};
	
	// accessing a 2 two dimensional array
	printf("%d \n", array2[3][2]);	
}






