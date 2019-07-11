#include <stdio.h>
#include <stdlib.h>
	
void main(int argc, char *argv[])
{
	char *i ="100";
	int value = atoi(i);
	printf("%d \n", value);

	int argument = atoi(argv [1]);
	int sum = argument + 10;
	printf("Sum: %d \n", sum);
}
