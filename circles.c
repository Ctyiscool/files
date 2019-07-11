#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	int radius = atoi(argv[1]);
	printf("Commandline value: %d \n", radius);
	int sum =radius +10;
	printf("Sum: %d \n", sum);
 	float Area = radius*radius*3.1415926535;
	printf("Area = %f \n",Area);
	float Perimeter = radius*2*3.1415926535;
	printf("Perimeter = %f \n",Perimeter);
	
}
