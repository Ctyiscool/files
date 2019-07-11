#include<stdio.h>
#include<malloc.h>



struct node
{
	int value;
	struct node *next;
};

void printList(struct node *start)
{
	while(start !=NULL)
	{
		printf("%d \n", start->value);
		start = start->next;
	}
}
void main()
{
	printf("My linked List\n");
	struct node *start;
	struct node *new = malloc(sizeof(struct node));
	new->value = 1;
	new->next = NULL;
	new->next = start;
	start = new;
	new = malloc(sizeof(struct node));
        new->value = 2;
        new->next = NULL;
        new->next = start;
        start = new;
	new = malloc(sizeof(struct node));
        new->value = 3;
        new->next = NULL;
        new->next = start;
        start = new;
    new = (struct node*) malloc(sizeof(struct node));
    new->value = 100;
    new->next = NULL;
    struct node *ptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new;

	struct node *ptr1,*ptr2;
	ptr1 = start;
	while(ptr1->value !=2)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->next;
	}
	ptr2->next = ptr1->next;
	printList(start);
}
