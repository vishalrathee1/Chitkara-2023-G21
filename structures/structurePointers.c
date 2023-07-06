#include <stdio.h>
#include<string.h>

typedef struct Student {
	char name[50];
	int rollNo;
} Stu;

int main(){
	//pointers syntax
	// datatype(whose pointer you are trying to make) *  pointerName = &variable;
	Stu student1 = {"Rohit", 1};
	Stu  student2 = {"Dilpreet", 2};
	struct Student * student1Ptr = &student1;
	Stu * student2Ptr = &student2;

	strcpy((*student2Ptr).name, "Rohan ");
	printf("%s\n",(*student2Ptr).name );

	printf("%x\n", student2Ptr);
	printf("%x\n", &student2.name);

	//syntax 2 for accessing/dereferencing values of structure pointer
	//'->' for dereferncing values 
	printf("%s\n",student2Ptr->name);

	return 0;
}