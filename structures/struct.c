#include <stdio.h>
#include <string.h>

struct Student{
	// members of structure
	char name[50];
	int rollNo;
	float gpa;
};

// we can also create variables as soon as we define a structure
struct Parent{
	char name[50];
	int salary;
} parent1, parent2, parents[10];

int main(){
	// now declaring struct Student type variable
	// struct structureName structureVariable/s;
	// struct Student student1; // declaration
	//we access values of structure members by (.) operator
	// student1.name = "Rohit"; // you cannot assign an array
	// strcpy(student1.name, "Rohit"); //definition
	// student1.rollNo = 1;
	// student1.gpa = 8.6;
	// printf("%s\n", student1.name);
	// printf("%d\n", student1.rollNo);
	// printf("%f\n", student1.gpa);

	//syntax 2 --> initializatoin = declaration + defintion
	// struct Student student2 = {"Vishal", 2, 8.9}; //initialize
	// printf("%s\n", student2.name);
	// printf("%d\n", student2.rollNo);
	// printf("%f\n", student2.gpa);

	//syntax 3 --> 
	// struct Student st3 = {.name = "Aakash", .rollNo = 3, .gpa = 10.0};
	// printf("%s\n", st3.name);
	// printf("%d\n", st3.rollNo);
	// printf("%f\n", st3.gpa);

	// name change of studetn 2
	// strcpy(student2.name, "Shubham");
	// printf("%s\n", student2.name);
	// printf("%d\n", student2.rollNo);
	// printf("%f\n", student2.gpa);

	strcpy(parents[0].name , "Shivam");
	parents[0].salary = 1000000;

	printf("%s\n", parents[0].name);
	printf("%d\n", parents[0].salary);

	return 0;
}