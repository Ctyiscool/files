
#include <stdio.h>

void main()
{
	printf("Enter your score: ");
	int score;
	scanf("%d", &score);
	if( score>=50){
		printf("Passed! \n");
	}
	else {
		printf("Failed! \n");
	}
}


