#include<stdio.h>
#include <stdlib.h>

 void main(int argc,char *argv[])
{
printf("number of arguments: %d \n",argc);
int argument1 = atoi(argv [1]);
int argument2 = atoi(argv [2]);
int Sum = argument1 + argument2;
printf("Your sum is %d \n",Sum);
}

