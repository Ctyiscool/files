#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct employee
{
	int emp_number;
	char emp_name[20];
	int emp_salary;
	char emp_job[20];
	struct employee *next;
};

void printList(struct employee *start)
{
	while(start != NULL)
	{
		printf("Employee Number: %d \n", start->emp_number);
		printf("Employee Name: %s \n", start->emp_name);
		printf("Employee Job: %s \n", start->emp_job);
		printf("Employee Salary: %d \n",start->emp_salary);
		start = start->next;
	}
}

void viewEmployee()
{

}

struct employee* addEmployee(struct employee *start, int emp_number)
{
	struct employee *new = malloc(sizeof(struct employee));
	new->emp_number = emp_number;
	strcpy(new->emp_name, "John");
	new->emp_salary = 1500;
	strcpy(new->emp_job, "Engineer");
	new->next = NULL;
	
	new->next = start;
	start = new;

	return start;
}

void removeEmployee(struct employee *start)

{
	printf("Type employee number of the employee you would like to delete:");
	int emp_number;
	scanf("%d",&emp_number);

// define two temporary pointers
    struct employee *ptr1, *ptr2;

    // go through the linked list moving both pointers while 1st pointer hit the node 20
    ptr1 = start;
    while (ptr1->emp_number != emp_number)
    {
        ptr2 = ptr1;
        ptr1 = ptr1->next;
    }
    
    // ptr1 found the node 20. Let's delete that node.
    ptr2->next = ptr1->next;

    // free the memory used by the deleted node
    free(ptr1);
 
    // printing the list
    printList(start);
    
}


void main()
{
	printf("Employee System \n");
	struct employee *start = NULL;

	// adding an employee
	start = addEmployee(start, 1234);
	start = addEmployee(start, 4286);

	// let's print this list
	printList(start);
	if("d") 
		start = removeEmployee(start);



}



