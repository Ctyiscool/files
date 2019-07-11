#include <stdio.h>
#include<string.h>

// defining the student structure
struct book{
	char name[20];
	int year_published;
	int number_of_pages;
	int index_number;
	char author[20];
};

void main()
{
	// initializing our first student
	struct book s1;
	strcpy(s1.name, "Asanka's_Book");
	s1.year_published = 1732;
	s1.number_of_pages = 354;
	strcpy(s1.author, "Asanka");
	s1.index_number = 12115624;

	// initializing our second student
	struct book s2;
	strcpy(s2.name, "Gone");
	s2.year_published = 1632;
	s2.number_of_pages = 463;
	strcpy(s2.author, "Mark Something");
	s2.index_number = 7845380;

	struct book s3;
	strcpy(s3.name, "Weird");
	s3.year_published = 3412;
	s3.number_of_pages = 478;
	strcpy(s3.author, "Bob Smith");
	s3.index_number = 6426374;

	// details of each student
	printf("Name: %s | year_published: %d | number_of_pages: %d | author: %s | index_number: %d \n", s1.name, s1.year_published, s1.number_of_pages, s1.author, s1.index_number);
	printf("Name: %s | year_published: %d | number_of_pages: %d | author: %s | index_number: %d \n", s2.name, s2.year_published, s2.number_of_pages, s2.author, s2.index_number);
	printf("Name: %s | year_published: %d | number_of_pages: %d | author: %s | index_number: %d \n", s3.name, s3.year_published, s3.number_of_pages, s3.author, s3.index_number);
}
