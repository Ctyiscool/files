#include<stdio.h>
#include<malloc.h>
#include<string.h>



struct node
{
	char value[20];
	struct node *next;
};

void printList(struct node *start)
{
	while(start !=NULL)
	{
		printf("%s \n", start->value);
		start = start->next;
	}
}
void main()
{
	printf("My linked List\n");
	struct node *start;

	struct node *new = malloc(sizeof(struct node));
	strcpy(new->value,"list");
        new->next = NULL;
        new->next = start;
        start = new;

	new  = malloc(sizeof(struct node));
	strcpy(new->value,"linked");
	new->next = NULL;
	new->next = start;
	start = new;

	new  = malloc(sizeof(struct node));
        strcpy(new->value,"the");
        new->next = NULL;
        new->next = start;
        start = new;

	new  = malloc(sizeof(struct node));
        strcpy(new->value,"in");
        new->next = NULL;
        new->next = start;
        start = new;
	
	new  = malloc(sizeof(struct node));
        strcpy(new->value,"message");
        new->next = NULL;
        new->next = start;
        start = new;

	new  = malloc(sizeof(struct node));
        strcpy(new->value,"my");
        new->next = NULL;
        new->next = start;
        start = new;

	new  = malloc(sizeof(struct node));
        strcpy(new->value,"is");
        new->next = NULL;
        new->next = start;
        start = new;

	new  = malloc(sizeof(struct node));
        strcpy(new->value,"This");
        new->next = NULL;
        new->next = start;
        start = new;




	printList(start);
}
