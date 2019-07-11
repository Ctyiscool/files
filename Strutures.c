#include <stdio.h>
#include<string.h>

// defining the student structure
struct student{
	char name[20];
	int age;
	int height;
	char profession[20];
};

void main()
{
	// initializing our first student
	struct student s1;
	strcpy(s1.name, "Asanka");
	s1.age = 32;
	s1.height = 5;
	s.1 profession = Computer_Scientist

	// initializing our second student
	struct student s2;
	strcpy(s2.name, "Mark");
	s2.age = 16;
	s2.height = 6;
	(s.2 profession = "Mason")

	// details of each student
	printf("Name: %s | Age: %d | Height: %d \n", s1.name, s1.age, s1.height);
	printf("Name: %s | Age: %d | Height: %d \n", s2.name, s2.age, s2.height);
}

