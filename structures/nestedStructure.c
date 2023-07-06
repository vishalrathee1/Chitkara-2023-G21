#include <stdio.h>
#include <string.h>

//Separate nesting

struct Child{
	int age;
	char name[50];
};

struct Parent{
	int age;
	char name[50];
	struct Child child1;
};





int main()
{
	struct Parent parent1;
	parent1.age = 35;
	strcpy(parent1.name, "Vikas");
	parent1.child1.age = 5;
	strcpy(parent1.child1.name, "Rohan");
	printf("%s\n", parent1.child1.name);
	return 0;
}