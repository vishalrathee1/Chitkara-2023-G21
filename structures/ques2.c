#include <stdio.h>
#include <string.h>

typedef struct Student {
	char name[50];
	int marks;
} Student;

void sortAccToMarks(Student students[], int n){
	//bubble sort
	for(int i = 0; i<n-1;i++){
		for(int j=0; j<n-i-1; j++){
			if(students[j].marks > students[j+1].marks){
				//swap them
				Student temp = students[j];
				students[j] = students[j+1];
				students[j+1] = temp;
			}
		}
	}
}

void printNames(Student students[], int n){
	//printing in reverse order (highest first)
	for(int i = n-1; i>=0; i--){
		printf("%s\n", students[i].name);
	}
}

int main()
{
	Student students[5];

	//input of students details
	// for(int i =0; i<5; i++){
	// 	//name
	// 	scanf("%s", students[i].name);
	// 	//marks
	// 	scanf("%s", &students[i].marks);
	// }

	strcpy(students[0].name, "Vikas"); //95
	strcpy(students[1].name, "Shubham"); // 87
	strcpy(students[2].name, "Rohit"); // 100
	strcpy(students[3].name, "Shailly"); // 72
	strcpy(students[4].name, "Shivam"); //99

	students[0].marks = 95;
	students[1].marks = 87;
	students[2].marks = 100;
	students[3].marks = 72;
	students[4].marks = 99;

	sortAccToMarks(students, 5);
	printNames(students, 5);

	return 0;
}