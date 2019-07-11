#include <stdio.h>

void main()
{
	
	printf("Enter your salary");
	int basic;
	scanf("%d", &basic);	
	float hra = 0.1;
	float hrab = hra*basic;
	float ta = 0.05;
	float tab =ta*basic;
	float full_salary = basic + hrab + tab; 
	printf("Your salary without taxes is %f\n",full_salary);
}
