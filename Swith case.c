#include <stdio.h>

void main()
{
	int number;

	printf("Enter a number betwee 1 and 7: ");
	scanf("%d", &number);

	switch(number)
	{
	case 1:
		printf("Monday \n");
		break;
	case 2:
		printf("Tuesday \n");
		break;
	case 3:
		printf("Wednsday \n");
		break;
	case 4:
		printf("Thursday \n");
		break;
	case 5:
		printf("Friday \n");
		break;
	case 6:
		printf("Saturday \n");
		break;
	case 7:
		printf("Sunday \n");
		break;

	default:
		printf("The number you entered is not between 1 and 5 \n");
	}
}



