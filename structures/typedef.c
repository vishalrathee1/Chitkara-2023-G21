#include<stdio.h>
#include<string.h>
//typedef syntax
// typedef existingName aliasName

typedef struct Student {
	int rollNo;
	char name[50];
} Stu;

//without using typedef it will create a variable of type Parent named parent1
struct Parent{
	int age;
} parent1;

int main(){
	struct Student student1;
	strcpy(student1.name, "Rohit");
	Stu student2;
	student2.rollNo = 2;
	strcpy(student2.name, "Dilpreet");
	printf("%s\n", student2.name);
	return 0;
}