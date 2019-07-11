#include <stdio.h>


int getNewAge(int age) {
	int newAge = age + 10;
	return newAge;
}

void main()
}
	printf("Enter your age: ");
	int age;
	scanf("%d", &age);

	int newAge = getNewAge(age);
	printf("In 10 years, your age will be %d \n", newAge);
}
